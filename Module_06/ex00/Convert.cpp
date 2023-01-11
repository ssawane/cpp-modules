/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:12:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/06 22:39:04 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : src("noSrc"), type(NO_LIT), _char('0'), _int(0), _float(0), _double(0) {}

Convert::Convert(std::string src) : src(src), type(NO_LIT), _char('0'), _int(0), _float(0), _double(0) {}

Convert::Convert(const Convert& other) : src(other.src), type(other.type),
	_char(other._char), _int(other._int), _float(other._float), _double(other._double) {}

Convert& Convert::operator=(const Convert& other) {
	if (this != &other) {
		this->src = other.src;
		this->type = other.type;
		this->_char = other._char;
		this->_int = other._int;
		this->_float = other._float;
		this->_double = other._double;
	}
	return *this;
}

Convert::~Convert() {}

void	Convert::checkSrc(void) {
	bool	flag = true;
	bool	sign = true;
	bool	fsign = true;
	if (src.length() > 1) {
		for (size_t i = 0; i < src.length(); i++) {
			if (i == 0 && src[i] == '-') {
				sign = false;
				i++;
			}
			if (src[i] == 70 || src[i] == 102) {
				if (fsign == false)
					throw std::runtime_error("Incorrect input");
				fsign = false;
			}
			if (src[i] == '.') {
				if (i == 0 || flag == false || (i > 10 && sign == true)
					|| (i > 11 && sign == false) || i == src.size() - 1
					|| src[i + 1] == 'f')
					throw std::runtime_error("Incorrect input");
				flag = false;
			}
			else if ((src[i] < 48 || src[i] > 57) && (src[i] != 70 && src[i] != 102)) {
				throw std::runtime_error("Incorrect input");
			}
		}
	}
	else if (src.length() == 1) {
		if (src[0] <= 32)
			throw std::runtime_error("Incorrect input");
		if (src[0] >= 48 && src[0] <= 57)
			type = INT;
		else
			type = CHAR;
	}
}

void	Convert::checkOvf(void) {
	std::size_t	found = src.find('.');

	if (src.size() > 1) {
		if (found == std::string::npos) {
			if (src.length() > 11)
				throw std::runtime_error("Incorrect input");
			else {
				long	a = atol(src.c_str());
				if (a < -2147483648 || a > 2147483647)
					throw std::runtime_error("Incorrect input");
			}
			type = INT;
		}
		else {
			long	a = atol(src.c_str());
			if (a < -2147483648 || a > 2147483647)
				throw std::runtime_error("Incorrect input");
			if (src[src.size() - 1] == 'f' || src[src.size() - 1] == 'F')
				type = FLOAT;
			else
				type = DOUBLE;
		}
	}
}

bool	Convert::isPseudo(void) {
	int	flag = 6;
	std::string	liters[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (liters[i] == src) {
			flag = i;
			break;
		}
		if (i == 5)
			return false;
	}
	switch (flag) {
	case 0:
	case 3:
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
		break;
	case 1:
	case 4:
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
		break;
	case 2:
	case 5:
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
		break;
	}
	return true;
}

void	Convert::charCase(void) {
	_char = src[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	Convert::intCase(void) {
	_int = atoi(src.c_str());
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void	Convert::floatCase(void) {
	_float = atof(src.c_str());
	_int = static_cast<int>(_float);
	_char = static_cast<char>(_float);

	std::stringstream	s1;
	s1 << _float;
	std::string str(s1.str());
	std::size_t	found = str.find('.');

	std::stringstream	s2;
    s2 << std::fixed << std::setprecision(str.size() - found) << _float;
    s2 >> _double;
}

void	Convert::doubleCase(void) {
	_double = strtod(src.c_str(), NULL);
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

void	Convert::printRes(void) {
	std::cout << "char: ";
	if (_int >= 0 && _int <= 127) {
		if (_int > 32)
			std::cout << "'" << _char << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << _int << std::endl << "float: " <<  std::setprecision(7) << _float;
	if (floor(_float) == _float)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double: " <<  std::setprecision(16) << _double;
	if (floor(_double) == _double)
		std::cout << ".0";
	std::cout << std::endl;
}

void Convert::display(void) {

	if (isPseudo() == false) {
		try {
			checkSrc();
			checkOvf();
			switch (type)
			{
			case ::CHAR :
				charCase();
				break;
			case ::INT :
				intCase();
				break;
			case ::FLOAT :
				floatCase();
				break;
			case ::DOUBLE :
				doubleCase();
				break;
			default:
				break;
			}
			printRes();
		}
		catch (std::exception& ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}
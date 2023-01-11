/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:11:50 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/06 21:50:38 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <iomanip>
# include <cmath>

enum Liter {
		NO_LIT,
		CHAR,
		INT,
		FLOAT,
		DOUBLE
};

class Convert
{
private:
	std::string	src;
	Liter		type;
	char		_char;
	int			_int;
	float		_float;
	double		_double;

	bool	isPseudo(void);
	void	checkSrc(void);
	void	checkOvf(void);
	void	printRes(void);

	void	charCase(void);
	void	intCase(void);
	void	floatCase(void);
	void	doubleCase(void);

public:
	Convert();
	Convert(std::string src);
	Convert(const Convert& other);
	Convert& operator=(const Convert& other);
	~Convert();

	void	display(void);
};

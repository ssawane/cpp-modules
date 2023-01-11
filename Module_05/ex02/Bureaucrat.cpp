/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:40:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/26 11:26:58 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("defaultName"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		this->name = other.name;
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name) {
	try {
		setGrade(grade);
	}
	catch (std::exception &ex) {
		std::cout << "Cannot construct " << this->name << ". " << ex.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}

void	Bureaucrat::setGrade(const int grade) {
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else {
		this->grade = grade;
	}
}

Bureaucrat &Bureaucrat::operator++(void) {
	try {
		setGrade(this->grade - 1);
	}
	catch (const std::exception& ex) {
		std::cout << "Cannot pre-increment " << this->name << ". " << ex.what() << std::endl;
	}
	
	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	Bureaucrat	tmp = *this;

	try {
		setGrade(this->grade - 1);
	}
	catch (const std::exception& ex) {
		std::cout << "Cannot post-increment " << this->name << ". " << ex.what() << std::endl;
		return *this;
	}
	return tmp;
}

Bureaucrat &Bureaucrat::operator--(void) {
	try {
		setGrade(this->grade + 1);
	}
	catch (const std::exception& ex) {
		std::cout << "Cannot pre-decrement " << this->name << ". " << ex.what() << std::endl;
	}
	
	return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
	Bureaucrat	tmp = *this;

	try {
		setGrade(this->grade + 1);
	}
	catch (const std::exception& ex) {
		std::cout << "Cannot post-decrement " << this->name << ". " << ex.what() << std::endl;
		return *this;
	}
	return tmp;
}

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& bur) {
	os << bur.name << ", bureaucrat grade " << bur.grade << ".";
	return os;
}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std:: endl;
	}
	catch (std::runtime_error &ex) {
		std::cout << name << " couldn't sign " << form.getName() << " because "
			<< ex.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const& form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << "."<< std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->getName() << " cannot execute " << form.getName()
			<< ". " << e.what() << std::endl;
	}
	
}
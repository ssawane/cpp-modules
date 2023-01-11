/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:32:16 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/25 18:41:38 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("defaultForm"), isSigned(false), gradeToSign(1), gradeToExe(1) {}

Form::Form(std::string name, int gts, int gte) : name(name), isSigned(false) {
	try {
		setGrades(gts, gte);
	}
	catch (std::exception &ex) {
		std::cout << "Cannot construct " << this->name << " form. " << ex.what() << std::endl;
	}
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned),
	gradeToSign(other.gradeToSign), gradeToExe(other.gradeToExe) {}

Form	&Form::operator=(const Form& other) {
	if (this != &other) {
		this->name = other.name;
		this->isSigned = other.isSigned;
		this->gradeToSign = other.gradeToSign;
		this->gradeToExe = other.gradeToExe;
	}
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const {
	return this->name;
}

bool	Form::getIsSigned() const {
	return this->isSigned;
}

int		Form::getGradeToSign() const {
	return gradeToSign;
}

int		Form::getGradeToExe () const {
	return gradeToExe;
}

void	Form::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= gradeToSign) {
		isSigned = true;
	}
	else {
		throw Form::GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form " << form.getName() << ". Grade required to sign: " << form.getGradeToSign()
		<< ". Grade required to execute: " << form.getGradeToExe() << ". Signed status: "
		<< form.getIsSigned();
	return os;
}

void	Form::setGrades(int gts, int gte) {
	if (gts < 1 || gte < 1) {
		this->gradeToSign = 0;
		this->gradeToExe = 0;
		throw GradeTooLowException();
		}
	else if (gts > 150 || gte > 150) {
		this->gradeToSign = 0;
		this->gradeToExe = 0;
		throw GradeTooHighException();
	}
	else {
		this->gradeToSign = gts;
		this->gradeToExe = gte;
	}
}
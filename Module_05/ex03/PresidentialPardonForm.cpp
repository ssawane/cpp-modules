/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:33:39 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/26 11:51:51 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	Form("PresidentialPardonForm", 25, 5), target(other.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	this->target = other.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->getIsSigned() == true) {
		if (executor.getGrade() <= this->getGradeToExe()) {
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
	else {
		throw std::runtime_error("Form is not signed!");
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:33:39 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/26 11:51:44 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	Form("RobotomyRequestForm", 72, 45), target(other.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	this->target = other.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->getIsSigned() == true) {
		if (executor.getGrade() <= this->getGradeToExe()) {
			std::cout << "SOME DRILLING NOIZESS!!" << std::endl << this->target
				<< " has been robotomized successfully 50% of the time." << std::endl;
		}
		else {
			throw std::runtime_error("Robotomy is failed!");
		}
	}
	else {
		throw std::runtime_error("Form is not signed!");
	}
}
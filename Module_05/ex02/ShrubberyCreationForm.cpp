/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:14:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/26 11:17:40 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

# define TREE "\
my-app/\n\
├─ node_modules/\n\
├─ public/\n\
│  ├─ favicon.ico\n\
│  ├─ index.html\n\
│  ├─ robots.txt\n\
├─ src/\n\
│  ├─ index.css\n\
│  ├─ index.js\n\
├─ .gitignore\n\
├─ package.json\n\
├─ README.md"


ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	Form("ShrubberyCreationForm", 145, 137), target(other.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	this->target = other.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->getIsSigned() == true) {
		if (executor.getGrade() <= this->getGradeToExe()) {
			std::ofstream	fout;
			try {
				fout.open(this->target + "_shrubbery");
				fout << TREE;
				fout.close();
			}
			catch (std::exception &ex) {
				std::cout << "Cannot create file! " << ex.what() << std::endl;
			}
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
	else {
		throw std::runtime_error("Form is not signed!");
	}
}
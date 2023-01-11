/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:32:08 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/27 19:57:44 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	std::string	name;
	bool		isSigned;
	int			gradeToSign;
	int			gradeToExe;

	void					setGrades(int gradeToSign, int GradeToExe);
	friend std::ostream&	operator<<(std::ostream& os, const Form& form);

public:

	Form();
	Form(std::string name, int gradeToSign, int GradeToExe);
	Form(const Form& other);
	Form &operator=(const Form& other);
	virtual ~Form();

	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExe() const;
	void			beSigned(const Bureaucrat& bur);
	virtual void	execute(Bureaucrat const& executor) const = 0;

	class GradeTooHighException : public std::runtime_error {
	public:
		GradeTooHighException() : std::runtime_error("Grade is too high.") {}
	};

	class GradeTooLowException : public std::runtime_error {
	public:
		GradeTooLowException() : std::runtime_error("Grade is too low.") {}
	};

};
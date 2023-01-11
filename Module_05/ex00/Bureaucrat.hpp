/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:42:11 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/23 19:46:29 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <exception>

class Bureaucrat
{
private:

	std::string	name;
	int			grade;

	void					setGrade(const int grade);
	friend std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bur);

public:

	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	Bureaucrat(const std::string name, const int grade);
	~Bureaucrat();
	Bureaucrat& operator++(void);
	Bureaucrat operator++(int);
	Bureaucrat& operator--(void);
	Bureaucrat operator--(int);

	std::string getName() const;
	int			getGrade() const;

	class GradeTooHighException : public std::runtime_error {
	public:
		GradeTooHighException() : std::runtime_error("Grade is too high.") {}
	};

	class GradeTooLowException : public std::runtime_error {
	public:
		GradeTooLowException() : std::runtime_error("Grade is too low.") {}
	};

};

#endif
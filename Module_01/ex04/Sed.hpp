/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:05:55 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/18 19:47:30 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed
{
public:

	void	SetParams(char **av);
	void	Replace(std::ifstream *fin);

private:

	bool	RecordToFile(std::string line);

	std::string	instr;
	std::string	tostr;
	std::string	filename;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:15:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/19 20:28:29 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
public:

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
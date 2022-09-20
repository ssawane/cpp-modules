/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:15:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/19 21:36:16 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <iostream>
# include <string>

class HarlFilter
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
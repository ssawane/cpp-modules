/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:00:48 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/10 23:32:30 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
void	swap(T& a, T& b) {
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b) {
	return (b <= a ? b : a);
}

template <typename T>
T	max (T a, T b) {
	return (b >= a ? b : a);
}
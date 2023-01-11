/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:23:32 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/12 14:49:04 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : _array(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[_size];
	// for (int i = 0; i < _size; i++) {
	// 	_array[i] = 0;
	// }
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _size(other.size) {
	_array = new T[_size];
	for (int i = 0; i < _size; i++) {
		_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this != &other) {
		if (_array) {
			delete []_array;
		}
		this->_size = other.size;
		_array = new T[_size];
		for (int i = 0; i < _size; i++) {
			_array[i] = other._array[i];
		}		
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](int index) {
	if (index < 0 || index >= _size) {
		throw std::runtime_error("Index is out of bounds");
	}
	else {
		return _array[index];
	}
}

template <typename T>
Array<T>::~Array() {
	delete []_array;
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return _size;
}

#endif

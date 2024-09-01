/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 04:08:04 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/02 04:08:05 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/**
 * @brief Default constructor.
 *
 * Initializes an empty array.
 */
template <typename T>
Array<T>::Array() : data(nullptr), _size(0) {}

/**
 * @brief Constructor with size.
 *
 * Initializes an array with a specified size.
 *
 * @param n The size of the array.
 */
template <typename T>
Array<T>::Array(size_t n) : data(new T[n]()), _size(n) {}

/**
 * @brief Copy constructor.
 *
 * Creates a new array as a copy of an existing array.
 *
 * @param other The array to copy from.
 */
template <typename T>
Array<T>::Array(const Array& other) : data(nullptr), _size(0) {
	*this = other; // Use assignment operator for copying
}

/**
 * @brief Assignment operator.
 *
 * Assigns the contents of one array to another.
 *
 * @param other The array to assign from.
 * @return A reference to the assigned array.
 */
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) { // Prevent self-assignment
		delete[] data; // Delete existing data

		_size = other._size;
		data = new T[_size]; // Allocate new array
		for (size_t i = 0; i < _size; ++i) {
			data[i] = other.data[i];
		}
	}
	return *this;
}

/**
 * @brief Destructor.
 *
 * Releases the memory allocated for the array.
 */
template <typename T>
Array<T>::~Array() {
	delete[] data; // Free allocated memory
}

/**
 * @brief Subscript operator.
 *
 * Provides access to the array elements.
 * Throws an exception if the index is out of range.
 *
 * @param index The index of the element to access.
 * @return A reference to the element at the specified index.
 */
template <typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return data[index];
}

/**
 * @brief Subscript operator (const).
 *
 * Provides const access to the array elements.
 * Throws an exception if the index is out of range.
 *
 * @param index The index of the element to access.
 * @return A const reference to the element at the specified index.
 */
template <typename T>
const T& Array<T>::operator[](size_t index) const {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return data[index];
}

/**
 * @brief Returns the size of the array.
 *
 * @return The number of elements in the array.
 */
template <typename T>
size_t Array<T>::size() const {
	return _size;
}

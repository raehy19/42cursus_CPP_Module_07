/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 04:08:04 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/02 04:08:05 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept> // For std::out_of_range

/**
 * @brief Template class for a dynamic array.
 *
 * This class provides a simple implementation of a dynamic array with
 * support for common operations like indexing, copying, and assignment.
 *
 * @tparam T The type of the elements in the array.
 */
template <typename T>
class Array {
	private:
		T* data;      ///< Pointer to the array data
		size_t _size; ///< Size of the array

	public:
		/**
		 * @brief Default constructor.
		 *
		 * Initializes an empty array.
		 */
		Array();

		/**
		 * @brief Constructor with size.
		 *
		 * Initializes an array with a specified size.
		 *
		 * @param n The size of the array.
		 */
		Array(size_t n);

		/**
		 * @brief Copy constructor.
		 *
		 * Creates a new array as a copy of an existing array.
		 *
		 * @param other The array to copy from.
		 */
		Array(const Array& other);

		/**
		 * @brief Assignment operator.
		 *
		 * Assigns the contents of one array to another.
		 *
		 * @param other The array to assign from.
		 * @return A reference to the assigned array.
		 */
		Array& operator=(const Array& other);

		/**
		 * @brief Destructor.
		 *
		 * Releases the memory allocated for the array.
		 */
		~Array();

		/**
		 * @brief Subscript operator.
		 *
		 * Provides access to the array elements.
		 * Throws an exception if the index is out of range.
		 *
		 * @param index The index of the element to access.
		 * @return A reference to the element at the specified index.
		 */
		T& operator[](size_t index);

		/**
		 * @brief Subscript operator (const).
		 *
		 * Provides const access to the array elements.
		 * Throws an exception if the index is out of range.
		 *
		 * @param index The index of the element to access.
		 * @return A const reference to the element at the specified index.
		 */
		const T& operator[](size_t index) const;

		/**
		 * @brief Returns the size of the array.
		 *
		 * @return The number of elements in the array.
		 */
		size_t size() const;
};

// Include template implementation file
#include "Array.tpp"

#endif


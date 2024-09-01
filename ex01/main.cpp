/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:01:32 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/02 02:01:34 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

/**
 * @brief Sample function to print an integer.
 *
 * This function prints the integer value passed to it.
 *
 * @param x Reference to the integer to be printed.
 */
void printInt(int& x) {
	std::cout << x << std::endl;
}

/**
 * @brief Sample function to increment an integer.
 *
 * This function increments the integer value passed to it by 1.
 *
 * @param x Reference to the integer to be incremented.
 */
void incrementInt(int& x) {
	++x;
}

/**
 * @brief Sample function to convert a character to uppercase.
 *
 * This function converts a lowercase character to uppercase if it is within the ASCII range for lowercase letters.
 *
 * @param c Reference to the character to be converted.
 */
void toUpperCase(char& c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
}

/**
 * @brief Test function to demonstrate the usage of the iter function template.
 *
 * This function initializes arrays of integers and characters, and applies various functions to these arrays
 * using the iter function template.
 *
 * @return int Returns 0 on successful completion.
 */
int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "Original intArray:" << std::endl;
	iter(intArray, 5, printInt);  // Apply printInt to each element of intArray

	std::cout << "\nIncremented intArray:" << std::endl;
	iter(intArray, 5, incrementInt);  // Increment each element of intArray
	iter(intArray, 5, printInt);  // Print each element of the incremented intArray

	std::cout << "\nOriginal charArray:" << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << charArray[i] << ' ';  // Print each character in charArray
	}
	std::cout << std::endl;

	std::cout << "\nUppercase charArray:" << std::endl;
	iter(charArray, 5, toUpperCase);  // Convert each character in charArray to uppercase
	for (int i = 0; i < 5; ++i) {
		std::cout << charArray[i] << ' ';  // Print each character in the uppercase charArray
	}
	std::cout << std::endl;

	return 0;
}

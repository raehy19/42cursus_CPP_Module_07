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
 * @brief Sample function to print a double.
 *
 * This function prints the double value passed to it.
 *
 * @param x Reference to the double to be printed.
 */
void printDouble(double& x) {
	std::cout << x << std::endl;
}

/**
 * @brief Sample class for testing iter with complex types.
 */
class ComplexType {
	public:
		int value;
		ComplexType(int v) : value(v) {}
		void print() const { std::cout << value << std::endl; }
};

/**
 * @brief Function to print ComplexType objects.
 *
 * This function prints the value of the ComplexType object passed to it.
 *
 * @param obj Reference to the ComplexType object to be printed.
 */
void printComplexType(ComplexType& obj) {
	obj.print();
}

/**
 * @brief Function to print a constant integer.
 *
 * This function prints a constant integer value passed to it.
 *
 * @param x Reference to the constant integer to be printed.
 */
void printConstInt(const int& x) {
	std::cout << x << std::endl;
}

/**
 * @brief Test function to demonstrate the usage of the iter function template.
 *
 * This function initializes arrays of various types and applies different functions to these arrays
 * using the iter function template.
 *
 * @return int Returns 0 on successful completion.
 */
int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	const int constArray[] = {10, 20, 30, 40, 50};  // Const array for testing

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

	std::cout << "\nOriginal doubleArray:" << std::endl;
	iter(doubleArray, 5, printDouble);  // Apply printDouble to each element of doubleArray

	std::cout << "\nConst intArray:" << std::endl;
	iter(constArray, 5, printConstInt);  // Print each element of constArray

	ComplexType complexArray[] = {ComplexType(1), ComplexType(2), ComplexType(3)};
	std::cout << "\nComplexType array:" << std::endl;
	iter(complexArray, 3, printComplexType);  // Apply printComplexType to each element of complexArray

	return 0;
}

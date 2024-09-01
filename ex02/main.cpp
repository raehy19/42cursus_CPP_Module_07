/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 04:07:56 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/02 04:07:57 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

/**
 * @brief Sample class for testing with complex types.
 */
class ComplexType {
	public:
		int value;
		ComplexType(int v = 0) : value(v) {}
		ComplexType(const ComplexType& other) : value(other.value) {}
		ComplexType& operator=(const ComplexType& other) {
			if (this != &other) {
				value = other.value;
			}
			return *this;
		}
		~ComplexType() {}
};

/**
 * @brief Main function to test the Array class.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
	// Test default constructor
	Array<int> emptyArray;
	std::cout << "Size of empty array: " << emptyArray.size() << std::endl;
	std::cout << std::endl;

	// Test constructor with size
	Array<int> intArray(5);
	std::cout << "Size of int array: " << intArray.size() << std::endl;
	for (size_t i = 0; i < intArray.size(); ++i) {
		intArray[i] = i * 2;
	}
	std::cout << std::endl;

	std::cout << "Contents of int array:" << std::endl;
	for (size_t i = 0; i < intArray.size(); ++i) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test copy constructor
	Array<int> copiedArray(intArray);
	std::cout << "Contents of copied array:" << std::endl;
	for (size_t i = 0; i < copiedArray.size(); ++i) {
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test assignment operator
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Contents of assigned array:" << std::endl;
	for (size_t i = 0; i < assignedArray.size(); ++i) {
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test out-of-bounds access
	try {
		intArray[10] = 42;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Additional test for constant array access
	const Array<int> constIntArray(intArray);
	std::cout << "Contents of constIntArray:" << std::endl;
	for (size_t i = 0; i < constIntArray.size(); ++i) {
		std::cout << constIntArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test default constructor with complex types
	Array<ComplexType> complexArray(3);
	for (size_t i = 0; i < complexArray.size(); ++i) {
		complexArray[i] = ComplexType(i * 10);
	}
	std::cout << "Contents of complex array:" << std::endl;
	for (size_t i = 0; i < complexArray.size(); ++i) {
		std::cout << complexArray[i].value << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test copy constructor with complex types
	Array<ComplexType> copiedComplexArray(complexArray);
	std::cout << "Contents of copied complex array:" << std::endl;
	for (size_t i = 0; i < copiedComplexArray.size(); ++i) {
		std::cout << copiedComplexArray[i].value << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test assignment operator with complex types
	Array<ComplexType> assignedComplexArray;
	assignedComplexArray = complexArray;
	std::cout << "Contents of assigned complex array:" << std::endl;
	for (size_t i = 0; i < assignedComplexArray.size(); ++i) {
		std::cout << assignedComplexArray[i].value << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Test out-of-bounds access for complex types
	try {
		complexArray[5] = ComplexType(100);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:13:41 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/01 22:13:43 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

/**
 * Swaps the values of two variables.
 *
 * @tparam T Type of the variables.
 * @param a First variable.
 * @param b Second variable.
 */
template<typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

/**
 * Returns the smaller of two values.
 *
 * @tparam T Type of the variables.
 * @param a First value.
 * @param b Second value.
 * @return Reference to the smaller value.
 */
template<typename T>
const T &min(const T &a, const T &b) {
	return (a < b) ? a : b;
}

/**
 * Returns the larger of two values.
 *
 * @tparam T Type of the variables.
 * @param a First value.
 * @param b Second value.
 * @return Reference to the larger value.
 */
template<typename T>
const T &max(const T &a, const T &b) {
	return (a > b) ? a : b;
}

#endif

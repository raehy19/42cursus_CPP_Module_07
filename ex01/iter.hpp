/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:04:56 by rjeong            #+#    #+#             */
/*   Updated: 2024/09/02 02:04:59 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

/**
 * Applies a function to each element of an array.
 *
 * @tparam T Type of the elements in the array.
 * @tparam F Type of the function to apply to each element.
 * @param array Pointer to the array.
 * @param length Number of elements in the array.
 * @param func Function to apply to each element.
 */
template<typename T, typename F>
void iter(T *array, int length, F func) {
	for (int i = 0; i < length; ++i) {
		func(array[i]);
	}
}

#endif

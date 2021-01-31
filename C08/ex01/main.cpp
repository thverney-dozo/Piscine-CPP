/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:55:50 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/11 11:42:42 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span	sp1(20000);
	for (int i = 0; i <= 10000; i += 2)
		sp1.addNumber(i);
	std::cout << "Test array[10000]" << std::endl;
	std::cout << "Shortest: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp1.longestSpan() << std::endl << std::endl;

	Span	sp2(20);
	sp2.addNumber(0, 9, 42);
	std::cout << "Test array[20] with 0 to 9 with value 42" << std::endl;
	std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp2.longestSpan() << std::endl << std::endl;

	int n = 10;
	Span sp3 = Span(n);

	std::srand(time(0));
	for (int i = 0; i < n; i++)
 		sp3.addNumber(i * 2);
	std::cout << "Test array[10] with each nb stored for i = 0; i < 10 ; i ++ add number(i * 2)" << std::endl;
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
}

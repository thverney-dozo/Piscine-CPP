/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 02:22:42 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/27 02:35:52 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "Derived.hpp"

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base	test;
	try
	{
		test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...){}
	try
	{
		test = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) {}
	try
	{
		test = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) {}
}

int main()
{
    Base *a = new A;
    Base *b = new B;
    Base *c = new C;

    identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	std::cout << std::endl;
	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	delete a;
	delete b;
	delete c;
	return (0);
}

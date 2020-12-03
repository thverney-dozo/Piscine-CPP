/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:14:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/16 16:58:23 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat jim("Jim", 100);
    Form contrat("Contrat", 20, 1);

    std::cout << "Hello, I'm " << jim << std::endl << std::endl;
    std::cout << "Trying to set jim's grade at 0 (current is 100)" << std::endl << "{" << std::endl;
    try
    {
        jim.setGrade(0);
        std::cout << "      I am a brand new person : " << jim << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "      Illegal grade : " << e.what() << std::endl;
        std::cout << "      Things don't change for me :( I'm still " << jim << std::endl;
    }
    std::cout << "}" << std::endl << std::endl;
    std::cout << "Trying to set jim's grade at 1 (current is 100)" << std::endl << "{" << std::endl;
    try
    {
        jim.setGrade(1);
        std::cout << "      I am a brand new person : " << jim << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "      Illegal grade : " << e.what() << std::endl;
        std::cout << "      Things don't change for me :( I'm still " << jim << std::endl;
    }
    std::cout << "}" << std::endl << std::endl;
    std::cout << "Trying to increment jim's grade (current is 1)" << std::endl << "{" << std::endl;
    try
    {
        jim.incrementGrade();
        std::cout << "      I am a brand new person : " << jim << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "      Illegal grade : " << e.what() << std::endl;
        std::cout << "      Things don't change for me :( I'm still " << jim << std::endl;
    }
    std::cout << "}" << std::endl << std::endl;
    std::cout << "Trying to set jim's grade at 150 (current is 1)" << std::endl << "{" << std::endl;
    try
    {
        jim.setGrade(150);
        std::cout << "      I am a brand new person : " << jim << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "      Illegal grade : " << e.what() << std::endl;
        std::cout << "      Things don't change for me :( I'm still " << jim << std::endl;
    }
    std::cout << "}" << std::endl << std::endl;
    std::cout << "Trying to decrement jim's grade (current is 150)" << std::endl << "{" << std::endl;
    try
    {
        jim.decrementGrade();
        std::cout << "      I am a brand new person : " << jim << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "      Illegal grade : " << e.what() << std::endl;
        std::cout << "      Things don't change for me :( I'm still " << jim << std::endl;
    }
    std::cout << "}" << std::endl << std::endl;
    std::cout << "***** NOW IS SIGNING TIME *****" << std::endl << std::endl;
    jim.setGrade(10);
    std::cout << "Jim is trying to sign a 20 grade Contrat (Jim 's current grade is 10)" << std::endl << "{" << std::endl;
    std::cout << "      ";
    std::cout << contrat << std::endl;
	try
	{
        std::cout << "      ";
		contrat.beSigned(jim);
	}
	catch(std::exception)
	{
        std::cout << "      ";
		std::cout << jim.getName() << " can't sign " << contrat.getName() << " because his grade is too low." << std::endl;
	}
    std::cout << "}" << std::endl << std::endl;
    jim.setGrade(30);
    std::cout << "Jim is trying to sign a 20 grade Contrat (Jim 's current grade is 30)" << std::endl << "{" << std::endl;
    std::cout << "      ";
    std::cout << contrat << std::endl;
	try
	{
        std::cout << "      ";
		contrat.beSigned(jim);

	}
	catch(std::exception)
	{
		std::cout << jim.getName() << " can't sign " << contrat.getName() << " because his grade is too low." << std::endl;
	}
    std::cout << "}" << std::endl << std::endl;
}
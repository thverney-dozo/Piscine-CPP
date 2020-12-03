/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 05:31:43 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 17:12:17 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    _constructors[0] = ShrubberyCreationForm::newShrub;
	_formNames[0] = "shrubbery creation";
	_constructors[1] = RobotomyRequestForm::newRobot;
	_formNames[1] = "robotomy request";
	_constructors[2] = PresidentialPardonForm::newPresi;
	_formNames[2] = "presidential pardon";
}

Intern::~Intern(){}

Intern::Intern(const Intern &cpy)
{
    *this = cpy;
}

Intern &Intern::operator=(const Intern &affect)
{
    (void)affect;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	for (unsigned int i = 0; i < 3; i++)
	{
		if (_formNames[i] == formName)
		{
			return ((_constructors[i])(target));
		}
	}
	std::cout << "No form with name " << formName << "." << std::endl;
	return (nullptr);
}
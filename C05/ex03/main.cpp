/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:14:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 17:36:16 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int     main()
{
    Bureaucrat				M_John_CEO("M_John_CEO", 1);
    Bureaucrat				Dr_Jim("Dr_Jim", 140);
    Intern JakeTheIntern;
    Form* form;

    form = JakeTheIntern.makeForm("shrubbery creation", "M_John_CEO");
    M_John_CEO.signForm(*form);
    M_John_CEO.executeForm(*form);
    delete form;
    form = JakeTheIntern.makeForm("president", "M_John_CEO");
    form = JakeTheIntern.makeForm("presidential pardon", "M_John_CEO");
    M_John_CEO.signForm(*form);
	M_John_CEO.executeForm(*form);
	delete form;
    form = JakeTheIntern.makeForm("robotomy request", "Dr_Jim");
	Dr_Jim.signForm(*form);
	Dr_Jim.executeForm(*form);
	delete form;
    return (0);
}

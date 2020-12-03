/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:14:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 05:27:44 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int     main()
{
    Bureaucrat				M_John("M_John", 1);
    Bureaucrat				Dr_Jim("Dr_Jim", 140);
    ShrubberyCreationForm	shrubbery("Tree-Vis Scott");
    RobotomyRequestForm		robotomy("Jake");
    PresidentialPardonForm	presidential("Jil");

    Dr_Jim.signForm(shrubbery);
    Dr_Jim.executeForm(shrubbery);
    M_John.executeForm(shrubbery);
    M_John.executeForm(robotomy);
    M_John.signForm(robotomy);
    M_John.executeForm(robotomy);
    Dr_Jim.signForm(presidential);
    M_John.executeForm(presidential);
    M_John.signForm(presidential);
    M_John.executeForm(presidential);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 05:31:46 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 06:40:17 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        Form		*(*_constructors[3])(std::string target); // array of 3 constructors (target is a/the-only parameter)
        std::string _formNames[3];
    public:
        Intern();
        ~Intern();
        Intern(const Intern &cpy);
        Intern  &operator=(const Intern &affect);
        Form    *makeForm(std::string formName, std::string target);
};

#endif
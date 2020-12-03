/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:50:05 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 05:24:50 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
	_target = cpy.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &affect)
{
    _target = affect._target;
    return *this;
}


PresidentialPardonForm::~PresidentialPardonForm()
{}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

PresidentialPardonForm::FileFailureException::FileFailureException()
{}

const char* PresidentialPardonForm::FileFailureException::what() const throw()
{
	return " cannot write to file";
}

void    PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
    Form::execute(bureaucrat);
	std::cout << bureaucrat.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}

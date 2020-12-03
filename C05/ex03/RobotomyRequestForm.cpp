/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:03:36 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 06:31:47 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
	_target = cpy.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &affect)
{
    _target = affect._target;
    return *this;
}


RobotomyRequestForm::~RobotomyRequestForm()
{}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

RobotomyRequestForm::FileFailureException::FileFailureException()
{}

const char* RobotomyRequestForm::FileFailureException::what() const throw()
{
	return " cannot write to file";
}

void    RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
    Form::execute(bureaucrat);
    std::cout << "DRRRRRRRRRrrrrrrr" << std::endl;
    if (rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully!"
            << std::endl;
    else
        std::cout << getTarget() << " it's a failure !"
            << std::endl;
}

Form *RobotomyRequestForm::newRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}
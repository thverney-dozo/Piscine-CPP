/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:14:58 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 23:26:12 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException()
{}

Form::GradeTooHighException::GradeTooHighException()
{}

Form::~Form()
{}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
    _name(name), _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute), _isSigned(false)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &cpy):
    _name(cpy.getName()), _gradeToSign(cpy.getGradeToSign()),
    _gradeToExecute(cpy.getGradeToExecute())
{
    *this = cpy;
}

Form &Form::operator=(const Form &affect)
{
    _isSigned = affect._isSigned;
    return *this;
}

std::ostream	&operator<<(std::ostream &out, const Form &rhs)
{
	out << rhs.getName() << " minimum signing grade is : " << rhs.getGradeToSign()
    << ", and minimum executing grade is : " << rhs.getGradeToExecute() << ".";
	return (out);
}

int   Form::getGradeToSign() const
{
    return _gradeToSign;
}
int   Form::getGradeToExecute() const
{
    return _gradeToExecute;
}
std::string   Form::getName() const
{
    return _name;
}

void        Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	std::cout << bureaucrat.getName() << " signs " << getName() << "." << std::endl;
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "grade too low!";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:13:37 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 05:24:34 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &affect)
{
    _grade = affect.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{}

const std::string &Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;

}

void Bureaucrat::incrementGrade()
{
	setGrade(getGrade() - 1);
}

void Bureaucrat::decrementGrade()
{
	setGrade(getGrade() + 1);
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName()
            << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception &e)
	{
		std::cout << _name << " can't execute " << form.getName() << " because" << e.what() << "." << std::endl;
	}
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (out);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}
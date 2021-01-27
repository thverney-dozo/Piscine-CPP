/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:13:37 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 20:12:09 by aeoithd          ###   ########.fr       */
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
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName()
            << " because his " << e.what() << std::endl;
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
	return "grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:07:59 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 05:25:00 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::_tree =
    "                           #############\n"
    "                       ######################\n"
    "                     ##########################              ____\n"
	"                   ###############################          /@@@@\\\n"
    "   _____          #################################         |@@@@|\n"
    "  \\__  \\  _____  ###############################            |@@@@|\n"
    "      \\ | / ___/   #############################            |@@@@|\n"
    " ______\\|/ /         #########################              |@@@@|\n"
    "\\____/| |_/              ####\\       /####                   \\@@/\n"
    "       | |                    |     |                         ||\n"    
    "       | |                    |     |                         ||\n"
    "       | |                    | m+t |                         ||\n"
    "       | |                    | <3  |                         ||\n"
    "      _/|\\_                 __/      \\__                     //\\\\";
;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("_shrubbery", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
	_target = cpy.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &affect)
{
    _target = affect._target;
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

ShrubberyCreationForm::FileFailureException::FileFailureException()
{}

const char* ShrubberyCreationForm::FileFailureException::what() const throw()
{
	return " cannot write to file";
}

void    ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
    std::string     filename = getTarget() + "_shrubbery";
    std::ofstream   file;
    
    file.open(filename.c_str());
    if(file.bad())
        throw FileFailureException();
    Form::execute(bureaucrat);
	std::cout << "Creating " << filename << "." << std::endl;
	file << _tree << std::endl;
	file.close();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:08:03 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 20:42:28 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <stdexcept>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
    private:
        std::string                 _target;
        static const std::string    _tree;

        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &affect);
        virtual ~ShrubberyCreationForm();

        class FileFailureException: public std::exception
        {
            public:
                FileFailureException();
                virtual const char* what() const throw();
        };
        
        std::string getTarget(void) const;

		virutal void                    execute(const Bureaucrat &bureaucrat) const;
};

#endif
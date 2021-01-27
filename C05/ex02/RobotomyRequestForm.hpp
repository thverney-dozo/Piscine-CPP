/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:02:39 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 20:42:11 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include <stdexcept>
# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm: public Form
{
    private:
        std::string                 _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
        RobotomyRequestForm   &operator=(const RobotomyRequestForm &affect);
        virtual ~RobotomyRequestForm();

        class FileFailureException: public std::exception
        {
            public:
                FileFailureException();
                virtual const char* what() const throw();
        };
        
        std::string getTarget(void) const;

		virtual void                    execute(const Bureaucrat &bureaucrat) const;
};

#endif
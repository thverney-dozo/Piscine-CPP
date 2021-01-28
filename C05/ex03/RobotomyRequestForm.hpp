/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:02:39 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 07:03:54 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <stdexcept>
# include "Form.hpp"
# include <fstream>
# include <cstdlib>

class RobotomyRequestForm: public Form
{
    private:
        std::string                 _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
        RobotomyRequestForm   &operator=(const RobotomyRequestForm &affect);
        ~RobotomyRequestForm();

        class FileFailureException: public std::exception
        {
            public:
                FileFailureException();
                virtual const char* what() const throw();
        };
        
        std::string getTarget(void) const;

		void                    execute(const Bureaucrat &bureaucrat) const;
        static Form             *newRobot(std::string target);
};

#endif

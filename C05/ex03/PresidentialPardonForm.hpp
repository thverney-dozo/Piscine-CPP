/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:50:08 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 07:03:50 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <stdexcept>
# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm: public Form
{
    private:
        std::string                 _target;

        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &cpy);
        PresidentialPardonForm   &operator=(const PresidentialPardonForm &affect);
        ~PresidentialPardonForm();

        class FileFailureException: public std::exception
        {
            public:
                FileFailureException();
                virtual const char* what() const throw();
        };
        
        std::string getTarget(void) const;

		void                    execute(const Bureaucrat &bureaucrat) const;
        static Form             *newPresi(std::string target);

};

#endif
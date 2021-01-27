/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:15:00 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 20:04:54 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
class Form;
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string   _name;
        const int            _gradeToSign;
        const int           _gradeToExecute;
        bool                _isSigned;
        Form();

    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &cpy);
        Form                &operator=(const Form &affect);
        ~Form();
        int           getGradeToSign()const ;
        int           getGradeToExecute()const ;
        std::string   getName()const ;
        bool          getIsSigned() const;
        void                beSigned(Bureaucrat &bureaucrat);
        class GradeTooHighException: public std::exception
        {
            public:
                GradeTooHighException();
                virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException();
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Form &c);

#endif
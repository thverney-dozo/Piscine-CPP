/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:15:00 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 17:30:56 by aeoithd          ###   ########.fr       */
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
        virtual ~Form();
        int           getGradeToSign()const ;
        int           getGradeToExecute()const ;
        std::string   getName()const ;
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
        class UnsignedException: public std::exception
        {
            public:
                UnsignedException();
                virtual const char* what() const throw();
        };

        virtual void			execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &c);

#endif
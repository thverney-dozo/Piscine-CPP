/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:14:13 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/18 05:24:39 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
        Bureaucrat();

    public:
        Bureaucrat(std::string name, int _grade);
        Bureaucrat(const Bureaucrat &cpy);
        Bureaucrat          &operator=(const Bureaucrat &affect);
        ~Bureaucrat();
        const std::string   &getName() const;
        int                 getGrade() const;
        void                setGrade(int grade);
        void                decrementGrade();
        void                incrementGrade();
        void                signForm(Form &form);
		void				executeForm(Form &form);

        class               GradeTooHighException: public std::exception
        {
            public:
                GradeTooHighException();
                virtual const char* what() const throw();

        };
        class               GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException();
                virtual const char* what() const throw();

        };
};

std::ostream				&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
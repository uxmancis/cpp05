/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:03:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 14:04:46 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "main.hpp"

class Bureaucrat
{
    private: /* Only the Bureaucrat class itself can access or modify them directly*/
        const std::string   _name; //Constructor: once set in the constructor, it cannot change
        int                 _grade; //[1-150] from highest to lowest

    
    public: /* Everything can be accessed from outside the class*/
        /*Canonical Orthodox 'The rule of 4': */
        Bureaucrat(void); /* Default Constructor */
        Bureaucrat (const std::string& name, int grade); //Custom constructor
        Bureaucrat(const Bureaucrat& copy); /* Copy Constructor */
        Bureaucrat& operator=(const Bureaucrat& copy); /* Copy Assignment Operator */
        ~Bureaucrat(); /* Destructor */

        /* Getters: 'const' at the end = "Hey don't worry, I'm just reading - not changing anything"*/
        const std::string&  getName() const;
        int                 getGrade()  const;

        /* Grade manipulation */
        void                improveGrade(int grade);
        void                worsenGrade(int grade);

        /****************************************************************************
        * Subject tells us the following:
        * "Exception classes do not have to be designed in Orthodox Canonical Form.
        * Additionally, no more files than specified should be turned in in the project deliverable.
        ***************************************************************************"*/
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade too high! (Less than 1)";
            }
                
        };
        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade too low! (More than 150)";
            }
                
        };
};

#endif

/* std::exception is the base class for standard exceptions. */


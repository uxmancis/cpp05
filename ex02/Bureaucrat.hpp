/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:03:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 12:56:02 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "main.hpp"

class Form;

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
        void                signForm(AForm& form);

        /* New function: */
        void                executeForm(AForm const & form) const;
};

#endif

/* std::exception is the base class for standard exceptions. */
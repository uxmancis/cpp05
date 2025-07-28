/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:03:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/28 16:02:16 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define GREEN "\033[0;92m"
#define RED "\033[0;31m"
#define AQUAMARINE "\033[0;96m"
#define MAGENTA "\033[0;95m"
#define YELLOW "\033[0;93m"
#define RESET_COLOR "\033[0m"

#include <string> 
#include <iostream> //std::cout
#include <exception>

class Form;

class Bureaucrat
{
    private: /* Only the Bureaucrat class itself can access or modify them directly*/
        const std::string   _name; //Constructor: once set in the constructor, it cannot change
        int                 _grade; //[1-150] from highest to lowest

    
    public: /* Everything can be accessed from outside the class*/
        /*Canonical Orthodox 'The rule of 4': */

        /** Overloading: Default constructor and constructor with parameters*/
        Bureaucrat(void); /* Default Constructor */
        Bureaucrat (const std::string& name, int grade); //Custom constructor
        Bureaucrat(const Bureaucrat& copy); /* Copy Constructor */
        Bureaucrat& operator=(const Bureaucrat& copy); /* Copy Assignment Operator */
        ~Bureaucrat(); /* Destructor */

        /* Getters: 'const' at the end = "Hey don't worry, I'm just reading - not changing anything"*/
        const std::string&  getName() const;
        int                 getGrade()  const;

        /* Grade management */
        void                improveGrade(int value, Bureaucrat bureaucrat);
        void                worsenGrade(int value, Bureaucrat bureaucrat);
        void                signForm(Form& Form);

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

//Output stream overload, Insertion operator (outside the class)
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b); //overload of the insertion (<<) to print


#endif

/* std::exception is the base class for standard exceptions. */


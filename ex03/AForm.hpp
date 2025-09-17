/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:51:57 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:20:22 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "main.hpp"

class Bureaucrat;

/* 	ABSTRACT class (blueprint for concrete classes): AForm is the base abstract class, it cannot be instantiated. 
*	CONCRETE classes must be created to implement real behavior: 
*		ShrubberyCreationForm, PResidentialPardonForm, RobotomyRequestForm
*****************************************************************************************************************/
class AForm
{
    private:
        const std::string	_name; //test
        bool              	_isSigned;
        int					_gradeToSign; //Required grade to sign Form
        int      			_gradeToExecute; //Required grade to exec Form

	public:
		/*Canonical Orthodox 'The rule of 4': */
        AForm(void); /* Default Constructor */
		AForm(const std::string& name, int gradeToSign, int gradeToExecute); /* Custom Constructor */
        AForm(const AForm& copy); /* Copy Constructor */
        AForm& operator=(const Bureaucrat& copy); /* Copy Assignment Operator */
        virtual ~AForm(); /* Destructor */

		/* Getters: */
		const std::string&	getName() const;
		bool 				getIsSigned() const;
		int 				getGradeToSign() const;
		int					getGradeToExecute() const;

		/* Oher member functions: */
		void				beSigned(Bureaucrat &bureaucrat);
		void				execute(const Bureaucrat &executor) const;
 

	protected:
		/* Pure virtual function: */
		virtual void		doExecute(const Bureaucrat &executor) const = 0;

		/****************************************************************************
        * Subject tells us the following:
        * "Exception classes do not have to be designed in Orthodox Canonical Form.
        * Additionally, no more files than specified should be turned in in the project deliverable.
        ***************************************************************************"*/
       /* Class declaration */
		class GradeTooHighException : public std::exception
        {
            public:
				virtual const char* what() const throw()
				{
					return "Grade too high! (Less than 1) - Exception";
				}
                
        };
		
		/* Class declaration */
        class GradeTooLowException : public std::exception
        {
            public:
				virtual const char* what() const throw()
				{
					return "Grade too low! (More than 150) - Exception";
				}
                
        };

		/* Class declaration */
		class SignGradeRequirementNotMet : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Sign Grade Requirement NOT MET - Exception";
				}
		};

		/* Class declaration */
		class NotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Not Signed - Exception";
				}
		};
};



#endif
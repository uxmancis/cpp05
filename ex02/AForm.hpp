/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:51:57 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 12:37:23 by uxmancis         ###   ########.fr       */
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
        const std::string 	_name;
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
		void			beSigned(Bureaucrat& bureaucrat);

		/* Pure virtual function: */
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:51:57 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/28 17:16:34 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;

class Form
{
    private:
        const std::string 	_name;
        bool              	_isSigned;
        int					_signGrade; //Required grade to sign Form
        int      			_execGrade; //Required grade to exec Form

	public:
		/*Canonical Orthodox 'The rule of 4': */
        Form(void); /* Default Constructor */
		Form(const std::string name); /* Custom Constructor */
        Form(const Form& copy); /* Copy Constructor */
        Form& operator=(const Bureaucrat& copy); /* Copy Assignment Operator */
        ~Form(); /* Destructor */

		/* Getters: */
		const std::string	getName() const;
		bool 				getIsSigned() const;
		int 				getSignGrade() const;
		int					getExecGRade() const;

		/* 3 Exceptions, same as Bureaucrat class*/
		/* Class declaration */
		class GradeTooHighException : public std::exception
        {
            public:
				virtual const char* what() const throw()
				{
					return "Grade too high! (Less than 1)";
				}
                
        };
		
		/* Class declaration */
        class GradeTooLowException : public std::exception
        {
            public:
				virtual const char* what() const throw()
				{
					return "Grade too low! (More than 150)";
				}
                
        };

		/* Class declaration */
		class SignGradeRequirementNotMet : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Sign Grade Requirement NOT MET";
				}
		};

		/* Oher member functions: */
		void			beSigned(Bureaucrat b);
};

std::ostream& operator<<(std::ostream& out, const Form& f); //overload of the insertion (<<) to print


#endif
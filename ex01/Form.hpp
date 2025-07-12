/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:51:57 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 18:21:07 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "main.hpp"

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

		/* Oher member functions: */
		void			beSigned(Bureaucrat Bureaucrat);
};

#endif
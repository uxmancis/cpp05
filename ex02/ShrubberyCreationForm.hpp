/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:01:19 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/16 18:49:25 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "main.hpp"

class ShrubberyCreationForm : public AForm
{
    private: 
        std::string _target;
        
    public:
        /*Canonical Orthodox 'The rule of 4': */
        ShrubberyCreationForm(); /* Default Constructor */
        ShrubberyCreationForm(const std::string& target); /* Custom Constructor */
        ShrubberyCreationForm(const ShrubberyCreationForm& copy); /* Copy Constructor */
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy); /* Copy Assignment Operator */
        ~ShrubberyCreationForm(); /* Destructor */

        void		doExecute(const Bureaucrat &executor) const;
};

#endif
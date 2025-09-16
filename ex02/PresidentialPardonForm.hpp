/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:05:00 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/16 18:49:15 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "main.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    
    public:
        /*Canonical Orthodox 'The rule of 4': */
        PresidentialPardonForm(); /* Default Constructor */
        PresidentialPardonForm(const std::string& target); /* Custom Constructor */
        PresidentialPardonForm(const PresidentialPardonForm& copy); /* Copy Constructor */
        PresidentialPardonForm& operator=(const PresidentialPardonForm& copy); /* Copy Assignment Operator */
        ~PresidentialPardonForm(); /* Destructor */

        /* AForm base class (abstract) virtual function's implementation*/
        void		doExecute(const Bureaucrat &executor) const;
};

#endif
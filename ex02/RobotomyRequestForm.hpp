/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:03:59 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 17:14:47 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "main.hpp"

class RobotomyRequestForm : public AForm
{
    private: 
        std::string _target;
        
    public:
        /*Canonical Orthodox 'The rule of 4': */
        RobotomyRequestForm(); /* Default Constructor */
        RobotomyRequestForm(const std::string& target); /* Custom Constructor */
        RobotomyRequestForm(const RobotomyRequestForm& copy); /* Copy Constructor */
        RobotomyRequestForm& operator=(const RobotomyRequestForm& copy); /* Copy Assignment Operator */
        ~RobotomyRequestForm(); /* Destructor */

        void execute(Bureaucrat const & executor) const;
};

#endif
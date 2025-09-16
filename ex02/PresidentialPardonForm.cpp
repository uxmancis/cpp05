/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:34:23 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/16 19:04:43 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Default Constructor */
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "                 PresidentialPardonForm created - SignGrade: 25, ExecGrade: 5" << std::endl;

}

/* Custom Constructor */
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "                 PresidentialPardonForm created - SignGrade: 25, ExecGrade: 5 - Name: " << target << std::endl;
}

void PresidentialPardonForm::doExecute(const Bureaucrat &executor) const
{
    std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm()
{}
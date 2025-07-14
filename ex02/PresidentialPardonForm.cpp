/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:34:23 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 17:14:07 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

virtual void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecutable(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
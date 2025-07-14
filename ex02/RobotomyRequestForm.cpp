/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:31:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 17:14:12 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

virtual void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkExecutable(executor);

    std::cout << "🔧 * drilling noises * 🔧" << std::endl;

    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << _target << " failed." << std::endl;
}


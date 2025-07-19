/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:31:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 12:53:44 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("ShrubberyCreationForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("ShrubberyCreationForm", 72, 45)
{
    (void)target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    // checkExecutable(executor);
    (void)executor;
    std::cout << "🔧 * drilling noises * 🔧" << std::endl;

    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << _target << " failed." << std::endl;
}


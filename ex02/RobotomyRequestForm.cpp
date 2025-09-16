/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:31:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/16 19:04:48 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Default Constructor */
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "                 RobotomyRequestForm created - SignGrade: 72, ExecGrade: 45" << std::endl;
}

/* Custom Constructor */
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "                 RobotomyRequestForm created - SignGrade: 72, ExecGrade: 45 - Name: " << target << std::endl;
}

void RobotomyRequestForm::doExecute(Bureaucrat const &executor) const
{
    (void) executor;
    std::cout << "🔧 * drilling noises * 🔧" << std::endl;

    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << executor.getName() << " failed." << std::endl;
}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm()
{}

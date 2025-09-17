/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:26:30 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:51:45 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Default Constructor */
Intern::Intern(void)
{
    std::cout << "Intern created" << std::endl;
}

/* Custom Constructor */
Intern::Intern(std::string name, int grade)
{
    std::cout << "Intern created, named " GREEN << name << RESET_COLOR " and with grade " YELLOW << grade << RESET_COLOR "." << std::endl;
}

/* Member function */
AForm* Intern::makeForm(const std::string &formName, const std::string &target)
{
    int i;
    AForm *form;
    std::string validForms[]= {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    i = 0;
    while (i < 3) //Cases are 0, 1 and 2, as index in validForms starts in 0 as well.
    {
        if (validForms[i] == formName)
            break;
        i++;
    }
    
    switch(i)
    {
        case 0:
            form = new ShrubberyCreationForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            break;
        default:
            form = NULL;
            throw NonValidFormException();
    }
    
    std::cout << "Intern creates " << form->getName() << std::endl;
    return(form);
}

/* Destructor */
Intern::~Intern(void)
{
}
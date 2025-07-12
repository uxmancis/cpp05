/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:55 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:49:15 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Default Constructor */
Bureaucrat::Bureaucrat(void) : _name("Unnamed"), _grade(150)
{
    std::cout << "Bureaucrat was created based on " AQUAMARINE << "predefined name and grade" << std::endl;
}


/* Custom Constructor */
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat was created, named " GREEN << name << RESET_COLOR " and with grade " YELLOW << grade << RESET_COLOR "." << std::endl;
}

/*Copy Constructor*/
Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name), _grade(copy._grade)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

/* Copy assignment operator
*
*  It defines how one object is assigned to another existing object of the same class.
*
*  How to call it?
*       MyClass a;
*       MyClass b;
*       a = b
 */
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        _grade = copy._grade; //_mame is const, can't assign
    return *this;
}

/* Destructor */
Bureaucrat::~Bureaucrat(void)
{
}

/* Improve grade (closer to 1) */
void Bureaucrat::improveGrade(int value)
{
    if (_grade - value < 1)
        throw GradeTooLowException();
    _grade -= value;
}

/* Worsen grade (closer to 150) */
void Bureaucrat::worsenGrade(int value)
{
    if (_grade + value > 150)
        throw GradeTooHighException();
    _grade += value;
}

/* Output stream operator */
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}



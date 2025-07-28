/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:55 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/28 17:20:53 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* Default Constructor */
Bureaucrat::Bureaucrat(void) : _name("Unnamed"), _grade(150)
{
    std::cout << "Bureaucrat was created based on " AQUAMARINE << "predefined name and grade" << std::endl;
}

/* Custom Constructor */
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat was created, named " GREEN << name << RESET_COLOR " and with grade " YELLOW << _grade << RESET_COLOR "." << std::endl;
}

/*Copy Constructor*/
Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name), _grade(copy._grade)
{
    // std::cout << "Copy constructor called" << std::endl;
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
        _grade = copy._grade; //_name is const, can't assign
    return *this;
}

/* Destructor */
Bureaucrat::~Bureaucrat(void)
{
}

/* Improve grade (closer to 1, 1 = Highest possible grade) */
void Bureaucrat::improveGrade(int value, Bureaucrat bureaucrat)
{
    /* Was not possible to improveGrade*/
    if (_grade - value < 1)
        throw GradeTooHighException();

    /* Yes grade was improved*/
    std::cout << "Grade of bureaucrat named " GREEN << bureaucrat.getName() << RESET_COLOR " was improved. Previous grade: " YELLOW << bureaucrat.getGrade() << RESET_COLOR;
    _grade -= value;
    std::cout << " Improved Grade: " YELLOW << _grade << RESET_COLOR << std::endl; 
    
}

/* Worsen grade (closer to 150, 150 = Lowest possible grade) */
void Bureaucrat::worsenGrade(int value, Bureaucrat bureaucrat)
{
    /* Was not possible to worsen Grade*/
    if (_grade + value > 150)
        throw GradeTooLowException();
    /* Yes grade was worsened*/
    std::cout << "Grade of bureaucrat named " GREEN << bureaucrat.getName() << RESET_COLOR " was worsened. Previous grade: " YELLOW << bureaucrat.getGrade() << RESET_COLOR;
    _grade += value;
    std::cout << " Worsened Grade: " YELLOW << _grade << RESET_COLOR << std::endl; 
}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::signForm(Form& form)
{
    form.beSigned(*this); //*this is used so that we send Bureaucrat object to form object
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    std::cout << RED "[SUBJECT REQUIRED PRINT using << OPERATOR]:" << std::endl;
    out << b.getName() << ", bureaucrat grade " RESET_COLOR << b.getGrade() << ".";
    return out;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:00:25 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 17:20:56 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include "Bureaucrat.hpp"

/* Default Constructor */
AForm::AForm(): _isSigned(false), _signGrade(50), _execGrade(100)
{}

/* Custom Constructor */
AForm::AForm(const std::string& name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(50), _execGrade(100)
{
    std::cout << YELLOW << name << RESET_COLOR " named Form was created, pending to be signed." << std::endl;
}

/* Copy Constructor */
AForm::AForm(Form const& copy): _name(copy._name), _isSigned(false), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
    std::cout << "Copy constructor called" << std::endl;
    // (void)copy;
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
// Form &Form::operator=(const Form                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              n                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              & copy)
// {
//     if (this != &copy)
//         _grade = copy._grade; //_mame is const, can't assign
//     return *this;
// }


/* Destructor */
AForm::~AForm()
{}

void AForm::beSigned(Bureaucrat bureaucrat)
{
    try
    {
        /* If Bureaucrat's grade's valid [1-150] and high enough (closer to 1)*/
        if (bureaucrat.getGrade() <= getSignGrade() 
            && bureaucrat.getGrade() >= 1 && bureaucrat.getGrade() <= 150 
            && _isSigned == false)
        {
            _isSigned = true;
            std::cout << bureaucrat.getName() << " bureaucrat " GREEN "signed " RESET_COLOR << getName() << " form." << std::endl;
        }
        else
        {
            std::cout << bureaucrat.getName() << " bureaucrat " RED "couldn't sign " RESET_COLOR << getName() << " form." << std::endl;
            if (bureaucrat.getGrade() < 1)
                throw GradeTooHighException();
            else if (bureaucrat.getGrade() > 150)
                throw GradeTooLowException();
            else
                throw SignGradeRequirementNotMet();
        }
        // else if (Bureaucrat.getGrade() < 1)
        // {
        //     std::cout << Bureaucrat.getName() << " bureaucrat " RED "couldn't sign " RESET_COLOR << getName() << " form." << std::endl;
        //     throw GradeTooHighException();
        // }   
        // else if (Bureaucrat.getGrade() > 150)
        // {
        //     std::cout << Bureaucrat.getName() << " bureaucrat " RED "couldn't sign " RESET_COLOR << getName() << " form." << std::endl;
        //     throw GradeTooLowException();
        // }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }
}

const std::string Form::getName() const
{
    return(_name);
}

bool Form::getIsSigned() const
{
    return(_isSigned);
}

int Form::getSignGrade() const
{
    return (_signGrade);
}

int	Form::getExecGRade() const
{
    return (_execGrade);
}
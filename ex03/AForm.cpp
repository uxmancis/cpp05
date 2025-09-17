/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:00:25 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:18:20 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include "Bureaucrat.hpp"

/* Default Constructor */
AForm::AForm(): _isSigned(false), _gradeToSign(50), _gradeToExecute(100)
{}

/* Custom Constructor */
AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << YELLOW << "                 " << name << RESET_COLOR " named Form was created, " YELLOW " pending to be signed." RESET_COLOR << std::endl;
    (void)gradeToSign;
    (void)gradeToExecute;
}

/* Copy Constructor */
AForm::AForm(AForm const& copy): _name(copy._name), _isSigned(false), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
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

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    // std::cout << RED << "Bureaucrat's grade: " << bureaucrat.getGrade() << std::endl;
    // std::cout << "Required grade to Sign: " << getGradeToSign() << RESET_COLOR << std::endl;
    
    try
    {
        /* If Bureaucrat's grade's valid [1-150] and high enough (closer to 1)*/
        if (bureaucrat.getGrade() <= getGradeToSign() 
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

void AForm::execute(const Bureaucrat &executor) const
{
    if (!getIsSigned())
        throw NotSigned();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    doExecute(executor);
}

/* Getters */
const std::string& AForm::getName() const
{
    return(_name);
}

bool AForm::getIsSigned() const
{
    return(_isSigned);
}

int AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

/* Destructor */
AForm::~AForm()
{}

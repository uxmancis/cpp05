/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:00:25 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/28 17:20:44 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* Default Constructor */
Form::Form(): _isSigned(false), _signGrade(50), _execGrade(100)
{}

/* Custom Constructor */
Form::Form(const std::string name) : _name(name), _isSigned(false), _signGrade(50), _execGrade(100)
{
    std::cout << YELLOW << name << RESET_COLOR " named Form was created, pending to be signed.\n > SignGrade: " YELLOW << _signGrade << RESET_COLOR ".\n > ExecGrade: " YELLOW << _execGrade << RESET_COLOR << std::endl;
}

/* Copy Constructor */
Form::Form(Form const& copy): _name(copy._name), _isSigned(false), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
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
Form::~Form()
{}

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

void Form::beSigned(Bureaucrat b)
{
    std::cout << "Is bureaucrat " << GREEN << b.getName() << RESET_COLOR << " gonna be able to sign the Form?" << std::endl;
    /* If Bureaucrat's grade's valid [1-150] and high enough (closer to 1)*/
    if (b.getGrade() <= getSignGrade() 
        && b.getGrade() >= 1 && b.getGrade() <= 150 
        && _isSigned == false)
    {
        _isSigned = true;
        std::cout << b.getName() << " bureaucrat " GREEN "signed " RESET_COLOR << getName() << " form." << std::endl;
    }
    else
    {
        std::cout << b.getName() << " bureaucrat " RED "couldn't sign " RESET_COLOR << getName() << " form." << std::endl;
        if (b.getGrade() < 1)
            throw GradeTooHighException();
        else if (b.getGrade() > 150)
            throw GradeTooLowException();
        else
            throw SignGradeRequirementNotMet();
    }
}

std::ostream& operator<<(std::ostream& out, const Form& f) 
{
    std::cout << RED "[SUBJECT REQUIRED PRINT using << OPERATOR]:" << std::endl;
    out << f.getName() << "form has been signed " RED << f.getIsSigned() << RED " times\n > SignGrade: " YELLOW << f.getSignGrade() << RESET_COLOR RED ".\n > ExecGrade: " YELLOW << f.getExecGRade() << RESET_COLOR << std::endl;
    return out;
}


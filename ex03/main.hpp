/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:54:00 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:00:08 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#define GREEN "\033[0;92m"
#define RED "\033[0;31m"
#define AQUAMARINE "\033[0;96m"
#define MAGENTA "\033[0;95m"
#define YELLOW "\033[0;93m"
#define RESET_COLOR "\033[0m"

#include <string> 
#include <iostream> //std::cout
#include <stdlib.h> //std::srand
#include <ctime> //std::ctime
#include <fstream> //std::ofstream

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

std::ostream& operator<<(std::ostream& out, const AForm &form);
    //1st understanding.- in order to be able to print std::cout << *rrf, instances from AForm class
    //2nd realization.- NOP. Left operand: std::ostream. Right operand: our objecct (AForm). As
    //left isn't my class, the operator can't be a member in my class.
    //3rd FINAL CONCLUSION: It's a free function, nothing to do with being a member of AForm :).

#endif
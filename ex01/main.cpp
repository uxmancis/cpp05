/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:52:32 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/28 17:15:17 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* SUMMARY cpp05/ex01 - What about this exercise?
*
*   Bureaucrat's will try to sign a form
*
*   - (Includes files from previous exercise)
*   Additional:
*   - Bureaucrat class:
*       - signForm() member function, which calls Form::beSigned() to attempt to sign the form
*   - Form class:
*       - 4 attributes (and getters): _name, _isSigned, _signGrade, _execGrade;
*       - Orthodox Canonical
*       - 3 exceptions (2 same as bureaucrat <1 and >150, and SignGradeRequirementNotMet YES/NO)
*       - beSigned() member function
*       
*/

int main(void)
{
    /***************************** Test 1: Poor Dani *****************************/
	std::cout << "\n1) Test 1: Not able to Sign" << std::endl;
    try
    {
        Bureaucrat b1("poor dani", 140); //not enough, 50 grade needed to sign
        Form f1("rental agreement");
        b1.signForm(f1);
        std::cout << f1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "❗Caught exception: " << e.what() << '\n';
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 1 ends here." << std::endl;
	std::cout << "*\n*\n*\n";



    

    
    /***************************** Test 2: Powerful Dani *****************************/
	std::cout << "\n2) Test 2: YES Able to Sign" << std::endl;
    try
    {
        Bureaucrat b2("powerful dani", 40); //Yay! 50 needed to sign
        Form f2("rental agreement");
        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "❗Caught exception: " << e.what() << '\n';
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 2 ends here." << std::endl;
	std::cout << "*\n*\n*\n";

    




    /***************************** Test 3: Not at first, then YES! *****************************/
	std::cout << "\n3) Test 3: Not at first, then YES!" << std::endl;
    try
    {
        Bureaucrat b3("uxu", 70);
        Form f3("marital agreement");
        b3.improveGrade(10, b3);
        b3.worsenGrade(5, b3);
        b3.improveGrade(10, b3);
        b3.improveGrade(10, b3);
        b3.improveGrade(10, b3);
        b3.signForm(f3);
        std::cout << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "❗Caught exception: " << e.what() << '\n';
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 3 ends here." << std::endl;
	std::cout << "*\n*\n*\n";
}
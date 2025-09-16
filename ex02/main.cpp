/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:53:53 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/16 19:11:45 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    /***************************** Test 1: Valid execution *****************************/
	std::cout << "\n1) Test 1: Valid execution" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 1);  // The highests grade possible.
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("school");
        PresidentialPardonForm pardon("Ford Perfect");

        alice.signForm(shrub);
        alice.executeForm(shrub);
        std::cout << "--------------------------------------------------------------" << std::endl;
        alice.signForm(robot);
        alice.executeForm(robot);
        std::cout << "--------------------------------------------------------------" << std::endl;
        alice.signForm(pardon);
        alice.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 1 ends here.\n\n\n" << std::endl;


    

    
    /***************************** Test 2: YEs Sign, Not Execute *****************************/
	std::cout << "\n2) Test 2: YES SIGN, NOT EXECUTE" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 140);  // Very low grade
        ShrubberyCreationForm shrub("garden");

        bob.signForm(shrub);            // should fail
        bob.executeForm(shrub);         // should not Execute, as not signed
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 2 ends here.\n\n\n" << std::endl;


    


    /***************************** Test 3: Execute unsigned form *****************************/
	std::cout << "\n3) Test 3: Execute unsigned form" << std::endl;
    try
    {
        Bureaucrat claire("Claire", 10);
        RobotomyRequestForm robo("Wall-E");

        claire.executeForm(robo);  // should throw FormNotSignedException
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 3 ends here." << std::endl;


    return 0;
}

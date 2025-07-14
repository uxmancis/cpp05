/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:53:53 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 16:45:54 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    std::cout << "---- TEST: Valid execution ----" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 1);  // Very high grade
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Bender");
        PresidentialPardonForm pardon("Ford Prefect");

        alice.signForm(shrub);
        alice.executeForm(shrub);

        alice.signForm(robo);
        alice.executeForm(robo);

        alice.signForm(pardon);
        alice.executeForm(pardon);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n---- TEST: Low-grade bureaucrat trying to execute ----" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 150);  // Very low grade
        ShrubberyCreationForm shrub("garden");

        bob.signForm(shrub);            // should fail
        bob.executeForm(shrub);         // should not reach this
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n---- TEST: Execute unsigned form ----" << std::endl;
    try
    {
        Bureaucrat claire("Claire", 10);
        RobotomyRequestForm robo("Wall-E");

        claire.executeForm(robo);  // should throw FormNotSignedException
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

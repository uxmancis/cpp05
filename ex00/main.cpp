/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:28:00 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 12:39:49 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


/* Try-catch:
*
*	Try: "Hey computer, try this. If it breaks, don't crash - just tell me what went wrong"
*	Catch: "If it breaks, catch the problem and show a message"
*/

int main(void)
{
    /***************************** Test 1 *****************************/
	try
	{
		Bureaucrat a("Alice", 2);
		std::cout << a << std::endl;

		a.improveGrade(1); //should be grade 1
		std::cout << a << std::endl;

		a.improveGrade(1); //should throw exception
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << '\n';
	}




	
	/***************************** Test 2 *****************************/
	try
	{
        Bureaucrat b("Bob", 151); // should throw exception
    }
    catch (std::exception& e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }




	
	/***************************** Test 3 *****************************/
	try
	{
        Bureaucrat c("Charlie", 149);
        std::cout << c << std::endl;
        c.worsenGrade(1); // should be 150
        std::cout << c << std::endl;
        c.worsenGrade(1); // should throw
    }
    catch (std::exception& e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

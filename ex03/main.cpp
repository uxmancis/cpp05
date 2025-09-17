/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:53:53 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:58:50 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Overloading the Insertion Operator << for Output streams*/
/* Additional notes:
*
* > References are NEVER NULL --> we can't do e.g.: form != NULL
*/
std::ostream& operator<<(std::ostream& out, const AForm &form)
{
    // std::cout << YELLOW << form.getName() << RESET_COLOR << std::endl;

    out << "Form[name=" << form.getName()
    << ", signed=" << (form.getIsSigned() ? "yes" : "no")
    << ", signGrade=" << form.getGradeToSign()
    << ", execGrade=" << form.getGradeToExecute()
    << "]";

    return (out);
}

int main()
{
    std::cout << "--------------------- Test 1 ---------------------" << std::endl;
    Intern Maialen;
    /* = 0 --> C++98: puntero nulo, evita devolver basura si algo falla antes de asignar.*/
    AForm *rrf = 0; // C++98: puntero nulo
    AForm *scf = 0; // C++98: puntero nulo
    AForm *ppf = 0; // C++98: puntero nulo
    AForm *other = 0; // C++98: puntero nulo

    try
    {
        rrf = Maialen.makeForm("robotomy request", "Bender");
        scf = Maialen.makeForm("shrubbery creation", "house");
        ppf = Maialen.makeForm("presidential pardon", "WhiteHouse");
        other = Maialen.makeForm("other", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught in main: " << e.what() << '\n';
    }
    
    /* As *rrf, *scf and *ppf's static type is AForm&, that's why the insertion
    * operator to print those must appear in AForm.cpp.
    
    * operator<< receives a reference (never null). That's why we can't there check
    * whether if nullptr, because it's a reference. Then, we check it previously in main. */
    
    std::cout << "\n\n";
    if (rrf) //check is valid pointer
        std::cout << *rrf << '\n';
    if (scf) //check is valid pointer
        std::cout << *scf << '\n';
    if (ppf) //check is valid pointer
        std::cout << *ppf << '\n';
    if (other) //check is valid pointer
        std::cout << *other << '\n'; //--> IS NOT PRINTED

    delete rrf;
    delete scf;
    delete ppf;
    delete other;

    std::cout << "*********************************" << GREEN << " OK, COMPLETED" << RESET_COLOR << " - Test 1 ends here." << std::endl;


    return 0;
}

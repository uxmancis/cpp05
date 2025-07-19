/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:27:04 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/19 12:52:08 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // checkExecutable(executor);
    (void) executor;
    
    std::string filename = "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: Could not open output file." << std::endl;
        return;
    }

    file << "       🌲\n";
    file << "      🌲🌲\n";
    file << "     🌲🌲🌲\n";
    file << "    🌲🌲🌲🌲\n";
    file << "       ||\n";
    file.close();
}
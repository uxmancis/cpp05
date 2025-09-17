/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:16:14 by uxmancis          #+#    #+#             */
/*   Updated: 2025/09/17 11:04:09 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "main.hpp"

class Intern
{
    public:
        Intern(); /* Default constructor */
        Intern(std::string name, int grade); /* Custom constructor */
        ~Intern(); /* Destructor */
    
        AForm* makeForm(const std::string &formName, const std::string &target);
    
    private:
        class NonValidFormException : public std::exception
        {
            public: 
                virtual const char *what() const throw()
                {
                    return ("The form name is not valid!");
                }
        };
};

#endif
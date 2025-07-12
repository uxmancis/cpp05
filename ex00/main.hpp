/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:04:11 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:31:39 by uxmancis         ###   ########.fr       */
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

#include "Bureaucrat.hpp"
#include "GradeTooHighExcp.hpp"
#include "GradeTooLowExcp.hpp"

//Output stream overload (outside the class)
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b); //overload of the insertion (<<) to print

#endif
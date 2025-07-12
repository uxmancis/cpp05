/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExcp.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:04:58 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:05:56 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowExcp.hpp"

const char* GradeTooLowException::what() const throw() 
{
    return "Grade too low! (More than 150)";
}

/****************************************************************************
* Subject tells us the following:
* "Exception classes do not have to be designed in Orthodox Canonical Form.
***************************************************************************"*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExcp.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:02:13 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:46:15 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighExcp.hpp"

const char* GradeTooHighException::what() const throw() 
{
    return "Grade too high! (Less than 1)";
}

/****************************************************************************
* Subject tells us the following:
* "Exception classes do not have to be designed in Orthodox Canonical Form.
***************************************************************************"*/
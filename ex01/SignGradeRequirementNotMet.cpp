/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGradeRequirementNotMet.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:02:13 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 18:37:38 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SignGradeRequirementNotMet.hpp"

const char* SignGradeRequirementNotMet::what() const throw() 
{
    return "Sign Grade Requirement NOT MET";
}

/****************************************************************************
* Subject tells us the following:
* "Exception classes do not have to be designed in Orthodox Canonical Form.
***************************************************************************"*/
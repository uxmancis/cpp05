/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGradeRequirementNotMet.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:26 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/14 17:11:07 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef SIGNGRADEREQUIREMENTNOTMET_HPP
#define SIGNGRADEREQUIREMENTNOTMET_HPP

#include <exception>

class SignGradeRequirementNotMet : public std::exception
{
    public:
        virtual const char* what() const throw(); //declared virtual in std::exception
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGradeRequirementNotMet.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:26 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 18:34:13 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNGRADEREQUIREMENTNOTMET_HPP
#define SIGNGRADEREQUIREMENTNOTMET_HPP

#include <exception>

class SignGradeRequirementNotMet : public std::exception
{
    public:
        virtual const char* what() const throw(); //declared virtual in std::exception
};

#endif
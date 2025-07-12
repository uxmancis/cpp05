/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExcp.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:26 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:44:17 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_TOO_HIGH_EXCEPTION_HPP
#define GRADE_TOO_HIGH_EXCEPTION_HPP

#include <exception>

class GradeTooHighException : public std::exception
{
    public:
        virtual const char* what() const throw(); //declared virtual in std::exception
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExcp.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:59:23 by uxmancis          #+#    #+#             */
/*   Updated: 2025/07/12 16:46:35 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_TOO_LOW_EXCEPTION_HPP
#define GRADE_TOO_LOW_EXCEPTION_HPP

#include <exception>

class GradeTooLowException : public std::exception
{
    public:
        virtual const char* what() const throw();
};

#endif
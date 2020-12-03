/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derived.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:58:05 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/27 02:39:17 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DERIVED_HPP
# define DERIVED_HPP

# include "Base.hpp"

class A : public Base
{};
class B : public Base
{};
class C : public Base
{};

Base::~Base() {}

#endif
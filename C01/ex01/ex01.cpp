/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:10:45 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:10:46 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <locale>
#include <iostream>
#include <iomanip>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

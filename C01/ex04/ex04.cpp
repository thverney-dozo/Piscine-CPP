/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:10:26 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/07 14:32:47 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << *ptr << " : pointeur" << std::endl;
    std::cout << ref << " : reference" << std::endl;
}
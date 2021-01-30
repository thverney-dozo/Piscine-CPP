/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:15:07 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/30 15:14:15 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

void disp_int(int const &t)
{
    std::cout << t << std::endl;
}

void disp_str(std::string const &obj)
{
    std::cout << obj << std::endl;
}

int main()
{
    std::cout << "Int" << std::endl;
    int nb[] = {0, 1, 2, 3, 4, 5};
    iter(nb, 6, disp_int);
    std::cout << "Now String" << std::endl;
    std::string str[] = {"a", "b", "c", "d"};
    iter(str, 4, disp_str);
    std::cout << "Now with template T Int" << std::endl;
    iter(nb, 6, disp_T);
    std::cout << "Now with template T String" << std::endl;
    iter(str, 4, disp_T);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 23:35:00 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/27 01:51:32 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    *serialize(void)
{
	const std::string   alpha_num = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char		        *res = new char[8 + 4 + 8];
    void                *ret;

    ret = (void*)res;
    for (int i = 0; i < 8; i++)
        res[i] = alpha_num[std::rand() % alpha_num.size()];
    *reinterpret_cast<int*>(res + 8) = std::rand();
    for (int i = 8 + 4 ; i < 8 + 4 + 8; i++)
        res[i] = alpha_num[std::rand() % alpha_num.size()];
    return ((ret));
}

Data * deserialize(void *raw)
{
	Data	*data = new Data;
	char	*addr = reinterpret_cast<char*>(raw);

    data->s1 = std::string(addr, 8);
    data->n = *reinterpret_cast<int*>(addr + 8);
	data->s2 = std::string(addr + 8 + 4, 8);

    return (data);
}

int     main()
{
    std::srand(time(NULL));
    void	*addr = serialize();
	Data	*example = deserialize(addr);

    std::cout << "s1: " << example->s1 << std::endl;
	std::cout << "s2: " << example->s2 << std::endl;
	std::cout << "n : " << example->n << std::endl;
	delete []reinterpret_cast<char*>(addr);
	delete example;
	return (0);
}
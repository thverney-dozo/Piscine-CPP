/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:21:42 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/14 19:50:16 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;
    std::cout << s.top() << std::endl;
    
    MutantStack<int> mstack2(mstack);
    
    mstack.push(2);
    mstack.push(8);
    mstack.push(12);

    it = mstack2.begin();
    ite = mstack2.end();

    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }

    MutantStack<int> mstack3;

    mstack3 = mstack2;

    it = mstack3.begin();
    ite = mstack3.end();

    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    return 0;
}

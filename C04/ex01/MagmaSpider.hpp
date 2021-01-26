/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagmaSpider.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:47:04 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:47:53 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGMASPIDER_HPP
# define MAGMASPIDER_HPP

# include "Enemy.hpp"

class MagmaSpider : public Enemy
{
	public:
		MagmaSpider();
		MagmaSpider(const MagmaSpider &cpy);
		MagmaSpider	    &operator=(const MagmaSpider &affect);
		virtual		    ~MagmaSpider();
};

#endif
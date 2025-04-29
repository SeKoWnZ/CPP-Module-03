/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:50:10 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/29 17:59:53 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

 #include <ClapTrap.hpp>

 class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string str);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();
		void	highFivesGuys(void);
};
 
 #endif
 
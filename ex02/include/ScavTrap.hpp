/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:45:54 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/23 19:34:08 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeeper;
	public:
		ScavTrap();
		ScavTrap(const std::string str);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:48:30 by jose-gon          #+#    #+#             */
/*   Updated: 2025/06/25 16:45:49 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main()
{
	std::cout << "### TESTING CLAPTRAP ###" << std::endl << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ClapTrap a("AlphaClap");
		ClapTrap b("BetaClap");

		std::cout << "Testing" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Beta-clone");
		b.beRepaired(3);
		std::cout << "Deconstructing" << std::endl;
	}
	std::cout << std::endl << std::endl << "### TESTING SCAVTRAP ###" << std::endl << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ScavTrap c("KappaScav");
		ScavTrap d("DeltaScav");

		std::cout << "Testing" << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Delta-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "Deconstructing" << std::endl;
	}
	return (0);
}

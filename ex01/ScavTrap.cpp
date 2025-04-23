/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:46:00 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/23 19:32:24 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_name = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_gateKeeper = false;
}

ScavTrap::ScavTrap(const std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_name = str;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_gateKeeper = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	_gateKeeper = other._gateKeeper;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_gateKeeper = other._gateKeeper;		
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << _name << " has no life to attack!! OMG!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " has no energy to attack!! OMG!!!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " -ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_gateKeeper == true)
	{
		_gateKeeper = false;
		std::cout << _name << " GateKeeper mode: OFF" << std::endl;
	}
	else
	{
		_gateKeeper = true;
		std::cout << _name << " GateKeeper mode: ON" << std::endl;
	}
}

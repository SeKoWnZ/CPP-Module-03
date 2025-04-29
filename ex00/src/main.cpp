/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:03:19 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/15 18:41:18 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main()
{
	ClapTrap	a("Crappy");
	ClapTrap	b(a);

	a.attack("Trappy");
	b.takeDamage(5);
	b.beRepaired(5);
}

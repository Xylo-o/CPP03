/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:05:28 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/12 18:09:29 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other) {
		return *this;
	}
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

void attack(const std::string& target) {
	
}

void takeDamage(unsigned int amount) {
	
}

void beRepaired(unsigned int amount) {
	
}
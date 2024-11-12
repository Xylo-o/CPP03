/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:05:33 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/12 18:01:02 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap {
	public: 
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
 		void beRepaired(unsigned int amount);
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
};
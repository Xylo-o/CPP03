/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:42:38 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/18 14:42:40 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap {
	public: 
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
 		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
};
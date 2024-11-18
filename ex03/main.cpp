/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:43:09 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/18 15:12:29 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    std::cout << "--- CLAPTRAP TESTS ---" << std::endl;
    ClapTrap claptrap1("Clappy");
    ClapTrap claptrap2("Trappy");
    ClapTrap claptrap3(claptrap1);

    claptrap1.attack("Enemy 1");
    claptrap2.attack("Enemy 2");
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(3);
    
    claptrap2 = claptrap1;
    claptrap2.attack("Enemy after assignment");

    for (int i = 0; i < 10; ++i) {
        claptrap1.attack("Dummy Target");
    }
    claptrap1.attack("Out of energy target");
    claptrap1.beRepaired(5);

    std::cout << "\n--- SCAVTRAP TESTS ---" << std::endl;
    ScavTrap scavtrap1("Scavy");
    ScavTrap scavtrap2("Guardy");
    ScavTrap scavtrap3(scavtrap1);

    scavtrap1.attack("Bandit");
    scavtrap1.takeDamage(20);
    scavtrap1.beRepaired(10);
    scavtrap1.guardGate();

    scavtrap2 = scavtrap1;
    scavtrap2.attack("Assigned target");

    scavtrap1.takeDamage(80);
    scavtrap1.takeDamage(30);
    scavtrap1.attack("Cannot attack when down");
    scavtrap1.beRepaired(5);

	std::cout << "\n--- FRAGTRAP TESTS ---" << std::endl;
    FragTrap fragtrap("Fraggy");
    fragtrap.attack("Raider");
    fragtrap.highFivesGuys();

    FragTrap fragCopy(fragtrap);
    FragTrap fragAssigned = fragtrap;

    fragCopy.highFivesGuys();
    fragAssigned.attack("Another Raider");

	std::cout << "\n--- DIAMONDTRAP TESTS ---" << std::endl;
    DiamondTrap diamond("Diamondy");

    diamond.attack("Villain");
    diamond.takeDamage(25);
    diamond.beRepaired(20);
    diamond.highFivesGuys();
    diamond.guardGate();

    diamond.whoAmI();

    DiamondTrap diamondCopy(diamond);
    DiamondTrap diamondAssigned = diamond;

    diamondCopy.whoAmI();
    diamondAssigned.attack("Another Villain");

    std::cout << "\n--- DESTRUCTION ---" << std::endl;
    return 0;
}

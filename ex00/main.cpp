/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:05:37 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/17 20:06:32 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1("ClapTrap1");
    ClapTrap claptrap2("ClapTrap2");
    ClapTrap claptrap3("ClapTrap3");

    claptrap1.attack("Enemy 1");
    claptrap2.attack("Enemy 2");
    claptrap3.attack("Enemy 3");

    claptrap1.takeDamage(3);
    claptrap2.takeDamage(5);
    claptrap3.takeDamage(10);

    claptrap1.beRepaired(4);
    claptrap2.beRepaired(2);
    claptrap3.beRepaired(1);
    
    std::cout << "\n--- More tests ---\n" << std::endl;
    
    for (int i = 0; i < 10; ++i) {
        claptrap1.attack("Dummy Target");
    }
    
    claptrap1.attack("Out of energy target");
    
    claptrap1.beRepaired(5);
    
    claptrap2.takeDamage(15);
    claptrap2.attack("Helpless target");
    claptrap2.beRepaired(3);
    
    claptrap3.takeDamage(9);
    claptrap3.beRepaired(10);
    claptrap3.attack("Final stand target");
    
    std::cout << "\n--- Final State of ClapTraps ---\n" << std::endl;
    claptrap1.attack("End test target");
    claptrap1.takeDamage(15);

    return 0;
}
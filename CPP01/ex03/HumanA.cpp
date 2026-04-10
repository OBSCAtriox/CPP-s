/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:19:34 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/08 16:44:47 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : name(name), weapon(weapon){}

HumanA::~HumanA()
{
    std::cout << "\033[96;1m" << name << "\033[0m has been destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << "\033[96;1m" << name << "\033[0m" << " attacks with \033[91;1m" << weapon.getType() << "\033[0m" << std::endl;
}

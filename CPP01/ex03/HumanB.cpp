/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:57:45 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/08 16:45:13 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "\033[96;1m" << name << "\033[0m has been destroyed." << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon == NULL)
        std::cout << "\033[96;1m" << name << "\033[0m attacks with their \033[93;1mfists.\033[0m" << std::endl;
    else
        std::cout << "\033[96;1m" << name << "\033[0m" << " attacks with " << "\033[91;1m" << weapon->getType() << "\033[0m" << std::endl;
}

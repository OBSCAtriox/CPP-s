/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:11:11 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/04 19:43:08 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    Zombie::setName(const std::string &name)
{
    this->name = name;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << "The Zombie \033[96;1m" << this->name << "\033[0m has been destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ":BrainnnnZZZZZ" << std::endl;
}
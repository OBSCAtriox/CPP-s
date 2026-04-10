/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:12:04 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/25 16:27:20 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie \033[96;1m" << this->name << "\033[0m has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "\033[93;3m" << name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

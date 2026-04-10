/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:20:31 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/08 16:41:09 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "\033[93;1m" << type << " has been destroyed\033[0m" << std::endl;
}

const std::string& Weapon::getType()const
{
    return type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

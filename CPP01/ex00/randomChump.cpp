/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:55:40 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/25 16:25:58 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombieonstack(name);
    std::cout << "A zombie announces it self:" << std::endl;
    zombieonstack.announce();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:16:09 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/25 16:40:35 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
    Zombie* z = newZombie("Tiago");
    z->announce();
    delete z;
    std::cout << std::endl;
    randomChump("Stack Zombot");
    std::cout << std::endl;
    z = newZombie("Pedro");
    z->announce();
    delete z;
}

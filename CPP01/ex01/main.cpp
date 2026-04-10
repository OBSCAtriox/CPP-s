/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:34:16 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/04 19:38:36 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* horde;
    int num;
    int i;

    num = 20;
    horde = zombieHorde(num, "BOB");
    if (!horde)
        return (0);
    i = 0;
    while (i < num)
        horde[i++].announce();
    delete[] horde;
    return (0);
}

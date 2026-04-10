/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:28:05 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/04 19:31:29 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
    Zombie* z;
    int i;

    if (N <= 0)
        return (NULL);
    z = new Zombie[N];
    i = 0;
    while (i < N)
        z[i++].setName(name);
    return z;
}

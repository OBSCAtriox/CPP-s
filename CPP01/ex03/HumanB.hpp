/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:55:52 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/08 16:31:44 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
	    std::string name;
	    Weapon *weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon& weapon);
        void    attack();
};

# endif
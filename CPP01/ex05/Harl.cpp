/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 23:55:15 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/20 15:57:07 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}

Harl::Harl( std::string name)
{
    this->name = name;
}

Harl::~Harl()
{
    std::cout << "\033[1m" << name << " has been destroyed\033[0m" << std::endl;
}

void    Harl::debug()
{
    std::cout << DEBUG << std::endl;
}

void    Harl::info()
{
    std::cout << INFO << std::endl;
}

void    Harl::warning()
{
    std::cout << WARNING << std::endl;
}

void    Harl::error()
{
    std::cout << ERROR << std::endl;
}

void    Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
    
    void    (Harl::*funcs[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    int i = 0;
    while(i < 4)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return ;
        }
        i++;
    }
}

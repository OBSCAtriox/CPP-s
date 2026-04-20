/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:28:42 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/20 15:32:31 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string level;
    
    if (argc != 2)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return (1);
    }
    level = argv[1];
    Harl Harl(level);
    Harl.complain();
}

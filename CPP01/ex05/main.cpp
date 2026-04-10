/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 00:16:54 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/11 00:47:01 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main()
{
    Harl harl("Harl");
    
    std::string line;
    std::cout << "To make your Harl complain write (\033[95;1mDEBUG\033[0m), (\033[96;1mINFO\033[0m), (\033[93;1mWARNING\033[0m) or (\033[91;1mERROR\033[0m).\nIf you wanna stop write (\033[94;1;3;4mexit\033[0m)" << std::endl;
    while(std::getline(std::cin, line))
    {
        if (line == "exit")
            return (0);
        harl.complain(line);
    }
}

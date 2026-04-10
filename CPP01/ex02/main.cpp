/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:48:19 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/04 20:11:38 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
 

    std::cout << "Memory Adress:" << std::endl;
    std::cout << "Original: ---> |" << &brain << "|" << std::endl;
    std::cout << "Reference: ---> |" << &stringREF << "|" << std::endl;
    std::cout << "Pointer: ---> |" << stringPTR << "|\n" << std::endl;
    
    std::cout << "Value of the string:" << std::endl;
    std::cout << "Original: ---> |" << brain << "|" << std::endl;
    std::cout << "Reference: ---> |" << stringREF << "|" << std::endl;
    std::cout << "Pointer: ---> |" << *stringPTR << "|" << std::endl;
}

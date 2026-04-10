/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:11:59 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/10 23:27:38 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "sed.hpp"

Sed::Sed() {}

Sed::Sed(char **argv, std::string name)
{
    this->name = name;
    s1 = argv[2];
    s2 = argv[3];

    in.open(argv[1]);
    out.open(std::string(argv[1]) + ".replace");
}

Sed::~Sed() {}

std::ifstream&    Sed::getinFile()
{
    return (in);
}

std::ofstream&  Sed::getoutFile()
{
    return (out);
}

std::string&    Sed::getS1()
{
    return (s1);
}

std::string&    Sed::getS2()
{
    return (s2);
}

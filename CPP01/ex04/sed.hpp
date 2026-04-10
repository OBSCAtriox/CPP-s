/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:43:55 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/10 23:32:31 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>
# include <sys/stat.h>

class Sed
{
    private:
        std::string name;
        std::ifstream in;
        std::ofstream out;
        std::string s1;
        std::string s2;
    public:
        Sed( void );
        Sed(char **argv, std::string name);
        ~Sed();
        std::ifstream&    getinFile();
        std::ofstream&    getoutFile();
        std::string&    getS1();
        std::string&    getS2();
};

# endif
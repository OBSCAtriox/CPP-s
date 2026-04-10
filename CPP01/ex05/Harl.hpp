/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 23:50:37 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/11 00:43:10 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>

# define DEBUG "\033[95;1m[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\033[0m"
# define INFO "\033[96;1m[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m"
# define WARNING "\033[93;1m[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\033[0m"
# define ERROR "\033[91;1m[ERROR]: This is unacceptable! I want to speak to the manager now.\033[0m"

class Harl
{
    private:
        std::string name;
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    
        public:
            Harl();
            Harl( std::string name);
            ~Harl();
            void    complain( std::string level );
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:01:32 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/20 15:52:31 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG "\033[95;1m[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\033[0m"
# define INFO "\033[96;1m[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\033[0m"
# define WARNING "\033[93;1m[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\033[0m"
# define ERROR "\033[91;1m[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now.\033[0m"
# define BASIC "\033[32;1m[ Probably complaining about some insignificant problems ]\033[0m"

class   Harl
{
    private:
        std::string _level;
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    basic(void);
    public:
        Harl();
        Harl(std::string& level);
        ~Harl(void);
        void    complain(void);
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amben-ha <amben-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:23:10 by amben-ha          #+#    #+#             */
/*   Updated: 2024/04/27 19:11:27 by amben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

std::string white = "\033[1m\033[37m";
std::string green = "\033[1m\033[32m";
std::string yellow = "\033[1m\033[33m";
std::string red = "\033[1m\033[31m";
std::string reset = "\033[0m";

void Harl::complain(int level)
{

	switch (level) {
    case 1:
        debug();
		info();
		warning();
		error();
        break;
    case 2:
		info();
		warning();
		error();
        break;
    case 3:
		warning();
		error();
        break;
	case 4:
		error();
}
}

void Harl::debug(void)
{
	std::clog << white << "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << reset << std::endl;
}

void Harl::info(void)
{
	std::cout << green << "[INFO] - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << reset << std::endl;
}

void Harl::warning(void)
{
	std::cout << yellow << "[WARNING] - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << reset << std::endl;
}

void Harl::error(void)
{
	std::cerr << red << "[ERROR] - This is unacceptable! I want to speak to the manager now." << reset <<std::endl;
}
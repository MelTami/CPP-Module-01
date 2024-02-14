/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:30:38 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/14 18:18:12 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( ) {
	funcions[0].level = "DEBUG";
	funcions[0].function = &Harl::debug;
	funcions[1].level = "INFO";
	funcions[1].function = &Harl::info;
	funcions[2].level = "WARNING";
	funcions[2].function = &Harl::warning;
	funcions[3].level = "ERROR";
	funcions[3].function = &Harl::error;
}

Harl::~Harl( ) {}

void Harl::debug( void ) {
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void Harl::info( void ) {
	std::cout
		<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void Harl::warning( void ) {
	std::cout
		<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
		<< std::endl;
}

void Harl::error( void ) {
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Harl::complain( std::string level ) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (level == funcions[i].level) {
			(this->*funcions[i].function)();
			return;
		}
	}
	std::cout << "This level does not exist!" << std::endl;
}

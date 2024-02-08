/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:57:29 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/08 23:24:23 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL){ }

HumanB::~HumanB( ){ }

void	HumanB::attack( void )
{
	if (this->weapon)
		std::cout  << this->name << " attacks with " << this->weapon->getType() << std::endl;
	else
		std::cout  << this->name << " attacks with bare hands " << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}
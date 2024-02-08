/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:57:26 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/08 23:24:30 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const& weapon) : name(name), weapon(weapon) 
{

}

HumanA::~HumanA( ){}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
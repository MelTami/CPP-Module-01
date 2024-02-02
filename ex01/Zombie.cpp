/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:58:59 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 15:53:19 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( )
{ 
    std::cout << "Zombie " <<  "created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is being killed." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->getZombieName() << ": BraiiiiiiinnnzzZ..." << std::endl;
}

std::string	Zombie::getZombieName( void )
{ 
    return this->name; 
}

void    Zombie::setZombieName( std::string name, int N) 
{
    std::string n;
    n = N + 48;
    
    this->name = name +" "+ n; 
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:57:37 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/08 23:27:33 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( ){}

Weapon::Weapon( std::string type ) : type(type) {}

Weapon::~Weapon( ) {}

std::string const &	Weapon::getType( void ) const { return ( type ); }

void	Weapon::setType( std::string type ) { this->type = type; }
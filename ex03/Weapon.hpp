/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:09 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 17:55:13 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string         type;
    
public:
    Weapon();
    Weapon( std::string type );
    ~Weapon();
    std::string const	&getType( void ) const;
	void				setType( std::string type);

};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

#endif
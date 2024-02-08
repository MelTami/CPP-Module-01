/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:37:53 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/08 23:25:02 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string     name;
    Weapon const    &weapon;
    
public:
    HumanA( std::string name, Weapon const& weapon );
	~HumanA();
	void			attack( void );
};

#endif
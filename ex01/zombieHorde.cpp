/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:55:37 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 15:41:10 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde;
	
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setZombieName(name, i);
	return (horde);
}
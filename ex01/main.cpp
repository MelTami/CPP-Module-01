/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:58:39 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 15:39:09 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie	*walkingDead;
	int		size;
	
	size = 6;
	walkingDead = zombieHorde(size, "Foz");
	for (int i = 0; i < size; i++)
		walkingDead[i].announce();
	delete [] walkingDead;
	return (0);
}
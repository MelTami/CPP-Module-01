/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:58:39 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 17:16:24 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie	*zombies;
	int		size;
	
	size = 6;
	zombies = zombieHorde(size, "Foo");
	for (int i = 0; i < size; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
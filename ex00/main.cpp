/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:58:39 by mvavasso          #+#    #+#             */
/*   Updated: 2024/01/10 10:58:39 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie1 = newZombie("Heap zombie");
    zombie1->announce();
    randomChump("Stack zombie");
    delete (zombie1);
    return (0);
}
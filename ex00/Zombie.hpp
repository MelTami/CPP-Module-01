/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:59:01 by mvavasso          #+#    #+#             */
/*   Updated: 2024/01/10 10:59:01 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP

#include <iostream>

class Zombie{
    private: 
    std::string name;
    public:
    Zombie(std::string name);
    ~Zombie();

    void        announce( void );
};

Zombie          *newZombie(std::string name);
void            randomChump(std::string name);

#endif
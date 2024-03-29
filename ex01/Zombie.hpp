/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:59:01 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 17:50:47 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP

#include <iostream>

class Zombie{
    private: 
    std::string   name;
    public:
    Zombie();
    ~Zombie();

    void            setZombieName( std::string name, int N);
    void            announce( void );
    std::string		getZombieName( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
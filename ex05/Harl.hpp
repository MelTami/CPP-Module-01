/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:30:44 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/14 18:29:46 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define RED "\x1b[38;5;88m"
#define GREEN "\x1b[38;5;40m"
#define BLUE "\x1b[38;5;25m"
#define YELLOW "\x1b[38;5;220m"
#define RES "\x1b[0m"

class Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

    struct	Function
		{
			std::string		level;
 			void			(Harl::*function)();
		};
		Function		funcions[4];

public:
    Harl();
    ~Harl();
    void    complain( std::string level );

};



#endif
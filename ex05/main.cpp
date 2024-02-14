/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:30:42 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/14 17:59:12 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static	void print_format( std::string level )
{
	std::cout << YELLOW << level << " :" << RES << std::endl;

}

int	main( void )
{
	Harl harl;

	print_format("DEBUG");
	harl.complain("DEBUG");

	print_format("INFO");
	harl.complain("INFO");

	print_format("WARNING");
	harl.complain("WARNING");

	print_format("ERROR");
	harl.complain("ERROR");

	print_format("INVALID");
	harl.complain("INVALID");
}
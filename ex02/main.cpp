/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:05:59 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/02 17:26:06 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Memory address of the string variable: " << &string << std::endl;
    std::cout << "Memory address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of the stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of the string variable: " << string << std::endl;
    std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of the stringREF: " << stringREF << std::endl;
}
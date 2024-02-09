/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:56:29 by mvavasso          #+#    #+#             */
/*   Updated: 2024/02/09 19:53:57 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream	ifs;
	std::ofstream	ofs;
	size_t			index;
	std::string		outFile;

	ifs.open(filename.c_str());
	if(!ifs.is_open())
		return (ERROR_FILE);
	outFile = filename + ".replace";
	ofs.open(outFile.c_str());
	if (ofs.fail())
		return (ERROR_WRITE);
	while (ifs.good())
	{
		std::getline(ifs, filename);
		while (filename.find(s1) != std::string::npos)
		{
			index = filename.find(s1);
			if (index < filename.length())
			{
				filename.erase(index, s1.length());
				filename.insert(index, s2);
			}
		}
		ofs << filename << std::endl;
	}
	return (0);
}

int main(int argc, char *argv[])
{
    int    replacement_status;
    if(argc != 4)
    {
        std::cout << "You need to put the filename, the string you want to change and the string that will be placed in the place of the other." << std::endl;
        return (1);
    }
    replacement_status = replace(argv[1], argv[2], argv[3]);
    if(replacement_status == ERROR_FILE)
        std::cout << "There is an error in the file." << std::endl;
     else if(replacement_status == ERROR_WRITE)
        std::cout << "Failed to write to file." << std::endl;
    else
        std::cout << "The file replacement was a success." << std::endl;
    return (0);
}
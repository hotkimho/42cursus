/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 19:04:43 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main(int argc, char *argv[]) 
{
	if (argc != 4)
	{
		std::cout << "Error : Wrong Arg" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream readFile(filename);
	std::ofstream outFile(filename + ".replace");

	if (!readFile.is_open())
	{
		std::cout << "Error : Read file" << std::endl;
		return (1);
	}
	if (!outFile.is_open())
	{
		std::cout << "Error : Out file" << std::endl;
		readFile.close();
		return (1);
	}

	while (!readFile.eof())
	{
		std::string line;
		size_t len = 0;
		std::getline(readFile, line);
		
		while ((len = line.find(s1, len)) != std::string::npos)
		{
			std::string tmp;
			outFile << line.substr(0, len);
			tmp = line.substr(s1.length() + len);
			line = tmp;
			len = 0;
			outFile << s2;
		}
		outFile << line;
		if (readFile.eof())
			break;
		outFile << std::endl;
	}
	readFile.close();
	outFile.close();
	return 0;
}
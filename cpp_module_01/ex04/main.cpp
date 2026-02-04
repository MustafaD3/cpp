/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:29 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 02:03:11 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
int replaceInFile(const std::string& filename, const std::string& search, const std::string& replace)
{
	if(search.empty())
		return (std::cerr << "Search string is empty" << std::endl, 1);
	std::ifstream inFile(filename.c_str());
	if (!inFile)
        return (std::cout << "File can't be opened!" << std::endl, 1);
    std::ofstream outFile("temp.txt");
	if (!outFile)
        return (std::cout << "Output file can't be created!" << std::endl, 1);
    std::string line;

    while (std::getline(inFile, line)) {
        std::string result;
        size_t pos = 0, prev = 0;
        while ((pos = line.find(search, prev)) != std::string::npos) {
            result += line.substr(prev, pos - prev);
            result += replace;
            prev = pos + search.length();
        }
        result += line.substr(prev);
        outFile << result << std::endl;
    }
    inFile.close();
    outFile.close();
	return 0;
}
int main(int ac,char **argv){
	if(ac !=4)
	{
		std::cerr << "The number of arguments should be 3." << std::endl;
		return 1;
	}
	return replaceInFile(argv[1],argv[2],argv[3]);
}
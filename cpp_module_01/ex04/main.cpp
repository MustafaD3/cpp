/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:29 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:29 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
int replaceInFile(const std::string& filename, const std::string& search, const std::string& replace)
{
	std::ifstream inFile(filename.c_str());
    std::ofstream outFile("temp.txt");
    std::string line;

    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << "Dosya açılamadı!" << std::endl;
		std::remove("temp.txt");
        return 1;
    }
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
    std::remove(filename.c_str());
    std::rename("temp.txt", filename.c_str());
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
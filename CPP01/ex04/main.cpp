/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:43:35 by tide-pau          #+#    #+#             */
/*   Updated: 2026/04/10 23:40:41 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "sed.hpp"

int     checkifDirectory(const char *path)
{
    struct stat info;

    if (stat(path, &info) != 0)
        return (0);
    return (S_ISDIR(info.st_mode));
}

int    checkisEmpty(std::string str, std::string msg)
{
    if (str.empty())
    {
        std::cerr << "Error: " << msg << "is empty" << std::endl;
        return (1);
    }
    return (0);
}

int    checkFiles(std::ifstream &infile, std::ofstream &outfile)
{
    if (!infile)
    {
        std::cerr << "Error: could not open original file" << std::endl;
        return (0);
    }
    if (!outfile)
    {
        std::cerr << "Error: could not open new file" << std::endl;
        return (0);
    }
    return (1);
}

void replaceStrings(std::string &line, std::string s1, std::string s2)
{
    size_t pos;
    size_t found;
    
    pos = 0;
    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(found, s1.length());
        line.insert(found, s2);
        pos = found + s1.length();   
    }
}

void    executeSed(Sed &sed)
{
    std::string line;
    while (std::getline(sed.getinFile(), line))
    {
        replaceStrings(line, sed.getS1(), sed.getS2());
        if (!sed.getinFile().eof())
            line += '\n';
        sed.getoutFile() << line;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    if (checkifDirectory(argv[1]))
    {
        std::cerr << "Error: input is a directory" << std::endl;
        return (1);
    }
    Sed sed(argv, "sed");
    if (checkisEmpty(sed.getS1(), "s1 "))
        return (1);
    if (!checkFiles(sed.getinFile(), sed.getoutFile()))
        return (1);
    executeSed(sed);
    return (0);
}

#include <string>
#include <iostream>
#include <fstream>


int     main(int ac, char **av)
{
    std::string         filename;
    std::string         s1;
    std::string         s2;
    std::string         buffer;
    std::string         output;

    if (ac != 4)
    {
        std::cout << "Usage ->(./replace filename s1 s2)" << std::endl;
        return(0);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    output = filename + ".replace";
    if (s1.empty())
        std::cout << "s1 is empty" << std::endl;
    if (s2.empty())
        std::cout << "s2 " << (s1.empty()?"also ":"") << "is empty" << std::endl;
    std::ifstream   readFile(filename);
    if (readFile.fail())
    {
        std::cout << "Error opening file" << std::endl;
        exit(1);
    }
    std::ofstream    outFile(output);
    if (outFile.fail())
    {
        std::cout << "Error creating file" << std::endl;
        exit(1);
    }
    while (std::getline(readFile, buffer))
    {
        while (buffer.find(s1) != std::string::npos)
        {
            buffer.replace(buffer.find(s1), s1.length(), s2);
        }
        outFile << buffer;
        outFile << std::endl;
    }
    if (buffer == "")
        outFile << std::endl;
    readFile.close();
    outFile.close();
    return (0);
}
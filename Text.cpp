//
// Created by Lenovo on 20.12.2017.
//

#include "Text.h"

Text::Text() {};

Text::Text(std::string filePath): filePath(filePath) {
    Text::getWordsFromFile();
}

std::list<char> Text::listOfCharactersToChange = {'.', ',', ';', ':', ')', '(', '-', '[', ']', '?', '!'};

std::list<std::string>  Text::getListOfWordsFromText() {
    return listOfWordsFromText;
}

void Text::getWordsFromFile() {
    std::string str;

    std::cout << "Read from a file!" << std::endl;

    std::ifstream fin(filePath); // Open it up!
    while (fin >> str) // Will read up to eof() and stop at every
    {                  // whitespace it hits. (like spaces!)
        std::string tempStr = str;
        std::string resultStr = Text::RemoveAllChars(tempStr);
        listOfWordsFromText.push_back(resultStr);
    }
    fin.close(); // Close that file!
}

void Text::readText(){
    std::cout<<"start reading"<<std::endl;
    for (std::list<std::string>::iterator it = listOfWordsFromText.begin(); it!=listOfWordsFromText.end(); it++)
        std::cout << *it << std::endl; // Print so I can see this all worked!

}

std::string Text::RemoveChar(std::string str, char c)
{
    std::string result;

    for(std::string::iterator it = str.begin(); it!=str.end(); it++)
    {
        char currentChar = *it;
        if (currentChar != c)
            result += currentChar;
    }

    return result;
}

std::string Text::RemoveAllChars (std::string str) {
    std::string str2 = str;
    for(std::list<char>::iterator it = Text::listOfCharactersToChange.begin(); it!=Text::listOfCharactersToChange.end(); it++)
    {
        str2 = Text::RemoveChar(str2, *it);
    }
    return str2;
}
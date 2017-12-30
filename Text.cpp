//
// Created by Lenovo on 20.12.2017.
//

#include "Text.h"

Text::Text() {};

Text::Text(std::string filePath): filePath(filePath) {
    Text::getWordsFromFile();
}

std::vector<char> Text::listOfCharactersToChange = {'.', ',', ';', ':', ')', '(', '-', '[', ']', '?', '!'};

std::vector<std::string> Text::getListOfWordsFromText() {
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

    for (int i = 0; i < listOfWordsFromText.size(); ++i)
        std::cout << listOfWordsFromText.at(i) << std::endl; // Print so I can see this all worked!

}

void Text::readText(){
    for (int i = 0; i < listOfWordsFromText.size(); ++i)
        std::cout << listOfWordsFromText.at(i) << std::endl; // Print so I can see this all worked!

}

std::string Text::RemoveChar(std::string str, char c)
{
    std::string result;

    for (size_t i = 0; i < str.size(); i++) //zamienia jeden znak w słowie
    {
        char currentChar = str[i];
        if (currentChar != c)
            result += currentChar;
    }

    return result;
}

std::string Text::RemoveAllChars (std::string str) {
    std::string str2 = str;
    for (int ch = 0; ch <
                     Text::listOfCharactersToChange.size(); ch++) //iteruje po znakach wliscie i spr czy rowny konkretnemu znakowi ze słowa
    {
        str2 = Text::RemoveChar(str2, Text::listOfCharactersToChange[ch]);
    }
    return str2;
}
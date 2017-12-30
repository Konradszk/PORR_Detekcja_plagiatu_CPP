//
// Created by Lenovo on 20.12.2017.
//

#ifndef PORR_TEXT_H
#define PORR_TEXT_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>

class Text {
public:
    Text();

private:
public:
    Text(std::string filePath);
    std::list<std::string> getListOfWordsFromText();
    static std::list<char> listOfCharactersToChange;
    void readText();

private:
    std::list <std::string> listOfWordsFromText;
    std::string filePath;
    void getWordsFromFile();
    std::string changeCharacter(std::string s);
    std::string RemoveChar(std::string str, char c);
    std::string RemoveAllChars (std::string str);
};


#endif //PORR_TEXT_H

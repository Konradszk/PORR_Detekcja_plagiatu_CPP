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
    Text(std::string file_path);
    std::list<std::string>  get_list_of_words_from_text();
    static std::list<char> list_of_characters_to_change;
    void read_text();

private:
    std::list <std::string> list_of_words_from_text;
    std::string file_path;
    void get_words_from_file();
    std::string changeCharacter(std::string s);
    std::string remove_char(std::string str, char c);
    std::string remove_all_chars(std::string str);
};


#endif //PORR_TEXT_H

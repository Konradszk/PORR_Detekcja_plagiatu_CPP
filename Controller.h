//
// Created by Lenovo on 20.12.2017.
//

#ifndef PORR_CONTROLLER_H
#define PORR_CONTROLLER_H

#include <iostream>
#include <list>
#include <map>
#include "Text.h"

class Controller {
public:
    Controller();

private:
public:
    Controller( Text &base_text,  Text &examined_text,  Text &words_to_check_text);
    void check();
private:
    Text base_text, examined_text, words_to_check_text;
    std::list<std::string> words;

    std::map<std::string, int> minimum(std::map<std::string, int> a, std::map<std::string, int> b);

    std::map<std::string, int> repeats(std::list<std::string> text);
    int sum_repeats(std::map<std::string, int> min_map);
};


#endif //PORR_CONTROLLER_H

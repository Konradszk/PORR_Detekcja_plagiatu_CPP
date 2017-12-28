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
    Controller(const Text &baseText, const Text &examinedText, const Text &wordsToCheckText);
    void check();
private:
    Text baseText, examinedText, wordsToCheckText;
    std::list<std::string> words;
    std::list<int> numerOfrepeats;

    std::map<std::string, int> minimum(std::map<std::string, int> &a, std::map<std::string, int> &b);

    std::map<std::string, int> repeats(std::list<std::string> &text);
    int sumRepeats(std::map<std::string, int> &min_map);
};


#endif //PORR_CONTROLLER_H

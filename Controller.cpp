//
// Created by Lenovo on 20.12.2017.
//

#include "Controller.h"

Controller::Controller() {}

Controller::Controller( Text &baseText,  Text &examinedText,  Text &wordsToCheckText) : baseText(
        baseText), examinedText(examinedText), wordsToCheckText(wordsToCheckText) {
    words=wordsToCheckText.getListOfWordsFromText();

}

std::map<std::string, int>  Controller::repeats(std::list<std::string> text) {
    std::map<std::string, int> countMap;
    int count;
    for(auto w=words.begin(); w !=words.end();++w) {
        count = 0;
        for (auto s = text.begin(); s != text.end(); ++s)
            if (*w == *s)
                count++;

        countMap[*w]=count;
    }
    return countMap;
}

std::map<std::string, int> Controller::minimum(std::map<std::string, int> a, std::map<std::string, int> b) {

    std::map<std::string, int> min_map;
    for (auto it = a.begin(); it!=a.end();++it){
        if(it->second< b.at(it->first))
            min_map[it->first]=it->second;
        else{
            min_map[it->first]=b.at(it->first);
        }
    }
    return min_map ;
}

int Controller::sumRepeats(std::map<std::string, int> min_map) {
    int min=0;

    for(const auto& it : min_map)
        min+=it.second;
    return min;
}

void Controller::check() {
    int sum= sumRepeats(
            minimum(
                    repeats(baseText.getListOfWordsFromText()),
                    repeats(examinedText.getListOfWordsFromText())
            )
    );
    std::cout<<"Ilosc slow w textBase: "<<baseText.getListOfWordsFromText().size() <<std::endl;
    std::cout<<"Ilosc slow w textExamined: "<<examinedText.getListOfWordsFromText().size() <<std::endl;
    std::cout<<"Poziom podobienstwa: "<<(double)sum/baseText.getListOfWordsFromText().size()*100<<"%" <<std::endl;


}



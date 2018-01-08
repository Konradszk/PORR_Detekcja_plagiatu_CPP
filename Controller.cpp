//
// Created by Lenovo on 20.12.2017.
//

#include "Controller.h"

Controller::Controller() {}

Controller::Controller( Text &base_text,  Text &examined_text,  Text &words_to_check_text) : base_text(
        base_text), examined_text(examined_text), words_to_check_text(words_to_check_text) {
    words = words_to_check_text.get_list_of_words_from_text();

}

std::map<std::string, int>  Controller::Repeats(std::list<std::string> text) {
    std::map<std::string, int> count_map;
    int count;
    for(auto w=words.begin(); w !=words.end();++w) {
        count = 0;
        for (auto s = text.begin(); s != text.end(); ++s)
            if (*w == *s)
                count++;

        count_map[*w]=count;
    }
    return count_map;
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
                    Repeats(base_text.get_list_of_words_from_text()),
                    Repeats(examined_text.get_list_of_words_from_text())
            )
    );
    std::cout<<"Ilosc slow w textBase: "<< base_text.get_list_of_words_from_text().size() <<std::endl;
    std::cout<<"Ilosc slow w textExamined: "<< examined_text.get_list_of_words_from_text().size() <<std::endl;
    std::cout<<"Poziom podobienstwa: "<<(double)sum/ base_text.get_list_of_words_from_text().size()*100<<"%" <<std::endl;


}



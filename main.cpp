#include <iostream>
#include <chrono>
#include "Controller.h"
int main() {
    std::cout << "Start!" << std::endl;

    auto start = std::chrono::system_clock::now();

    Text base_text = Text("D:/Karolka/studia/Magisterskie/semestr_2/Porr/projekt/6_image.txt");
    Text examined_text = Text("D:/Karolka/studia/Magisterskie/semestr_2/Porr/projekt/2_image.txt");
    Text words_to_check_text = Text("D:/Karolka/studia/Magisterskie/semestr_2/Porr/projekt/check_image_recognition.txt");
    words_to_check_text.read_text();
    Controller controller =  Controller(base_text, examined_text, words_to_check_text);
    controller.check();
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;

    std::cout << "czas: " << elapsed_seconds.count() << "s\n";
    return 0;
}
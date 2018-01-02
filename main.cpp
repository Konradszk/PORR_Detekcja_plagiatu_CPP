#include <iostream>
#include "Controller.h"
int main() {
    std::cout << "Start!" << std::endl;

    Text baseText = Text("C:\\Users\\Lenovo\\CLionProjects\\PORR\\6_image.txt");
    Text examinedText = Text("C:\\Users\\Lenovo\\CLionProjects\\PORR\\2_image.txt");
    Text wordsToCheckText = Text("C:\\Users\\Lenovo\\CLionProjects\\PORR\\check_image_recognition.txt");
    Controller controller =  Controller(baseText, examinedText, wordsToCheckText);
    controller.check();
    return 0;
}
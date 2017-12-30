#include <iostream>
#include "Controller.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Text baseText = Text("6_image.txt");
    Text examinedText = Text("2_image.txt");
    Text wordsToCheckText = Text("check_image_recognition.txt");
    Controller controller =  Controller(baseText, examinedText, wordsToCheckText);
    controller.check();
    return 0;
}
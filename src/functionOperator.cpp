#include "functionOperator.hpp"


void functionOperator::zpad(){
    int digits = 0;

    zPadMenu menu;
    Menu* menuptr = &menu;
    menuptr ->printText();
    std::cin >> digits;
    std::string content = "";
    char c;
    int count = 0;
    std::ifstream finText ("./data/" + this->input, std::ofstream::in);
    std::ofstream foutText ("./data/" + this->output, std::ofstream::out);



    while(std::getline(finText,content)){
        int lineLength = content.size();

        if(lineLength< digits){
            for(int i = 0; i < digits - lineLength; i++){
                content = '0' + content;
            }
        }
        foutText << content << std::endl;
    }
}
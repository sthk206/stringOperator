#include "Menu.hpp"

class MainMenu : public Menu {
    public:
        MainMenu(){
            mText = std::string() + "Menu\n"                         
                        + "Please select a string operation to perform.\n"       
                        + "1 - Zero Padding\n"                   
                        + "2 - Alphabetical Sort\n"                      
                        + "3 - Quit\n"                         
                        + "Selection: ";                       
        }

};

class zPadMenu : public Menu{
    public:
        zPadMenu(){
            mText = "Please enter the final number of digits:";
        }
};

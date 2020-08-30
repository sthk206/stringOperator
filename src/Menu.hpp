#include <string>
#include <iostream>
class Menu{
    public:
        Menu() { mText = "default"; } 
        virtual ~Menu() { } 
        // virtual Menu *nextMenu(int iChoice, bool& iIsQuitOptionSelected) = 0; 
        void printText() 
        {
            std::cout << mText << std::endl;
        }

    protected:
        std::string mText; 
};

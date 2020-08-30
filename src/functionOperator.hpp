#include "MenuSelection.hpp"
#include <fstream>

class functionOperator{
    public:
        functionOperator(std::string in, std::string out):input(in), output(out){}
        void zpad();
        void asort();

    private:
        std::string input;
        std::string output;
};
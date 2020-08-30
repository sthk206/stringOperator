#include "functionOperator.hpp"

using namespace std;



/* Main function that runs the program */
int main(int argc, char* argv[]) {
    // const int NUM_ARG = 4;
    // const int DIGIT_IDX = 1;
    // const int IN_IDX = 2;
    // const int OUT_IDX = 3;
    // if (argc != NUM_ARG) return 1;

    string input = "input.txt";
    string output = "output.txt";
    int selection;
    MainMenu menu;
    Menu* p = &menu;
    p->printText();

    cin >> selection;
    functionOperator op(input, output);
    switch (selection)
    {
    case 1:
        op.zpad();
        break;
    case 2:
        op.asort();
        break;
    
    default:
        break;
    }


    // unsigned int bufSize = stoi(argv[DIGIT_IDX]);


    return 0;
}
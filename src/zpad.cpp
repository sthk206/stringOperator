#include <string>
#include <iostream>
#include <fstream>

using namespace std;


void zeroPad(string inputFile, string outputFile, int digits){



    string content = "";
    char c;
    int count = 0;
    std::ifstream finText ("./data/" + inputFile, std::ofstream::in);
    std::ofstream foutText ("./data/" + outputFile, std::ofstream::out);



    while(std::getline(finText,content)){
        int lineLength = content.size();

        if(lineLength< digits){
            for(int i = 0; i < digits - lineLength; i++){
                content = '0' + content;
            }
        }
        foutText << content << std::endl;
    }





    foutText.close();
    finText.close();
}
/* Main function that runs the program */
int main(int argc, char* argv[]) {
    const int NUM_ARG = 4;
    const int DIGIT_IDX = 1;
    const int IN_IDX = 2;
    const int OUT_IDX = 3;

    if (argc != NUM_ARG) return 1;
    unsigned int bufSize = stoi(argv[DIGIT_IDX]);

    zeroPad(argv[IN_IDX], argv[OUT_IDX], bufSize);

    return 0;
}
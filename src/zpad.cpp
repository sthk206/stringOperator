using namespace std;

/* Main function that runs the program */
int main(int argc, char* argv[]) {
    const int NUM_ARG = 4;
    const int DIGIT_IDX = 1;
    const int IN_IDX = 2;
    const int OUT_IDX = 3;

    if (argc != NUM_ARG) return 1;
    unsigned int bufSize = stoi(argv[DIGIT_IDX]);
    if (strcmp(argv[FLAG_IDX], "-b") == 0) {
        charToBit(argv[IN_IDX], argv[OUT_IDX], bufSize);
    } else if (strcmp(argv[FLAG_IDX], "-c") == 0) {
        bitToChar(argv[IN_IDX], argv[OUT_IDX], bufSize);
    }
    return 0;
}
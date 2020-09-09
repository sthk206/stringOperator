#include "functionOperator.hpp"
#include <set>
#include <unordered_map>
#include <map>


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
    finText.close();
    foutText.close();

    std::cout << "Padding Successful." << std::endl;
}

void functionOperator::asort(){
    std::ifstream finText ("./data/" + this->input, std::ofstream::in);
    std::ofstream foutText ("./data/" + this->output, std::ofstream::out);

    std::string content = "";
    std::multiset<std::string> sortedSet;
    while(std::getline(finText,content)){
        sortedSet.insert(content);
    }
    for(std::string i : sortedSet){
        foutText << i << std::endl;
    }

    finText.close();
    foutText.close();

    std::cout << "Sorting Successful." << std::endl;
    
}

void functionOperator::wordAnalysis(){
    std::ifstream finText ("./data/" + this->input, std::ofstream::in);
    std::ofstream foutText ("./data/" + this->output, std::ofstream::out);

    std::unordered_map<std::string, int> wordMap;
    std::multimap<int, std::string, std::greater<int>> reversed;
    std::string word = "";

    while(finText >> word){
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        //remove punctuation from word
        word.erase (std::remove_if(word.begin (), word.end (), ispunct), word.end ());
        //key does not exist
        if(wordMap.find(word) == wordMap.end())wordMap[word] = 1;
        //key exists
        else wordMap[word]++;
    }

    for (auto w : wordMap) 
    reversed.insert(std::make_pair(w.second,w.first));

    for(auto w : reversed)
    foutText << w.second << " : " << w.first << std::endl;


    finText.close();
    foutText.close();
    
}
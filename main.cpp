#include <iostream>
#include "DialogueManager.h"
#include "SentimentAnalyzer.h"

int main() {
    std::string userInput;
    DialogueManager dm;
    SentimentAnalyzer sa;

    std::cout << "Hello! How can I assist you today?" << std::endl;

    while (true) {
        std::getline(std::cin, userInput);
        if (userInput == "exit") break;

        std::string sentiment = sa.analyze(userInput);
        std::string response = dm.getResponse(userInput, sentiment);

        std::cout << "Chatbot: " << response << std::endl;
    }

    return 0;
}

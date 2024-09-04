#include "DialogueManager.h"

std::string DialogueManager::getResponse(const std::string& userInput, const std::string& sentiment) {
    // Basic logic to generate a response based on user input and sentiment
    if (sentiment == "positive") {
        return "I'm glad to hear that!";
    } else if (sentiment == "negative") {
        return "I'm sorry to hear that.";
    } else {
        return "Interesting. Tell me more.";
    }
}

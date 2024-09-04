#ifndef DIALOGUE_MANAGER_H
#define DIALOGUE_MANAGER_H

#include <string>

class DialogueManager {
public:
    std::string getResponse(const std::string& userInput, const std::string& sentiment);
};

#endif

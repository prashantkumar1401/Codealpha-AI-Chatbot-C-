#include "SentimentAnalyzer.h"

std::string SentimentAnalyzer::analyze(const std::string& text) {
    if (text.find("happy") != std::string::npos || text.find("good") != std::string::npos) {
        return "positive";
    } else if (text.find("sad") != std::string::npos || text.find("bad") != std::string::npos) {
        return "negative";
    } else {
        return "neutral";
    }
}

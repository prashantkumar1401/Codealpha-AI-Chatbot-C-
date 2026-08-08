# C++ Conversational AI Chatbot

A C++ chatbot project demonstrating object-oriented design, dialogue management, and sentiment-analysis concepts.

## 🎯 Project Goals

The project explores how a conversational application can:

- Accept user messages
- Manage basic dialogue flow
- Analyze sentiment
- Generate rule-based responses
- Separate responsibilities across C++ classes

## 🧰 Tech Stack

- C++
- Object-Oriented Programming
- Standard Template Library
- Header/source file separation

## 🏗️ Architecture

```text
User Input
    ↓
Dialogue Manager
    ↓
Sentiment Analyzer
    ↓
Response Selection
    ↓
Chatbot Response
```

## 📁 Structure

```text
.
├── main.cpp
├── DialogueManager.cpp
├── DialogueManager.h
├── SentimentAnalyzer.cpp
├── SentimentAnalyzer.h
└── README.md
```

## 🚀 Build and Run

A standard C++ compiler such as `g++` is required.

```bash
g++ -std=c++17 main.cpp DialogueManager.cpp SentimentAnalyzer.cpp -o chatbot
./chatbot
```

On Windows with MinGW:

```bash
g++ -std=c++17 main.cpp DialogueManager.cpp SentimentAnalyzer.cpp -o chatbot.exe
chatbot.exe
```

## 💡 Concepts Demonstrated

- Classes and objects
- Encapsulation
- Header/source separation
- String processing
- Conditional logic
- Basic sentiment classification
- Dialogue state management

## 🔭 Planned Improvements

- Add CMake build configuration
- Add automated tests
- Improve intent detection
- Add configurable responses
- Add conversation history
- Improve input validation
- Add logging

## ⚠️ Scope

This is an educational C++ project. It is not presented as a production-grade large language model or a general-purpose AI system.

## 👤 Author

**Prashant Kumar**

GitHub: https://github.com/prashantkumar1401

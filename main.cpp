#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string response;

    // Introduction
    std::cout << "You are having a conversation with a simulated person.\n";
    std::cout << "Simulated Person: Hi there! What's your name?\n";
    std::cout << "Your Name: ";
    std::cin >> name;

    std::cout << "Simulated Person: Nice to meet you, " << name << "!\n";

    // Conversation loop
    while (true) {
        std::cout << "Simulated Person: What would you like to say next?\n";
        std::cout << "Options:\n";
        std::cout << "1. Ask a question\n";
        std::cout << "2. Give a compliment\n";
        std::cout << "3. Share a joke\n";
        std::cout << "4. Say goodbye\n";
        std::cout << "Enter the number of your choice (1/2/3/4): ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Your Name: ";
                std::cin.ignore();
                std::getline(std::cin, response);
                std::cout << "Simulated Person: That's an interesting question, " << name << "!\n";
                break;
            case 2:
                std::cout << "Simulated Person: Thank you, " << name << "! You're so kind.\n";
                break;
            case 3:
                std::cout << "Simulated Person: Here's a joke for you: Why don't scientists trust atoms? Because they make up everything!\n";
                break;
            case 4:
                std::cout << "Simulated Person: It was great talking to you, " << name << "! Goodbye!\n";
                return 0;
            default:
                std::cout << "Simulated Person: I didn't understand your choice. Please choose a valid option.\n";
        }
    }

    return 0;
}

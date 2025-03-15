#include <string>
#include <iostream>

struct Task {
    std::string title;
    std::string description;
    bool isComplete = false;
    Task(const std::string& title, const std::string& description);

    std::string get_Title();
    std::string get_Description();
    std::string get_IsComplete();

    void set_Title(const std::string& title);
    void set_Description(const std::string& title);
    void set_IsComplete(bool status);

    const void print_task();
};
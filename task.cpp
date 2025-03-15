#include <string>
#include <iostream>

class Task {
public:
    std::string title;
    std::string description;
    bool isComplete = false;
    Task(const std::string& title, const std::string& description) {
        set_Title(title);
        set_Description(description);
    }

    std::string get_Title() {
        return this->title;
    }
    std::string get_Description() {
        return this->description;
    }
    std::string get_IsComplete() {
        return this->description;
    }


    void set_Title(const std::string& title) {
        this->title = title;
    }
    void set_Description(const std::string& title) {
        this->title = title;
    }
    void set_IsComplete(bool status) {
        this->isComplete = status;
    }

private:
};
#pragma once
#include <string>
#include <iostream>
#include "Task.h"

    Task::Task(const std::string& title, const std::string& description) {
        set_Title(title);
        set_Description(description);
    }

    std::string Task::get_Title() {
        return this->title;
    }
    std::string Task::get_Description() {
        return this->description;
    }
    std::string Task::get_IsComplete() {
        return this->description;
    }
    

    void Task::set_Title(const std::string& title) {
        this->title = title;
    }
    void Task::set_Description(const std::string& title) {
        this->title = title;
    }
    void Task::set_IsComplete(bool status) {
        this->isComplete = status;
    }

    const void Task::print_task() {
        std::cout << "Title: " << this->title << std::endl;
        std::cout << "Desc: " << this->description << std::endl;
    }
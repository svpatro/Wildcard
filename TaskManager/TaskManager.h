#pragma once
#include "Task.h"
#include <iostream>
#include <string>
#include <vector>

class TaskManager{

    private:

    std::vector<Task> Tasks;

    public:

    TaskManager(){
}

    void addTask(){
        std::string title;
        std::string description;
        std::cout << "Task Title: ";
        std::cin >> title;
        std::cout << "Description: ";
        std::cin >> description;
        Task task(title, description);
        Tasks.push_back(task);
    }

    void RemoveTask(){}

    void PrintTasks(){
        for (Task i : Tasks){
            i.print_task();
        }
    }
};
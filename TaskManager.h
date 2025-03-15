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

    void addTask(Task task){
        Tasks.push_back(task);
    }

    void RemoveTask(){ }

    void PrintTasks(){
        for (Task i : Tasks){
            std::cout << i.title << std::endl;
        }
    }
};
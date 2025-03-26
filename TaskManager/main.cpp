#include <iostream>
#include <string>
#include "TaskManager.h"

int main(){

    // Checking Signatures

    TaskManager *list = new TaskManager;
    list->addTask();
    list->PrintTasks();

    delete list;

    return 0;
}
#include <iostream>
#include <string>
#include "TaskManager.h"

int main(){

    TaskManager *list = new TaskManager;
    list->addTask();
    list->PrintTasks();

    delete list;

    return 0;
}
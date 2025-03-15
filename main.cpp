#include <iostream>
#include <string>
#include "TaskManager.h"
#include "Task.h"

int main(){

    TaskManager *list = new TaskManager;

    Task task1("Meet Brian", "Bars at 9:00 PM");
    list->addTask(task1);
    list->PrintTasks();

    delete list;

    return 0;
}
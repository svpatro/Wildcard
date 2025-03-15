#include "Task.h"
#include <vector>

class TaskManager{

    private:

    public:

    TaskManager(){
        std::vector<string> Tasks = new *std::vector<string>();
    }

    void addTask(Task){
        Tasks->pushback(Task);
    }

    void RemoveTask(){



    }

    void PrintTask(){
        for (int i = 0; i < Tasks.end(); i++){
            std::cout << Tasks.at(i) << std::endl;
        }
    }
};
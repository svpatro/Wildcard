#pragma once
#include <string>
#include <iostream>
#include "Task.h"

Task(const std::string& title, const std::string& description);

std::string Task::get_Title();
std::string Task::get_Description();
std::string Task::get_IsComplete();

void Task::set_Title(const std::string& title);
void Task::set_Description(const std::string& title);
void Task::set_IsComplete(bool status);
const void Task::print_task();
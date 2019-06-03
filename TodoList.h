#pragma once

#include <string>
#include <unordered_map>

#include "Task.h"

class TodoList {
private:
    std::unordered_map<int, Task> tasks;
public:
    TodoList();
    int createTask(const std::string&, const std::string&);
    Task& findTask(const int);
    void resolveTask(const int);
    void openTask(const int);
    void deleteTask(const int);

    void printAllTasks();
};


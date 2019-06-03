#include "TodoList.h"
#include "Task.h"

#include <iostream>

TodoList::TodoList() {
    
}

int TodoList::createTask(const std::string& title, const std::string& desc) {
    Task task(title, desc);
    int taskId = task.getTaskId();
    tasks.insert(std::make_pair(taskId, task));
    return taskId;
}

Task& TodoList::findTask(const int taskId) {
    auto pair = tasks.find(taskId);
    if (pair == tasks.end()) {
        throw std::out_of_range("Task with task ID " + std::to_string(taskId) + " not found!");
    }
    return pair->second;
}

void TodoList::resolveTask(const int taskId) {
    Task& task = findTask(taskId);
    task.resolve();
}

void TodoList::openTask(const int taskId) {
    Task& task = findTask(taskId);
    task.open();
}

void TodoList::deleteTask(const int taskId) {
    tasks.erase(taskId);
}

void TodoList::printAllTasks() {
    for (auto pair : tasks) {
        std::cout << pair.second.toString() << std::endl;
    }
}

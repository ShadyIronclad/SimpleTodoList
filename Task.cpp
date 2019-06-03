#include "Task.h"

#include <iostream>
#include <sstream>
#include <string>

int Task::nextId = 0;

Task::Task(std::string title, std::string desc) : title(title), description(desc), resolved{false} {
    id = nextId++;
    //std::cout << "+ Task with ID " << id << " contructed!" << std::endl;
}

Task::~Task() {
    //std::cout << "- Task with ID " << id << " destructed!" << std::endl;
}

std::string Task::getTitle() {
    return title;
}

std::string Task::getDescription() {
    return description;
}

bool Task::isResolved() {
    return resolved;
}

void Task::setStatus(bool s) {
    resolved = s;
}

void Task::resolve() {
    setStatus(true);
}

void Task::open() {
    setStatus(false);
}

std::string Task::toString() {
    std::ostringstream output;
    output << (resolved ? "[O]" : "[ ]");
    output << " (" << id << ") ";
    output << getTitle() << " -> " << getDescription();
    return output.str();
}

int Task::getTaskId() {
    return id;
}

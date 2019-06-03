#pragma once

#include <string>

class Task {
private:
    std::string title;
    std::string description;
    bool resolved;
    int id;
    static int nextId;
public:
    Task(std::string, std::string);
    ~Task();

    std::string getTitle();
    std::string getDescription();
    bool isResolved();
    void setStatus(bool);
    void resolve();
    void open();
    std::string toString();
    int getTaskId();
};


#include <iostream>
#include <string>

#include "TodoList.h"

int main() {
    TodoList todos;
    int cpp = todos.createTask("Learn C++", "learncpp.org");
    int java = todos.createTask("Learn Java", "learnjava.org");
    int php = todos.createTask("Learn PHP", "learnphp.org");
    todos.printAllTasks();
    std::cin.get();
}
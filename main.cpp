#include <iostream>
#include "Function.h"

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printFromText("../usage-info.txt");
        return 0;
    }

    if (argc == 2 && std::string(argv[1]) == "-l") {
        listTasks("../tasks.txt");
    }

    if (argc == 3 && std::string(argv[1]) == "-a") {
        addTask(std::string(argv[2]));
    } else if (argc == 2 && std::string(argv[1]) == "-a") {
        std::cout << "Unable to add: no task provided" << std::endl;
    } else if (argc > 3 && std::string(argv[1]) == "-a") {
        std::cout << "Unable to add: please use \"...\" for insert task." << std::endl;
    }

    if (argc == 3 && std::string(argv[1]) == "-r") {
        removeTask("../tasks.txt");
    }


    return 0;
}
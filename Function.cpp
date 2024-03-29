#include "Function.h"
#include <fstream>
#include <iostream>
#include <vector>


void printFromText(std::string path)
{
    std::ifstream myText(path);
    if (myText.is_open()) {
        std::string line;
        while (std::getline(myText, line)) {
            std::cout << line << std::endl;
        }
        myText.close();
    } else {
        std::cout << "No such file or directory." << std::endl;
    }
}

void listTasks(std::string path)
{
    std::ifstream myText(path);
    if (myText.is_open()) {
        std::string line;
        int number = 1;
        while (std::getline(myText, line)) {
            std::cout << number++ << " - " << line << std::endl;
        }
        if(number == 1){
            std::cout << "No todos for today! :)" << std::endl;
        }
        myText.close();
    } else {
        std::cout << "unknown option" << std::endl;
    }
}

void addTask(std::string task)
{
    std::ofstream myText("../tasks.txt", std::ofstream::app);
    if (myText.is_open()) {
        myText << task + "\n";
        myText.close();
    }
}

void removeTask(std::string taskIndex)
{
    std::ifstream is("../tasks.txt");
    if (is.is_open()) {
        int counter = 0;

    }
}

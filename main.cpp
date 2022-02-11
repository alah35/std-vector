#include <iostream>
#include "Tasks.h"

int main() {
    int task = 0;
    while (task != -1) {
        std::cout << "Choose task: ";
        std::cin >> task;
        switch (task) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case -1:
                break;
            default:
                std::cout << "Wrong number. Try again" << std::endl;
                break;
        }
    }
    return 0;
}

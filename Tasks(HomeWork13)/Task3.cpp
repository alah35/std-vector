#include "../Tasks.h"

void task3() {
    const int SIZE = 5;
    std::vector<int> database;
    database.reserve(SIZE);
    int begin = 0, end = 0;

    int num = 0;
    while (num != -1 && end < SIZE) {
        std::cout << "Enter element to add: ";
        std::cin >> num;
        database.push_back(num);
        end++;
    }

    while (num != -1) {
        std::cout << "Enter element to add: ";
        std::cin >> num;
        end %= SIZE; begin %= SIZE;
        database[end] = num;
        end++; begin++;
    }

    for (int i = begin, j = 0; j < SIZE; ++i %= SIZE, j++) {
        if (j == SIZE - 1)
            std::cout << database[i] << std::endl;
        else
            std::cout << database[i] << ", ";
    }
}

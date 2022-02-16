#include "../Tasks.h"

void task3() {
    const int SIZE = 5;
    std::vector<int> database;
    database.reserve(SIZE);
    int begin = 0, end = 0; // pointers to begin and end of the vector

    int num = 0;
    while (num != -1 && end < SIZE) { // fill the vector
        std::cout << "Enter element to add: ";
        std::cin >> num;
        database.push_back(num);
        end++; // end points to the next element after last
    }

    while (num != -1) { //after the vector is full overwrite old elements
        std::cout << "Enter element to add: ";
        std::cin >> num;
        end %= SIZE; begin %= SIZE; // circling the vector
        database[end] = num;
        end++; begin++; // move pointers
    }

    for (int i = begin, j = 0; j < SIZE; ++i %= SIZE, j++) { // output vector from begin to end
        if (j == SIZE - 1)
            std::cout << database[i] << std::endl;
        else
            std::cout << database[i] << ", ";
    }
}

#include "../Tasks.h"

void task3() {
    const int CAP = 20;
    std::vector<int> database;
    database.reserve(CAP);

    int num = 0;
    while (num != -1) {
        if (database.size() < CAP) {
            std::cout << "Enter element to add: ";
            std::cin >> num;
            if (num == -1)
                outputVector(database);
            database.push_back(num);
        } else if (database.size() >= CAP) {
            std::cout << "Enter element to add: ";
            std::cin >> num;
            if (num == -1)
                outputVector(database);
            database.erase(database.begin());
            database.push_back(num);
        }
    }
}

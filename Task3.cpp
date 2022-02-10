#include "Tasks.h";

void task3() {
    const int CAP = 20;
    std::vector<int> database;
    database.reserve(CAP);

    int num = 0;
    while (num != -1) {
        std::cout << "Enter element to add: ";
        std::cin >> num;
        if (num == -1) {
            outputVector(database);
            continue;
        }
        add_to_database(database, num);
    }
}

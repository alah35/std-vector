#include "../Tasks.h"

void task1() {
    std::vector<int> list;
    int num = 0;
    std::cout << "Enter amount of numbers you want to add?";
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        int val;
        std::cout << "Enter number: ";
        std::cin >> val;
        list.push_back(val);
    }
    outputVector(list);

    std::cout << "Enter the number you want to delete: ";
    int delVal;
    std::cin >> delVal;
    for (int i = 0; i <list.size(); ) {
        if (delVal == list[i])
            list = delete_from_position(list, i);
        else
            i++; // because delete_from_position returns vector without deleted elements
    }
    outputVector(list);
}

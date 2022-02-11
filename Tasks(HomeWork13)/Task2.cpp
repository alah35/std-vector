#include "../Tasks.h"

void task2() {
    std::vector<float> prices = {2.5, 4.25, 3.0, 10.0};
    std::vector<int> shopList = {1, 1, 0, 3};

    double sum = 0;
    for (int i = 0; i < shopList.size(); i++) {
        sum += prices[shopList[i]];
    }
    std::cout << "Sum = " << sum << std::endl;
}

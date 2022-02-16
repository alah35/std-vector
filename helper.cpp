#include <iostream>
#include <vector>

void delete_element(std::vector<int> &vec, int val) { // delete in vector all elements == val
    std::vector<int> newVec;
    newVec.reserve(vec.capacity());

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != val)
        newVec.push_back(vec[i]);
    }
    vec = newVec;
}

void add_to_database(std::vector<int> &vec, int num) {
    if (vec.size() < 20) {
        vec.push_back(num);
    } else if (vec.size() == 20) {
        for (int i = 1; i < vec.size(); i++) {
            vec[i - 1] = vec[i];
        }
        vec[vec.size() - 1] = num;
    }
}

std::vector<int> add(std::vector<int> vec, int num) {
    std::vector<int> newVec(vec.size() + 1);

    for (int i = 0; i < vec.size(); i++) {
        newVec[i] = vec[i];
    }

    newVec[vec.size()] = num;

    return newVec;
}

std::vector<int> add_to_position(std::vector<int> vec, int val, int position) {
    if (position > vec.size()) { // in this case all elements between vec.size() - 1 and position will be = 0

        std::vector<int> newVec(position + 1); // if position more than vec.size we need another vector with suitable size

        for (int i = 0; i < vec.size(); i++) {
            newVec[i] = vec[i]; // we should save values from vec in newVec
        }
        newVec[position] = val; // add new val into position

        return newVec;

    } else if (position < vec.size()) {
        if (vec[position] == 0) {
            vec[position] = val;
            return vec;
        } else {

            std::vector<int> newVec(vec.size() + 1); // we need to increase size by one to add val

            for (int i = 0; i != position; i++) { // save elements on the left of position
                newVec[i] = vec[i];
            }
            for (int i = position; i < newVec.size() - 1; i++) { // shift elements to the right by one
                    newVec[i + 1] = vec[i];
            }
            newVec[position] = val; // add new val into position
            return newVec;
        }
    } else if (position == vec.size()) {
        return add(vec, val);
    }
}

std::vector <int> delete_from_position(std::vector<int> vec, int pos) {

    std::vector <int> newVec;
    newVec.reserve(vec.capacity());

    for (int i = 0; i < vec.size(); i++) {
        if (i != pos)
            newVec.push_back(vec[i]);
    }
    return newVec;
}

float getAverage(std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    float average = (float) sum / vec.size();
    return average;
}

void inputVector(std::vector<int> &vec) {
    int num = 0;

    while (num != -1) {
        std::cout << "Enter element: ";
        std::cin >> num;
        if (num == - 1)
            break;
        vec = add(vec, num);
    }
}

void outputVector(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (i == vec.size() - 1)
            std::cout << vec[i] << std::endl;
        else
            std::cout << vec[i] << ", ";
    }
}


#ifndef STD_VECTOR_13_2_HELPER_H
#define STD_VECTOR_13_2_HELPER_H

#include "helper.cpp"

std::vector<int> add(std::vector<int> vec, int num);

std::vector<int> add_to_position(std::vector<int> vec, int val, int position);

std::vector <int> delete_from_position(std::vector<int> vec, int pos);

float getAverage(std::vector<int> vec);

void inputVector(std::vector<int> &vec);

void outputVector(std::vector<int> vec);


#endif //STD_VECTOR_13_2_HELPER_H

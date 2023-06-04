#include <iostream>
#include <vector>
#include <cmath>

void print_vec(const std::vector<int> &vec){
    for (int i : vec){
        std::cout<< i << " ";
    }
    std::cout<< std::endl;
}

int main() {
    std::vector<int> vec = {-100,-50, -5, 1, 10, 15};

    for(int i = 0; i < vec.size(); ++i){
        for(int j = 0; j < vec.size()-1; ++j){
            if (abs(vec[i]) < abs(vec[j]))
                std::swap(vec[i], vec[j]);
        }
    }

    print_vec(vec);
    return 0;
}

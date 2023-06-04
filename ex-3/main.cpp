#include <iostream>
#include <vector>

void print_vec(const std::vector<int> &vec){
    for (int i : vec){
        std::cout<< i << " ";
    }
    std::cout<< std::endl;
}

void bubble_sort(std::vector<int> &vec){
    for(int i = 0; i < vec.size(); ++i){
        for(int j = 0; j < vec.size()-1; ++j){
            if (vec[i] < vec[j])
                std::swap(vec[i], vec[j]);
        }
    }
}

int main() {
    /*std::vector<int> vec = {7, 5, 3, 1, 2, 4, 6, -1};
    bubble_sort(vec);
    print_vec(vec);*/

    std::vector<int> vec;
    int elem;
    std::cout << "input:";

    while(true){
    std::cin >> elem;

    if (elem == -1){
        if (vec.size() < 5){
            std::cout<< "Vector size is less than 5" << std::endl;
            std::cout << "input:";
            continue;
        }
        bubble_sort(vec);
        print_vec(vec);

        std::cout<< vec[4] << std::endl;
        std::cout << "input:";
    }
    else if (elem == -2) break;
    else vec.push_back(elem);

    }

    return 0;
}

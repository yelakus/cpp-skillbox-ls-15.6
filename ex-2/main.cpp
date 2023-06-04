#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {2, 7, 11, 15};
    int res = 9;

    for (int i = 0; i <= a.size(); ++i){
        for (int j = i+1; j <= a.size(); ++j){
            if (res - a[i] == a[j]){
                std::cout << a[i] << " " << a[j] << std::endl;
                break;
            }
        }
    }

    return 0;
}

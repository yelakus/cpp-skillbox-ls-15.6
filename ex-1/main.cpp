#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int max = 0, candidate = 0, res_1, res_2;

    for(int i = 0; i < a.size(); ++i){
        for(int j = i+1; j < a.size(); ++j){
            for(int k = i; k <=j; k++){
                candidate += a[k];
            }
            if (candidate > max){
                max = candidate;
                candidate = 0;
                res_1 = i;
                res_2 = j;
            }
        }
    }

    std::cout << res_1 << " " << res_2 << std::endl;
    return 0;
}

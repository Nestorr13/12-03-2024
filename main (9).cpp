#include <iostream>
#include <vector> 
 
int main() {
    std::vector<int>list(100, 0);
    
    for (int i = 0; i < 100; ++i) {
        list[i] = i % 200;
    }
    
    list[0] = 201;
    list[1] = 202;
    
    list.back() = 203;
    
    for (int i = 0; i<100;++i) {
        std::cout << list [i] << " ";
    }
    
    return 0;
    
}
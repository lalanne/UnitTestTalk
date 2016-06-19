#include <iostream>

template<typename T>
T min(T a, T b){
    return a > b ? b : a;
}

int main(){
    int x = 0;
    double y = 0.0;
    
    x = min<int>(3, 5);
    y = min<double>(3.14, 10.54);

    std::cout<<x<<std::endl; //3
    std::cout<<y<<std::endl; //3.14

    return 0;
}

#include <iostream>

using namespace std;

unsigned binary(const unsigned long N){
    return N == 0 ? 0 : N%10 + 2*binary(N/10);
}

int main(){
    unsigned const one = binary(1);
    unsigned const three = binary(11);
    unsigned const five = binary(101);
    unsigned const seven = binary(111);
    unsigned const nine = binary(1001);
}

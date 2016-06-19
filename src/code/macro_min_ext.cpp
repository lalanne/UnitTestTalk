
#include <iostream>

using namespace std;

#define MIN(a, b) ((a)>(b) ? (b):(a))

int main(int argc, const char *argv[]){
    unsigned int x = 3;
    unsigned int y = 5;

    const unsigned int res = (++x)>(++y) ? (++y) : (++x); 
    cout<<res<<endl; 

    return 0;
}

#include <iostream>

using namespace std;

const unsigned int MAX = 35000;

class Base{
    public:
        virtual void addOne(unsigned int x) = 0;
        virtual unsigned int result() = 0;
};

class Derived : public Base{
    unsigned int accumulator;

    public:
       Derived() : accumulator(0){} 

        void addOne(unsigned int x){ 
            accumulator += x;
        }   

        unsigned int result(){
            return accumulator;
        }   
};


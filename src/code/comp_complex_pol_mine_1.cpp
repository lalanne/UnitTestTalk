#include <iostream>

using namespace std;

const unsigned int MAX = 35000;

template<typename Concrete>
class Base{
    public:
        void addOne(unsigned int x){ 
            implementation().addOne(x);
        }   
    
        unsigned int result(){
            return implementation().result();
        }   

    private:
        Concrete& implementation() {
            return *static_cast<Concrete*>(this);
        }   
};


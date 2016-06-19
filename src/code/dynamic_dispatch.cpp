
#include <vector>
#include <iostream>

using namespace std;

struct Node{
    Node():element{0}{}
    Node(int x):element{x}{}
    int element;
};

struct List{
    virtual void push_back(const Node& value){};
    virtual void show(){};
};


struct ListVector : public List{
    void push_back(const Node& value){
        list.push_back(value);
    }

    void show(){
        for(auto& e : list) cout<<e.element<<endl;
    }

    vector<Node> list;
};

struct ListArray : public List{
    ListArray():it{0}{}
    
    void push_back(const Node& value){
        list[it++] = value;
    }

    void show(){
       for(int i=0; i<it; ++i) cout<<list[i].element<<endl; 
    }

    Node list[10];
    unsigned int it;
};

void function_that_does_stuff(List* myList){
    myList->show();
}

int main(){
    List* myList = new ListArray(); 

    myList->push_back(Node(5));
    myList->push_back(Node(6));
    function_that_does_stuff(myList);

    delete myList;

    myList = new ListVector(); 

    myList->push_back(Node(5));
    myList->push_back(Node(6));
    function_that_does_stuff(myList);

    delete myList;

    Node a;
    printf("%p\t%p\n", &a, &(a.element));
}



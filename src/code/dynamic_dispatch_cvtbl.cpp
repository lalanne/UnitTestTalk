
#include <vector>
#include <iostream>

using namespace std;

struct Node{
    Node():element{0}{}
    Node(int x):element{x}{}
    int element;
};

struct List{
    void (*push_back)(struct List*, const Node& value);
    void (*show)(struct List*);
};

struct ListVector{
    struct List* iList; //important
    vector<Node> container;
    int mono = 10;
};

void ListVector_push_back(struct List* l, const Node& value);
void ListVector_show(struct List* l);

struct List ListVector_VTbl = {ListVector_push_back,
                            ListVector_show};

void ListVector_init(struct ListVector* lv){
    lv->iList = &ListVector_VTbl;
    lv->mono = 10;
}

void ListVector_push_back(struct List* l, const Node& value){
    struct ListVector* dis = (struct ListVector*)l; //important
    dis->container.push_back(value);
    cout<<"size: "<<dis->container.size()<<endl;
}

void ListVector_show(struct List* l){
    cout<<"showing...."<<endl;
    struct ListVector* dis = (struct ListVector*)l; //important
    //cout<<"showing...."<<" "<<dis->container.size()<<endl;
    //for(auto& e : dis->container) cout<<e.element<<endl;
}

/*struct ListArray{
    struct List* iList; //important    
    Node container[10];                                                       
    unsigned int it;
};

void ListArray_push_back(struct List* l, const Node& value);
void ListArray_show(struct List* l);

struct List ListArray_VTbl = {&ListArray_push_back,
                            &ListArray_show};

void ListArray_init(struct ListArray* la){
    la->iList = &ListArray_VTbl;
    la->it = 0;
}

void ListArray_push_back(struct List* l, const Node& value){
    struct ListArray* dis = (struct ListArray*)l; //important
    dis->container[dis->it++] = value;
}

void ListArray_show(struct List* l){
    struct ListArray* dis = (struct ListArray*)l; //important
    for(int i=0; i<dis->it; ++i) cout<<dis->container[i].element<<endl;
}*/

void function_that_does_stuff(struct List* l){
    cout<<"1"<<endl;
    ((l)->show)(l);
}

int main(){
    struct ListVector lv;
    ListVector_init(&lv);

    ListVector_push_back((struct List*)&lv, Node(5));
    ListVector_push_back((struct List*)&lv, Node(6));
    function_that_does_stuff((struct List*)&lv);

 //   struct ListArray la;
  //  ListArray_init(&la);

//    ListArray_push_back(la.iList, Node(5));
//    ListArray_push_back(la.iList, Node(6));
//    function_that_does_stuff(&la.iList);
}



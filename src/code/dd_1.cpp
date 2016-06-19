struct Node{                                                                    
    Node():element{0}{}                                                         
    Node(int x):element{x}{}                                                    
    int element;                                                                
};                                                                              

void function_that_does_stuff(List* myList){                                    
    myList->show();                                                             
}
                                                                                
struct List{                                                                    
    virtual void push_back(const Node& value){}                              
    virtual void show(){}                                                    
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

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
}

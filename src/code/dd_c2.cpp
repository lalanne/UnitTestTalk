struct ListArray{
    struct List iList; //important    
    Node container[10];                                                       
    unsigned int it;
};

void ListArray_push_back(struct List* l, 
                        const Node& value);
void ListArray_show(struct List* l);

void ListArray_init(struct ListArray* la){
    la->iList.push_back = &ListArray_push_back;
    la->iList.show = &ListArray_show;
    la->it = 0;
}

void ListArray_push_back(struct List* l, 
                        const Node& value){
    struct ListArray* dis = (struct ListArray*)l; //important
    dis->container[dis->it++] = value;
}

void ListArray_show(struct List* l){
    struct ListArray* dis = (struct ListArray*)l; //important
    for(int i=0; i<dis->it; ++i) cout<<dis->container[i].element<<endl;
}



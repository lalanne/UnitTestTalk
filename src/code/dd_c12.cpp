void ListVector_init(struct ListVector* lv){
    lv->iList.push_back = &ListVector_push_back;
    lv->iList.show = &ListVector_show;
}

void ListVector_push_back(struct List* l, 
                        const Node& value){
    struct ListVector* dis = (struct ListVector*)l; //important
    dis->container.push_back(value);
}

void ListVector_show(struct List* l){
    struct ListVector* dis = (struct ListVector*)l; //important
    for(auto& e : dis->container) cout<<e.element<<endl;
}


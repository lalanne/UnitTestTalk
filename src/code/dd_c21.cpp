void function_that_does_stuff(struct List* l){
    (l->show)(l);
}

int main(){
    struct ListVector lv;
    ListVector_init(&lv);

    ListVector_push_back((struct List*)&lv, Node(5));
    ListVector_push_back(&(lv.iList), Node(6));
    function_that_does_stuff(&(lv.iList));

    struct ListArray la;
    ListArray_init(&la);

    ListArray_push_back((struct List*)&la, Node(5));
    ListArray_push_back(&(la.iList), Node(6));
    function_that_does_stuff(&(la.iList));
}



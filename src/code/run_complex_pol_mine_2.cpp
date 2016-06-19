
int main(){

    Base* obj = new Derived();
    for(unsigned int i=0; i<MAX*MAX; ++i){
        obj->addOne(i);
    }   
    cout<<"result: "<<obj->result()<<endl;
    delete obj;

    return 0;
}

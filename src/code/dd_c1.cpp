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
    struct List iList; //important
    vector<Node> container;
};

void ListVector_push_back(struct List* l, const Node& value);
void ListVector_show(struct List* l);


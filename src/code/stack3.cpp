
template<typename T>
class Stack {
    public:
        void push(T item) {
            stack.push_back(item);
        }

        T pop() {
            if(!stack.size()) throw EmptyStackException();
            T tmp = stack.back();
            stack.pop_back();
            return tmp;
        }

    private:
        std::list<T> stack;
};



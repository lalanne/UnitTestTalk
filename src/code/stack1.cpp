
template<typename T>
class Stack {
    public:
        void push(T item) {
            stack.push_back(item);
        }

        T pop() {
            return stack.back();
        }

    private:
        std::list<T> stack;
};

class Derived : public Base<Derived> {
    unsigned int accumulator;

    public:
        Derived() : accumulator(0) {}

        void addOne(unsigned int x) {
            accumulator += x;
        }

        unsigned int result() {
            return accumulator;
        }
};

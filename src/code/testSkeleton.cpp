
#include "Stack.hpp"
...

TEST(stack_tests, lifo_behaviour_with_1_element) {
    Stack<float> stack;

    stack.push(2.5);

    EXPECT_EQ(2.5, stack.pop());
}


TEST(stack_tests, lifo_behaviour_with_3_element) {
    Stack<int> stack;

    stack.push(2);
    stack.push(1);
    stack.push(14);

    EXPECT_EQ(14, stack.pop());
    EXPECT_EQ(1, stack.pop());
    EXPECT_EQ(2, stack.pop());
}

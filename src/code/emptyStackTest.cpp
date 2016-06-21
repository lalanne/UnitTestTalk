
TEST(stack_tests, pop_of_empty_stack) {
    Stack<int> stack;

    EXPECT_THROW(stack.pop(), EmptyStackException);
}


TEST(stack_tests, exceeding_stack_limit) {
    Stack<double> stack(3);

    stack.push(3.4);
    stack.push(2.4);
    stack.push(4.4);

    EXPECT_THROW(stack.push(7.8), ExceedsStackSizeException);
}

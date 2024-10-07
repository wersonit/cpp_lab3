TEST(firstTest, BasicAssertions) {
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
  EXPECT_NEAR(calculate(0.001, 2), 0.739567)
}

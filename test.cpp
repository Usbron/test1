#include "pch.h"
#include "../StaticLib1/framework.h"

TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss(">");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opgt");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("!");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opnot");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("=");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opassing");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("+");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opplus");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("(");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "lpar");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss(")");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "rpar");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("{");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "lbrace");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("}");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "rbrace");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss(";");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "semicolon");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss(".");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "colon");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss(",");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "comma");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("*");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opmul");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("<");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "oplt");
}
TEST(TickTest, TestState0) {
    char cache = ' ';
    std::stringstream ss("=");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 0);
    ASSERT_EQ(result.second.first, "opassing");
}
TEST(TickTest, TestState1) {
    char cache = ' ';
    std::stringstream ss("!=");
    auto result = tick(0, ss, cache);
    ASSERT_EQ(result.first, 1);
    ASSERT_EQ(result.second.first, "opne");
}
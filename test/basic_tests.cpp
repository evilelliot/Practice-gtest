#include "../src/names.hpp"
#include "../src/consts.hpp"
#include <gtest/gtest.h>
#include <string>



// Tests for replace.
TEST(ReplaceTest, StringTest){
    EXPECT_TRUE(consts::EXPECTED == names::names::replace(consts::TEXT, consts::NAME, consts::_NAME));
    ASSERT_EQ(consts::TEXT.length(), names::names::replace(consts::TEXT, consts::NAME, consts::_NAME).length());  
}
// Tests for find.
TEST(FindTest, BoolTest){
    EXPECT_TRUE(names::names::find(consts::TEXT, consts::NAME));
    EXPECT_FALSE(names::names::find(consts::TEXT, "Mariana"));
}
// Tests for get position.
TEST(GetPosTest, IntegerTest){
    int _pos = names::names::get_pos(consts::TEXT, consts::NAME);
    ASSERT_EQ(_pos, names::names::get_pos(consts::TEXT, consts::NAME));
}
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
 
#define private public

#include "../include/CircuralBuffer.h"

template<typename T>
using CB = CircuralBuffer<T>;
// TEST(SquareRootTest, PositiveNos) { 
//     EXPECT_EQ(5, squareRoot(36.0));
//     ASSERT_EQ(18.0, squareRoot(324.0));
//     ASSERT_EQ(25.4, squareRoot(645.16));
//     ASSERT_EQ(0, squareRoot(0.0));
// }
 
// TEST(SquareRootTest, NegativeNos) {
//     ASSERT_EQ(-1.0, squareRoot(-15.0));
//     ASSERT_EQ(-1.0, squareRoot(-0.2));
// }
 
TEST(ConstructorTest, Construct_getSize)
{
    CB<int> cbuff = CB<int>(5);
    ASSERT_EQ(5, cbuff.elements.size());
    ASSERT_EQ(false, cbuff.full);
    ASSERT_EQ(0, cbuff.size);
}


int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
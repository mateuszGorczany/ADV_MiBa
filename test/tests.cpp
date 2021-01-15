#include <gtest/gtest.h>
 
#define private public

#include "../include/CircuralBuffer.h"

template<typename T>
using CB = CircuralBuffer<T>;
 
TEST(ConstructorTest, Construct_getSize)
{
    CB<int> cbuff = CB<int>(5);
    ASSERT_EQ(5, cbuff.elements.size());
    ASSERT_EQ(false, cbuff.full);
    ASSERT_EQ(0, cbuff.size);
}

TEST(CapacityTest, Capacity)
{
    CB<int> cbuff = CB<int>(5);
    ASSERT_EQ(5, cbuff.capacity());
}

TEST(PutTest, Put)
{
    CB<int> cbuff = CB<int>(5);
    cbuff.put(1);
    cbuff.put(2);
    cbuff.put(3);
    cbuff.put(4);
    cbuff.put(5);
    EXPECT_EQ(1, cbuff.elements[0]);
}


int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
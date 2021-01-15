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
    ASSERT_EQ(5, cbuff.getAllocatedSize());
}

TEST(PutTest, Put)
{
    CB<int> cbuff = CB<int>(5);
    cbuff.add(1);
    cbuff.add(2);
    cbuff.add(3);
    cbuff.add(4);
    cbuff.add(5);
    EXPECT_EQ(1, cbuff.elements[0]);
    cbuff.add(6);
    EXPECT_EQ(6, cbuff.elements[0]);
    EXPECT_EQ(5, cbuff.size);
}

TEST(TailTest, Tail)
{
    CB<int> cbuff = CB<int>(4);
    ASSERT_EQ(cbuff.getHead(), cbuff.getTail());
    cbuff.add(1);
    cbuff.add(2);
    ASSERT_EQ(0, cbuff.getTail());
    // cbuff.pop();
    // ASSERT_EQ(1, cbuff.getHead());
}

TEST(HeadTest, Tail)
{
    CB<int> cbuff = CB<int>(4);
    ASSERT_EQ(cbuff.getHead(), cbuff.getTail());

    cbuff.add(1).add(2);

    ASSERT_EQ(2, cbuff.getHead());

    cbuff.add(2).add(2);

    ASSERT_EQ(4, cbuff.getHead());

    cbuff.add(2);

    ASSERT_EQ(1, cbuff.getHead());
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
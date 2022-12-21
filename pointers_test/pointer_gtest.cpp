#include "pointer_test.cpp"
#include <gtest/gtest.h>
#include<stdio.h>
#define TRUE 1
 
TEST(SquareRootTest, PositiveNos) 
    { 

        ASSERT_EQ(arr[0],0);
        ASSERT_EQ(arr[1],0);
        ASSERT_EQ(arr[2],0);
        ASSERT_EQ(arr[3],0);
        ASSERT_EQ(arr[4],0);




        
        int size = 5;
        ASSERT_EQ(size,5);



        fun(arr,size);
      
        ASSERT_EQ(size,5);

        ASSERT_EQ(arr[0],1);
        ASSERT_EQ(arr[1],1);
        ASSERT_EQ(arr[2],1);
        ASSERT_EQ(arr[3],1);
        ASSERT_EQ(arr[4],1);


}
 
// TEST(SquareRootTest, NegativeNos) 
//     {
//     ASSERT_EQ(-1.0, squareRoot(-15.0));
//     ASSERT_EQ(-1.0, squareRoot(-0.2));
//     }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
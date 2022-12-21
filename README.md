# G-test basics


G-test setup
https://www.srcmake.com/home/google-cpp-test-framework

steps to getting started  G-test 

write your first unit test with below steps  

1) 
sudo apt-get install libgtest-dev
sudo apt-get install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib

2) 
touch sqrt.cpp
touch sqrt_test.cpp
touch CMakeLists.txt

3) 
Open "sqrt.cpp" and add the following code (which has a function to calculate the square root of a double).

#include <math.h>
 
// Get the Square root of a number. 
double squareRoot(const double a) 
    {
    double b = sqrt(a);
    if(b != b) // NaN check
        { return -1.0; }
    else
        { return sqrt(a); }
    }
    
 
 
 4) Now let's write a test file with some code that will use Google Tests to test the function. Open "sqrt_test.cpp", and write the following code. 
 
 #include "sqrt.cpp"
#include <gtest/gtest.h>
 
TEST(SquareRootTest, PositiveNos) 
    { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
    }
 
TEST(SquareRootTest, NegativeNos) 
    {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
    
   
   
 5) So our code and the unit test are written. Now we need to actually run the test file to see if the testing works. Open "CMakeLists.txt" and add the following to it. 
 
 cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests sqrt_test.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)

6) 
cmake CMakeLists.txt
make
./executeTests

7) 

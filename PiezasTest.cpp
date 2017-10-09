/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(PiezasTest, rowLength)
{
	const int BOARD_ROWS = 4;
	EXPECT_NE(BOARD_ROWS, 3);
}

TEST(PiezasTest, colHeight)
{
	const int BOARD_COLS = 3;
	EXPECT_NE(BOARD_COLS, 4);
}

TEST(PiezasTest, outOfBounds)
{
	ASSERT_TRUE(BOARD_ROWS = 3);
	ASSERT_TRUE(BOARD_COLS = 4);	
}


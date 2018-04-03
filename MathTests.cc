#include <gtest/gtest.h>
#include "MathLib.h"
 
TEST(Sum, PositiveNumbers_Small) { 
    ASSERT_EQ(2, Sum(1, 1));
	ASSERT_EQ(12, Sum(5, 7));
	ASSERT_EQ(20, Sum(10, 10));
	ASSERT_GT(Sum(1, 2), Sum(1, 1));
	ASSERT_GT(Sum(5, 9), Sum(7, 3));
	ASSERT_GT(Sum(12, 4), Sum(12, 1));
	ASSERT_LT(Sum(4, 6), Sum(7, 8));
	ASSERT_LT(Sum(1, 3), Sum(4, 11));
	ASSERT_LT(Sum(11, 9), Sum(22, 6));
}

TEST(Sum, PositiveNumbers_Medium) { 
    ASSERT_EQ(330, Sum(170, 160));
	ASSERT_EQ(555, Sum(222, 333));
	ASSERT_EQ(1024, Sum(1023, 1));
	ASSERT_EQ(2049, Sum(1024, 1025));
	ASSERT_GT(Sum(245, 170), Sum(155, 180));
	ASSERT_GT(Sum(2750, 3500), Sum(1760, 2455));
	ASSERT_GT(Sum(9999, 1), Sum(4444, 5555));
	ASSERT_LT(Sum(7333, 709), Sum(13450, 1066));
	ASSERT_LT(Sum(13400, 2713), Sum(18800, 3400));
	ASSERT_LT(Sum(6666, 7777), Sum(7777, 8888));
}

TEST(Sum, PositiveNumbers_Big) { 
    ASSERT_EQ(124532, Sum(47045, 77487));
	ASSERT_EQ(500000, Sum(250000, 250000));
	ASSERT_EQ(420420, Sum(420415, 5));
	ASSERT_EQ(620000, Sum(617952, 2048));
	ASSERT_GT(Sum(342160, 122789), Sum(53077, 216893));
	ASSERT_GT(Sum(991050, 403708), Sum(607405, 209667));
	ASSERT_GT(Sum(1054873, 3487111), Sum(2456123, 1852369));
	ASSERT_LT(Sum(345609, 480355), Sum(1425632, 405982));
	ASSERT_LT(Sum(1478520, 2659632), Sum(6482014, 4523698));
	ASSERT_LT(Sum(4123456, 7123056), Sum(8045236, 8140526));
}

TEST(Sum, PositiveNumbers_Huge) { 
    ASSERT_EQ(987654321, Sum(123456789, 864197532));
	ASSERT_EQ(456123789, Sum(456123786, 3));
	ASSERT_EQ(789456123, Sum(789455099, 1024));
	ASSERT_EQ(123456789, Sum(122893575, 563214));
	ASSERT_EQ(7412589630, Sum(4392485580, 3020104050));
	ASSERT_GT(Sum(789456123, 789456123), Sum(789456123, 123456789));
	ASSERT_GT(Sum(123456789, 123456789), Sum(123456789, 209667));
	ASSERT_LT(Sum(123456789, 456123789), Sum(789456123, 789456123));
	ASSERT_LT(Sum(456123789, 496783749), Sum(789333123, 999459123));
}

TEST(Sum, PositiveNumbers_ExtraHuge) { 
    EXPECT_EQ(987654321123456789, Sum(864197531135802468, 123456789987654321));
	EXPECT_EQ(147258369963852741, Sum(123456789987654321, 23801579976198420));
	EXPECT_GT(Sum(864197531135802468, 123456789987654321), Sum(123456789987654321, 123456789987654321));
	EXPECT_LT(Sum(123456789987654321, 123456789987654321), Sum(864197531135802468, 123456789987654321));
}

TEST(Sum, PositiveNumbers_Insane) { 
    EXPECT_EQ(123456789098765432101234567890987654321, Sum(123456789098765432101234567890987654300, 21));
}

TEST(Sum, PositiveZero_Small){
	ASSERT_EQ(0, Sum(0, 0));
	ASSERT_EQ(3, Sum(0, 3));
	ASSERT_EQ(17, Sum(17, 0));
}

TEST(Sum, PositiveZero_Medium){
	ASSERT_EQ(133, Sum(133, 0));
	ASSERT_EQ(705, Sum(0, 705));
	ASSERT_EQ(2079, Sum(2079, 0));
}

TEST(Sum, PositiveZero_Big){
	ASSERT_EQ(403589, Sum(403589, 0));
	ASSERT_EQ(10589623, Sum(0, 10589623));
	ASSERT_EQ(2489563, Sum(0, 2489563));
}

TEST(Sum, PositiveZero_Huge){
	ASSERT_EQ(987654321, Sum(987654321, 0));
	ASSERT_EQ(123456789, Sum(0, 123456789));
	ASSERT_EQ(14785236987, Sum(0, 14785236987));
}

TEST(Sum, PositiveZero_ExtraHuge){
	EXPECT_EQ(987654321123456789, Sum(987654321123456789, 0));
	EXPECT_EQ(123456789987654321, Sum(0, 123456789987654321));
	EXPECT_EQ(864197531135802468, Sum(0, 864197531135802468));
}

TEST(Sum, PositiveZero_Insane){
	EXPECT_EQ(123456789098765432101234567890987654321, Sum(123456789098765432101234567890987654321, 0));
}

TEST(Sum, PositiveNegative_Small){
	ASSERT_EQ(3, Sum(-3, 6));
	ASSERT_EQ(13, Sum(14, -1));
	ASSERT_EQ(28, Sum(-8, 36));
}

TEST(Sum, PositiveNegative_Medium){
	ASSERT_EQ(806, Sum(-308, 1114));
	ASSERT_EQ(1024, Sum(2048, -1024));
	ASSERT_EQ(36040, Sum(-24033, 60073));
}

TEST(Sum, PositiveNegative_Big){
	ASSERT_EQ(200000, Sum(-140000, 340000));
	ASSERT_EQ(843013, Sum(-140688, 983701));
	ASSERT_EQ(36040, Sum(-24033, 60073));
}

TEST(Sum, PositiveNegative_Huge){
	ASSERT_EQ(456789123, Sum(-258369741, 715158864));
	ASSERT_EQ(123456789, Sum(271309158, -147852369));
	ASSERT_EQ(456123789, Sum(777778776, -321654987));
}

TEST(Sum, PositiveNegative_ExtraHuge){
	EXPECT_EQ(654321987789456123, Sum(-741852963369258147, 1396174951158714270));
	EXPECT_EQ(777777777777777777, Sum(888888888888888888, -111111111111111111));
}

TEST(Sum, PositiveNegative_Insane){
	EXPECT_EQ(123456789098765432101234567890987654000, Sum(123456789098765432101234567890987654321, -321));
}

TEST(Sum, NegativeNumbers_Small){
	ASSERT_EQ(-10, Sum(-5, -5));
	ASSERT_EQ(-27, Sum(-14, -13));
	ASSERT_EQ(-2, Sum(-1, -1));
}

TEST(Sum, NegativeNumbers_Medium){
	ASSERT_EQ(-333, Sum(-222, -111));
	ASSERT_EQ(-1024, Sum(-500, -524));
	ASSERT_EQ(-6055, Sum(-3022, -3033));
}

TEST(Sum, NegativeNumbers_Big){
	ASSERT_EQ(-408777, Sum(-222222, -186555));
	ASSERT_EQ(-2456124, Sum(-1123456, -1332668));
}

TEST(Sum, NegativeNumbers_Huge){
	ASSERT_EQ(-516739482, Sum(-258369741, -258369741));
	ASSERT_EQ(-1036148517, Sum(-777778776, -258369741));
}

TEST(Sum, NegativeNumbers_ExtraHuge){
	EXPECT_EQ(-1308643975578912246, Sum(-654321987789456123, -654321987789456123));
	EXPECT_EQ(-2050496938948170393, Sum(-654321987789456123, -1396174951158714270));
}

TEST(Sum, NegativeNumbers_Insane){
	EXPECT_EQ(-123456789098765432101234567890987654000, Sum(-123456789098765432101234567890987653000, -1000));
}

TEST(Sum, NegativeZero_Small){
	ASSERT_EQ(-7, Sum(-7, 0));
	ASSERT_EQ(-14, Sum(-14, 0));
	ASSERT_EQ(-27, Sum(0, -27));
}

TEST(Sum, NegativeZero_Medium){
	ASSERT_EQ(-334, Sum(-334, 0));
	ASSERT_EQ(-806, Sum(-806, 0));
	ASSERT_EQ(-1489, Sum(0, -1489));
}

TEST(Sum, NegativeZero_Big){
	ASSERT_EQ(-486248, Sum(-486248, 0));
	ASSERT_EQ(-741256, Sum(-741256, 0));
	ASSERT_EQ(-900000, Sum(0, -900000));
}

TEST(Sum, NegativeZero_Huge){
	ASSERT_EQ(-516739482, Sum(-516739482, 0));
	ASSERT_EQ(-258369741, Sum(-258369741, 0));
	ASSERT_EQ(-1036148517, Sum(0, -1036148517));
}

TEST(Sum, NegativeZero_ExtraHuge){
	EXPECT_EQ(-2050496938948170393, Sum(-2050496938948170393, 0));
	EXPECT_EQ(-654321987789456123, Sum(-654321987789456123, 0));
	EXPECT_EQ(-1396174951158714270, Sum(0, -1396174951158714270));
}

TEST(Sum, NegativeZero_Insane){
	EXPECT_EQ(-123456789098765432101234567890987654000, Sum(-123456789098765432101234567890987654000, 0));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
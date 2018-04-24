/**
*	@file MathTests.cc
*	@author Pavel Kaleta (xkalet05)
*	@brief IVS projekt 2 - Testy kalkulacky
*/

#include <gtest/gtest.h>
#include "../MathLib.h"
 
using namespace MathLib;

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

TEST(Sum, Decimal){
	ASSERT_EQ(1, Sum(0.2, 0.8));
	ASSERT_EQ(0, Sum(-0.2, 0.2));
	ASSERT_EQ(-1, Sum(-0.5, -0.5));
	ASSERT_EQ(10, Sum(5.5555555, 4.4444445));
	ASSERT_EQ(1650000, Sum(2000000, -350000));
	ASSERT_EQ(25000000, Sum(24999999.9999, 0.0001));
	ASSERT_EQ(25000000, Sum(25000000.0001, -0.0001));
}

TEST(Dif, Integers){
	ASSERT_EQ(0, Dif(1, 1));
	ASSERT_EQ(1, Dif(1, 0));
	ASSERT_EQ(0, Dif(0, 0));
	ASSERT_EQ(1, Dif(1, -0));
	ASSERT_EQ(0, Dif(0, -0));
	ASSERT_EQ(2, Dif(1, -1));
	ASSERT_EQ(0, Dif(-5, -5));
}

TEST(Dif, Decimal){
	ASSERT_EQ(0, Dif(0.5, 0.5));
	ASSERT_EQ(0.5, Dif(0.5, -0));
	ASSERT_EQ(0.5, Dif(-0, -0.5));
	ASSERT_EQ(1, Dif(0.5, -0.5));
	ASSERT_EQ(0, Dif(-0.5, -0.5));
	ASSERT_EQ(0, Dif(1000000000.99, 1000000000.99));
}

TEST(Mul, Integers){
	ASSERT_EQ(0, Mul(0, 0));
	ASSERT_EQ(0, Mul(10, 0));
	ASSERT_EQ(0, Mul(0, 10));
	ASSERT_EQ(0, Mul(-10, 0));
	ASSERT_EQ(0, Mul(0, -10));
	ASSERT_EQ(25, Mul(5, 5));
	ASSERT_EQ(-25, Mul(5, -5));
	ASSERT_EQ(255, Mul(1, 255));
	ASSERT_EQ(300, Mul(1, 300));
	ASSERT_EQ(-25, Mul(-5, 5));
}

TEST(Mul, Decimal){
	ASSERT_EQ(0, Mul(0, 0.5));
	ASSERT_EQ(0, Mul(0, -0.5));
	ASSERT_EQ(0.25, Mul(0.5, 0.5));
	ASSERT_EQ(1, Mul(2, 0.5));
	ASSERT_EQ(-0.5, Mul(1, -0.5));
	ASSERT_EQ(0.25, Mul(-0.5, -0.5));
}

TEST(Div, Integers){	
	EXPECT_ANY_THROW(Div(0, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(Div(13, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(Div(-13, 0));	// Neplatne zadani
	ASSERT_EQ(0, Div(0, 1));
	ASSERT_EQ(0, Div(0, 2));
	ASSERT_EQ(0, Div(0, -1));
	ASSERT_EQ(0, Div(0, -2));
	ASSERT_EQ(2, Div(10, 5));
	ASSERT_EQ(-2, Div(10, -5));
	ASSERT_EQ(2, Div(-10, -5));
}

TEST(Div, Decimal){
	EXPECT_ANY_THROW(Div(0.5, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(Div(-0.5, 0));	// Neplatne zadani
	ASSERT_EQ(0, Div(0, 0.1));
	ASSERT_EQ(0, Div(0, -0.5));
	ASSERT_EQ(1, Div(0.5, 0.5));
	ASSERT_EQ(-1, Div(0.5, -0.5));
	ASSERT_EQ(50, Div(10, 0.2));
	ASSERT_EQ(-50, Div(10, -0.2));
	ASSERT_EQ(0, Div(-0, 5.5));
	ASSERT_EQ(0, Div(-0, -5.5));
}

TEST(Fact, Integers){
	ASSERT_EQ(1, Fact(0));
	ASSERT_EQ(1, Fact(1));
	ASSERT_EQ(2, Fact(2));
	ASSERT_EQ(6, Fact(3));
	ASSERT_EQ(24, Fact(4));
	ASSERT_EQ(2432902008176640000, Fact(20));
	EXPECT_ANY_THROW(Fact(-1));	// Neplatne zadani
	EXPECT_ANY_THROW(Fact(-5));	// Neplatne zadani
	EXPECT_ANY_THROW(Fact(-6));	// Neplatne zadani
}

TEST(Fact, Decimal){
	EXPECT_ANY_THROW(Fact(0.1));	// Neplatne zadani
	EXPECT_ANY_THROW(Fact(5.1));	// Neplatne zadani
	EXPECT_ANY_THROW(Fact(-0.1));	// Neplatne zadani	
	EXPECT_ANY_THROW(Fact(-10.1));	// Neplatne zadani
}

TEST(Pow, Integers){		
	ASSERT_EQ(0, Pow(0, 1));
	ASSERT_EQ(0, Pow(0, 2));
	EXPECT_ANY_THROW(Pow(0, -1));	// Neplatne zadani
	EXPECT_ANY_THROW(Pow(0, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(Pow(0, -2));	// Neplatne zadani
	ASSERT_EQ(1, Pow(1, 0));
	ASSERT_EQ(1, Pow(2, 0));
	ASSERT_EQ(-2, Pow(-2, 1));
	ASSERT_EQ(4, Pow(-2, 2));
	ASSERT_EQ(-8, Pow(-2, 3));
	ASSERT_EQ(1, Pow(1, 1));
	ASSERT_EQ(1, Pow(1, 2));
	ASSERT_EQ(4, Pow(2, 2));
	ASSERT_EQ(0.25, Pow(2, -2));
	ASSERT_EQ(0.00032, Pow(5, -5));
}

TEST(Pow, Decimal){
	ASSERT_DOUBLE_EQ(1, Pow(0.1, 0));
	ASSERT_DOUBLE_EQ(0.1, Pow(0.1, 1));
	ASSERT_DOUBLE_EQ(0.01, Pow(0.1, 2));
	ASSERT_DOUBLE_EQ(0.01, Pow(-0.1, 2));
	ASSERT_DOUBLE_EQ(0.001, Pow(0.1, 3));
	ASSERT_DOUBLE_EQ(-0.001, Pow(-0.1, 3));
	ASSERT_DOUBLE_EQ(-132.651, Pow(-5.1, 3));
	ASSERT_DOUBLE_EQ(-0.008, Pow(-5.0, -3));
}

TEST(NthRoot, Integers){
	ASSERT_EQ(0, NthRoot(0, 2));
	ASSERT_EQ(1, NthRoot(1, 2));
	ASSERT_DOUBLE_EQ(1.4142135623730951, NthRoot(2, 2));
	ASSERT_DOUBLE_EQ(1.7320508075688772, NthRoot(3, 2));
	ASSERT_DOUBLE_EQ(500.33288918479064, NthRoot(250333, 2));	
	EXPECT_ANY_THROW(NthRoot(-1, 2));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-10, 2));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-99999999, 2));	// Neplatne zadani
	ASSERT_EQ(0, NthRoot(0, 3));
	ASSERT_EQ(1, NthRoot(1, 3));
	ASSERT_DOUBLE_EQ(1.2599210498948732, NthRoot(2, 3));
	ASSERT_DOUBLE_EQ(1.7099759466766968, NthRoot(5, 3));
	ASSERT_DOUBLE_EQ(1.2589254117941673, NthRoot(10, 10));
	ASSERT_DOUBLE_EQ(3.0335726037497288, NthRoot(66000, 10));
	EXPECT_ANY_THROW(NthRoot(0, -5));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(1, -5));
        EXPECT_ANY_THROW(NthRoot(2, -5));
        EXPECT_ANY_THROW(NthRoot(5000000, -500));
	ASSERT_DOUBLE_EQ(1.0313306863764471, NthRoot(5000000, 500));
	EXPECT_ANY_THROW(NthRoot(-4, 4));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(0, -3));	// Neplatne zadani
        EXPECT_ANY_THROW(NthRoot(4333333, -60000));
	EXPECT_ANY_THROW(NthRoot(0, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-4, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(13000, 0));	// Neplatne zadani
}

TEST(NthRoot, Decimal){
	ASSERT_DOUBLE_EQ(0.31622776601683794, NthRoot(0.1, 2));
	ASSERT_DOUBLE_EQ(1.2247448713915889, NthRoot(1.5, 2));
	EXPECT_ANY_THROW(NthRoot(-0.5, 2)); 	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-55.55, 2));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-4.5, 4));	// Neplatne zadani
	ASSERT_DOUBLE_EQ(0.66943295008216952, NthRoot(0.3, 3));
        EXPECT_ANY_THROW(NthRoot(0.3, -3));
        EXPECT_ANY_THROW(NthRoot(4333333.5, -60000));
	ASSERT_DOUBLE_EQ(1.0552618672639118, NthRoot(2.123456789, 14));
	EXPECT_ANY_THROW(NthRoot(0.3333, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-0.333, 0));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(1400000.33333, -0));	// Neplatne zadani
	EXPECT_ANY_THROW(NthRoot(-1400000.33333, -0));	// Neplatne zadani
}

TEST(opSinus, Integer){
	ASSERT_DOUBLE_EQ(0, opSinus(0));
	ASSERT_DOUBLE_EQ(0.8414709848078965, opSinus(1));
	ASSERT_DOUBLE_EQ(0.90929742682568171, opSinus(2));
	ASSERT_DOUBLE_EQ(-0.48507743484852744, opSinus(6333444));
	ASSERT_DOUBLE_EQ(0.95892427466313845, opSinus(-5));
	ASSERT_DOUBLE_EQ(-0.99066464773612628, opSinus(-9999999));
}

TEST(opSinus, Decimal){
	ASSERT_DOUBLE_EQ(0.10977830083717481, opSinus(0.11));
	ASSERT_DOUBLE_EQ(-0.10977830083717481, opSinus(-0.11));
	ASSERT_DOUBLE_EQ(0.83803281603206381, opSinus(-55.555));
	ASSERT_DOUBLE_EQ(0.10977830083717481, opSinus(0.11));
	ASSERT_DOUBLE_EQ(0.66228598020866125, opSinus(123456789.987654321));
	ASSERT_DOUBLE_EQ(-0.66228598020866125, opSinus(-123456789.987654321));
}	

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"

TEST(RandTest,RandomEvaluate){
	int randnum = rand() % 100;
	Rand* test = new Rand(randnum);
	EXPECT_EQ(test->evaluate(), 86);

}

TEST(RandTest, RandomStringify) {
	int randnum = rand() % 100;
	Rand* test = new Rand(randnum);
	EXPECT_EQ(test->stringify(), "77.000000");



}
#endif 

#include "pch.h"
#include "../PrimeFactorTDD/prime-factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactor, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
#include <stan/prob/distributions/univariate/continuous/lognormal.hpp>
#include <gtest/gtest.h>
#include <boost/random/mersenne_twister.hpp>

TEST(ProbDistributionsLogNormal, random) {
  boost::random::mt19937 rng;
  EXPECT_NO_THROW(stan::prob::lognormal_rng(2.0,1.0,rng));
}

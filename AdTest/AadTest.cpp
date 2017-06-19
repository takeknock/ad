#include "AadTest.h"


namespace adtest {
    TEST_F(AadTest, add_test) 
    {
        ad::Aad x1(1.0);
        const ad::Aad x2(2.0);

        ad::Aad y = x1 + x2;
        double expected_value = 3.0;
        
        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(1.0, y.getDerivative(x1));
        EXPECT_DOUBLE_EQ(1.0, y.getDerivative(x2));
    }

    TEST_F(AadTest, sub_test) 
    {
        const ad::Aad x1(1.0);
        ad::Aad x2(2.0);

        ad::Aad y = x2 - x1;
        double expected_value = 1.0;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(-1.0, y.getDerivative(x1));
        EXPECT_DOUBLE_EQ(1.0, y.getDerivative(x2));
    }

    TEST_F(AadTest, mul_test) 
    {
        ad::Aad x1(3.0);
        const ad::Aad x2(2.0);

        const ad::Aad y = x1 * x2;
        double expected_value = 6.0;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(2.0, y.getDerivative(x1));
        EXPECT_DOUBLE_EQ(3.0, y.getDerivative(x2));
    }

    TEST_F(AadTest, div_test) 
    {
        ad::Aad x1(5.0);
        const ad::Aad x2(2.0);

        const ad::Aad y = x1 / x2;
        double expected_value = 2.5;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(0.5, y.getDerivative(x1));
        EXPECT_DOUBLE_EQ(-1.25, y.getDerivative(x2));
    }

    TEST_F(AadTest, add_test_with_double) 
    {
        ad::Aad x1(5.0);
        double x2 = 2.0;

        const ad::Aad y = x1 + x2;
        double expected_value = 7.0;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(1, y.getDerivative(x1));
    }

    TEST_F(AadTest, sub_test_with_double)
    {
        ad::Aad x1(5.0);
        double x2 = 2.0;

        const ad::Aad y = x1 - x2;
        double expected_value = 3.0;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(1, y.getDerivative(x1));
    }

    TEST_F(AadTest, mul_test_with_double)
    {
        ad::Aad x1(5.0);
        double x2 = 2.0;

        const ad::Aad y = x1 * x2;
        double expected_value = 10.0;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(2.0, y.getDerivative(x1));
    }


    TEST_F(AadTest, div_test_with_double)
    {
        ad::Aad x1(5.0);
        double x2 = 2.0;

        const ad::Aad y = x1 / x2;
        double expected_value = 2.5;

        // value
        EXPECT_DOUBLE_EQ(expected_value, y.value());
        // each partial derivatives
        EXPECT_DOUBLE_EQ(0.5, y.getDerivative(x1));
    }

} // namespace adtest
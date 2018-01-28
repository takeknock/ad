#include <gtest/gtest.h>

#include "Ad/Aad.h"
#include "Ad/expression_template/operators.h"

int main(int argc, char **argv) {
    //ad::ComputationalGraph tree = ad::ComputationalGraph();
    //
    //// x^2 + l*x - m*n(m*n + o)
    //// v_1 = x*x
    //// v_2 = l*x
    //// v_3 = m * n
    //// v_4 = v_3 + o
    //// v_5 = v_3 * v_4
    //// v_6 = v_1 + v_2
    //// v_7 = v_6 - v_5
    //ad::INode x = ad::Variable(3.0);
    //ad::IOperators mul = ad::op_mul();
    //ad::IOperators add = ad::op_add();
    //ad::IOperators sub = ad::op_sub();
    //ad::INode v_1 = ad::Node(mul, x, x);
    //ad::Constant l = ad::Constant(2.0);
    //ad::INode v_2 = ad::Node(mul, x, l);
    //ad::Constant m = ad::Constant(2.0);
    //ad::Constant n = ad::Constant(2.0);
    //ad::INode v_3 = ad::Node(mul, m, n);
    //ad::Constant o = ad::Constant(1.0);

    //ad::INode v_4 = ad::Node(add, v_3, o);
    //ad::INode v_5 = ad::Node(mul, v_3, v_4);
    //ad::INode v_6 = ad::Node(add, v_1, v_2);
    //ad::INode v_7 = ad::Node(sub, v_6, v_7);
    //tree.add(x);
    //tree.add(l);
    //tree.add(m);
    //tree.add(n);
    //tree.add(v_1);
    //tree.add(v_2);
    //tree.add(v_3);
    //tree.add(v_4);
    //tree.add(v_5);
    //tree.add(v_6);
    //tree.add(v_7);

    //tree.setup();
    //const double derivative = tree.getDerivative(x);


    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();

    double a_data[] = { 2,3,5,9 };
    double b_data[] = { 1,0,0,1 };
    double c_data[] = { 3,0,2,5 };
    double d_data[4];

    Array A(a_data, 4);
    Array B(b_data, 4);
    Array C(c_data, 4);
    Array D(d_data, 4);
    D = A + B + C;

    std::cout << typeid(A).name() << std::endl;
    std::cout << typeid(B).name() << std::endl;
    std::cout << typeid(C).name() << std::endl;
    std::cout << typeid(D).name() << std::endl;

    for (std::size_t i = 0; i < 4; ++i) {
        std::cout << D[i] << std::endl;
    }
    int a;
    std::cin >> a;
    return 0;
}
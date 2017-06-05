#include "Ad/ComputationalGraph.h"
#include "Ad/INode.h"
#include "Ad/Node.h"
#include "Ad/Variable.h"
#include "Ad/Constant.h"
#include "Ad/operators.h"

int main() {
    ad::ComputationalGraph tree = ad::ComputationalGraph();
    
    // x^2 + l*x - m*n(m*n + o)
    // v_1 = x*x
    // v_2 = l*x
    // v_3 = m * n
    // v_4 = v_3 + o
    // v_5 = v_3 * v_4
    // v_6 = v_1 + v_2
    // v_7 = v_6 - v_5
    ad::INode x = ad::Variable(3.0);
    ad::IOperators mul = ad::op_mul();
    ad::IOperators add = ad::op_add();
    ad::IOperators sub = ad::op_sub();
    ad::INode v_1 = ad::Node(mul, x, x);
    ad::Constant l = ad::Constant(2.0);
    ad::INode v_2 = ad::Node(mul, x, l);
    ad::Constant m = ad::Constant(2.0);
    ad::Constant n = ad::Constant(2.0);
    ad::INode v_3 = ad::Node(mul, m, n);
    ad::Constant o = ad::Constant(1.0);

    ad::INode v_4 = ad::Node(add, v_3, o);
    ad::INode v_5 = ad::Node(mul, v_3, v_4);
    ad::INode v_6 = ad::Node(add, v_1, v_2);
    ad::INode v_7 = ad::Node(sub, v_6, v_7);
    tree.add(x);
    tree.add(l);
    tree.add(m);
    tree.add(n);
    tree.add(v_1);
    tree.add(v_2);
    tree.add(v_3);
    tree.add(v_4);
    tree.add(v_5);
    tree.add(v_6);
    tree.add(v_7);

    tree.setup();
    const double derivative = tree.getDerivative(x);

    return 0;
}
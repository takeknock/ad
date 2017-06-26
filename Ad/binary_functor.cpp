#include "binary_functor.h"

namespace ad {
    void op_add::diff(
        std::shared_ptr<ComputationalGraph> parent, 
        std::shared_ptr<ComputationalGraph> left, 
        std::shared_ptr<ComputationalGraph> right)
    {
        double nextLeft = left->getLeft()->getDerivative() + parent->getDerivative();
        left->getLeft()->setDerivative(nextLeft);
        double nextRight = right->getRight()->getDerivative() + parent->getDerivative();
        right->getRight()->setDerivative(nextRight);
    }

    void op_sub::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {
        double nextLeft = left->getLeft()->getDerivative() - parent->getDerivative();
        left->getLeft()->setDerivative(nextLeft);
        double nextRight = right->getRight()->getDerivative() - parent->getDerivative();
        right->getRight()->setDerivative(nextRight);
    }

    void op_mul::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {
        double nextLeft = left->getLeft()->getDerivative() + parent->getDerivative() * right->getValue();
        left->getLeft()->setDerivative(nextLeft);
        double nextRight = right->getRight()->getDerivative() + parent->getDerivative() * left->getValue();
        right->getRight()->setDerivative(nextRight);
    }

    void op_div::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {
        double nextLeft = left->getLeft()->getDerivative() + parent->getDerivative() / right->getValue();
        left->getLeft()->setDerivative(nextLeft);
        double nextRight = right->getRight()->getDerivative() 
            + parent->getDerivative() 
            * ( - left->getDerivative() * right->getDerivative() / (right->getValue() * right->getValue()));
        right->getRight()->setDerivative(nextRight);

    }

} // namespace ad 
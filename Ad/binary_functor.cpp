#include "binary_functor.h"

namespace ad {
    void op_add::diff(
        std::shared_ptr<ComputationalGraph> parent, 
        std::shared_ptr<ComputationalGraph> left, 
        std::shared_ptr<ComputationalGraph> right)
    {

    }

    void op_sub::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {

    }

    void op_mul::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {

    }

    void op_div::diff(
        std::shared_ptr<ComputationalGraph> parent,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    {

    }

} // namespace ad 
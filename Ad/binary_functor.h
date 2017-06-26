#pragma once
#include <memory>
#include "Ad/Switch.h"
#include "Ad/IOperator.h"
#include "Ad/ComputationalGraph.h"

namespace ad {
    class op_add : public IOperator {
    public:
        EXPORT_API void diff(
            std::shared_ptr<ComputationalGraph> parent,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);
    };
    class op_sub : public IOperator {
    public:
        EXPORT_API void diff(
            std::shared_ptr<ComputationalGraph> parent,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);
    };
    class op_mul : public IOperator {
    public:
        EXPORT_API void diff(
            std::shared_ptr<ComputationalGraph> parent,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);
    };
    class op_div : public IOperator {
    public:
        EXPORT_API void diff(
            std::shared_ptr<ComputationalGraph> parent,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);
    };

}



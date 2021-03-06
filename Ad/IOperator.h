#pragma once
#include <memory>

#include "Ad/fwd.h"


namespace ad {
    class IOperator {
    public:
        virtual void diff(
            std::shared_ptr<ComputationalGraph> parent,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right)
        {

        }

    };

}

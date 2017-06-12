#pragma once
#include "fwd.h"

#include "INode.h"
#include "Node.h"

namespace ad
{
    class ComputationalGraph {
    public:
        EXPORT_API ComputationalGraph();
        
        const double getDerivative(const Aad& from);
        void add(const Aad& child);
    private:
        INode& _top();
    };
} // namespace ad

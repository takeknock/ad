#pragma once

#include <memory>

#include "fwd.h"

#include "INode.h"
#include "Node.h"

namespace ad
{
    class ComputationalGraph {
    public:
        EXPORT_API ComputationalGraph();
        
        const double getDerivative(const Aad& from);
        void addRight(const std::shared_ptr<Aad> child);
        void addLeft(const std::shared_ptr<Aad> child);

    private:
        std::shared_ptr<Aad> _right = std::shared_ptr<Aad>();
        std::shared_ptr<Aad> _left = std::shared_ptr<Aad>();
    };
} // namespace ad

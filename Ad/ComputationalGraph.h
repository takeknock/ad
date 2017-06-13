#pragma once

#include <memory>

#include "Ad/fwd.h"

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
        //void addRight(const Aad& child);
        //void addLeft(const Aad& child);

    private:
        std::shared_ptr<Aad> _right;
        std::shared_ptr<Aad> _left;
        //Aad& _right;
        //Aad& _left;
    };
} // namespace ad

#pragma once

#include <memory>

#include "Ad/fwd.h"

namespace ad
{
    class ComputationalGraph {
    public:
        EXPORT_API ComputationalGraph();
        EXPORT_API ComputationalGraph(
            double value,
            double derivative,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);
        const double getDerivative(const Aad& from);
        //void addRight(const std::shared_ptr<Aad> child);
        //void addLeft(const std::shared_ptr<Aad> child);
        //void addRight(const Aad& child);
        //void addLeft(const Aad& child);
        EXPORT_API void setDerivative(double derivative);

    private:
        std::shared_ptr<ComputationalGraph> _left;
        std::shared_ptr<ComputationalGraph> _right;
        double _value;
        double _derivative;
        //Aad& _right;
        //Aad& _left;
    };
} // namespace ad

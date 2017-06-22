#pragma once

#include <memory>
#include "Ad/Switch.h"
#include "Ad/IOperator.h"
#include "Ad/Aad.h"

namespace ad
{
    class ComputationalGraph {
    public:
        EXPORT_API ComputationalGraph();

        EXPORT_API ComputationalGraph(
            IOperator& op,
            double value,
            std::shared_ptr<ComputationalGraph> left,
            std::shared_ptr<ComputationalGraph> right);

        const double getDerivative(const Aad& from);
        //void addRight(const std::shared_ptr<Aad> child);
        //void addLeft(const std::shared_ptr<Aad> child);
        //void addRight(const Aad& child);
        //void addLeft(const Aad& child);
        EXPORT_API void setDerivative(double derivative);
        bool isLeaf();

        
        std::shared_ptr<ComputationalGraph> getLeft();
        std::shared_ptr<ComputationalGraph> getRight();
        
        void setDfsp(std::shared_ptr<ComputationalGraph> p);
        std::shared_ptr<ComputationalGraph> getDfsp();

    private:
        IOperator &_op;
        std::shared_ptr<ComputationalGraph> _left;
        std::shared_ptr<ComputationalGraph> _right;
        std::shared_ptr<ComputationalGraph> _dfsp;
        double _value;
        double _derivative;
        //Aad& _right;
        //Aad& _left;
    };
} // namespace ad

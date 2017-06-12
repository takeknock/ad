#pragma once
#include "INode.h"
#include "operators.h"

namespace ad {
    class Node : public INode {
    public:
        Node(const IOperators& op, const INode& lchild, const INode& rchild);
        void setDerivative(double derivative);

    private:
        const IOperators& _op;
        const INode& _lchild;
        const INode& _rchild;
        double derivative;

    };
} // namespace ad

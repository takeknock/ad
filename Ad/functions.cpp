#include <iostream>s

#include "functions.h"


namespace ad {
    void dfs(std::shared_ptr<ComputationalGraph> tree)
    {
        tree->setDerivative(0.0);
        if (tree->isLeaf()) {
            std::cout << "This node is a leaf!!!" << std::endl;
        }
        else
        {
            std::shared_ptr<ComputationalGraph> q = tree;
            if (q->getLeft()->getDfsp() == nullptr)
            {
                std::cout << "LEFT" << std::endl;
                q->getLeft()->setDfsp(tree);
                dfs(q->getDfsp());
            }
            if (q->getRight()->getDfsp() == nullptr)
            {
                std::cout << "RIGHT" << std::endl;
                q->getRight()->setDfsp(tree);
                dfs(q->getRight());
            }
        }


    }
    void rdfs(std::shared_ptr<ComputationalGraph> tree)
    {

    }

} // namespace ad

#pragma once

namespace ad {
    class IOperator {
    public:
        EXPORT_API virtual double diff() = 0;

        virtual ~IOperator() {};
    };

}

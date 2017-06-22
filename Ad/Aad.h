#pragma once

// std include
#include <memory>

// own include
#include "Ad/fwd.h"
#include "Ad/ComputationalGraph.h"
#include "Ad/operators.h"

namespace ad {
    class Aad {
    public:
        // constructors
        EXPORT_API explicit Aad();
        EXPORT_API explicit Aad(double value);
        EXPORT_API Aad(Aad& other);
        EXPORT_API Aad(Aad&& other);
        EXPORT_API Aad(std::shared_ptr<ComputationalGraph> tree);

        // operator equals
        EXPORT_API Aad& operator =(const Aad& other);
        EXPORT_API Aad& operator =(Aad&& other);

        // unary operators
        //Aad& operator+=(const Aad& rhs);
        //Aad& operator-=(const Aad& rhs);
        //Aad& operator*=(const Aad& rhs);
        //Aad& operator/=(const Aad& rhs);

        //EXPORT_API Aad& operator +(const Aad& rhs);
        //EXPORT_API Aad& operator -(const Aad& rhs);
        //EXPORT_API Aad& operator *(const Aad& rhs);
        //EXPORT_API Aad& operator /(const Aad& rhs);

        //// unary operators with double
        //Aad& operator+=(double x);
        //Aad& operator-=(double x);
        //Aad& operator*=(double x);
        //Aad& operator/=(double x);

        //EXPORT_API Aad& operator +(double x);
        //EXPORT_API Aad& operator -(double x);
        //EXPORT_API Aad& operator *(double x);
        //EXPORT_API Aad& operator /(double x);


        // methods
        EXPORT_API const double value() const;
        EXPORT_API const double getDerivative(const Aad& from) const;
        std::shared_ptr<ComputationalGraph> tree() const;

        EXPORT_API void diff();

        EXPORT_API ~Aad() {}

    private:
        IOperator _op;
        double _value;
        double _derivative;
        std::shared_ptr<ComputationalGraph> _tree;
    };
} // namespace ad

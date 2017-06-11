#pragma once
#include "fwd.h"
#include "Ad/ComputationalGraph.h"

namespace ad
{
    class Aad {
    public:
        EXPORT_API Aad();
        EXPORT_API Aad(double x);

        EXPORT_API Aad(const Aad& other);
        EXPORT_API Aad(Aad&& other);

        const Aad& operator =(const Aad& other) const;
        const Aad& operator =(Aad&& other) const;

        const Aad& operator +(const Aad& rhs) const;
        const Aad& operator -(const Aad& rhs) const;
        const Aad& operator *(const Aad& rhs) const;
        const Aad& operator /(const Aad& rhs) const;

        const Aad& operator+=(const Aad& rhs) const;
        const Aad& operator-=(const Aad& rhs) const;
        const Aad& operator*=(const Aad& rhs) const;
        const Aad& operator/=(const Aad& rhs) const;

    private:
        double _value;
        double _div;
        ComputationalGraph _tree;
    };
}

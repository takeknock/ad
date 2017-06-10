#pragma once
#include "Ad/ComputationalGraph.h"

namespace ad
{
    class Aad {
    public:
        Aad();

        Aad(Aad& rhs);
        Aad(Aad&& rhs);

        const Aad& operator =(const Aad& rhs) const;
        const Aad& operator +(const Aad& rhs) const;
        const Aad& operator -(const Aad& rhs) const;
        const Aad& operator *(const Aad& rhs) const;
        const Aad& operator /(const Aad& rhs) const;

        const Aad& operator+=(const Aad& rhs) const;
        const Aad& operator-=(const Aad& rhs) const;
        const Aad& operator*=(const Aad& rhs) const;
        const Aad& operator/=(const Aad& rhs) const;


        ComputationalGraph _tree;
    };
}

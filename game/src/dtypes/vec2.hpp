#pragma once
#include <type_traits>


template <typename T> struct Vec2
{
    T x;
    T y;
    using VT = Vec2<T>;

    bool operator == (const VT& o) const
    {
        return x == o.x && y == o.y;
    }

    VT& operator + () const
    {
        return VT{ x, y };
    }

    VT operator + (const VT& o) const
    {
        return VT{ x + o.x, y + o.y };
    }

    VT operator + (const T& o) const
    {
        return VT{ x + o, y + o };
    }
 
    VT& operator += (const VT& o)
    {
        x += o.x;
        y += o.y;
        return *this;
    }
    VT& operator += (const T& o)
    {
        x += o;
        y += o;
        return *this;
    }
    
    VT operator - () const
    {
        return VT{ -x, -y };
    }
    VT operator - (const VT& o) const
    {
        return VT{ x - o.x, y - o.y };
    }
    VT operator - (const T& o) const
    {
        return VT{ x - o, y - o };
    }
    VT& operator -= (const VT& o)
    {
        x -= o.x;
        y -= o.y;
        return (*this);
    }
    VT& operator -= (const T& o)
    {
        x -= o;
        y -= o;
        return *this;
    }

    VT operator/(const VT& o)
    {
        return VT{ x / o.x, y / o.y };
    }
    VT operator/(const T& o)
    {
        return VT{ x / o, y / o };
    }
};


using V2f32 = Vec2<float_t>;
using V2f64 = Vec2<double_t>;
using V2i32 = Vec2<int32_t>;
using V2i64 = Vec2<int64_t>;

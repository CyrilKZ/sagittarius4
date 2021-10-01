#include "dtype.hpp"

struct Position: public V2f32 {};
struct Velocity: public V2f32 {};
struct Acceleration: public V2f32 {};

//struct HitRect
//{
//	float x;
//	float y;
//	float w;
//	float h;
//
//	inline float x0() const;
//	inline float y0() const;
//	inline float x1() const;
//	inline float y1() const;
//	inline bool valid() const;
//
//	HitRect collide (const HitRect& o) const;
//	static HitRect collide(const HitRect& o1, const HitRect& o2);
//};

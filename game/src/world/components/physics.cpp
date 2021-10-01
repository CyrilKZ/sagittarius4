#include "physics.h"
#include <algorithm>

//inline float HitRect::x0() const
//{
//	return x;
//}
//
//inline float HitRect::x1() const
//{
//	return x + w;
//}
//
//inline float HitRect::y0() const
//{
//	return w;
//}
//
//inline float HitRect::y1() const
//{
//	return w + h;
//}
//
//HitRect HitRect::collide(const HitRect& o1, const HitRect& o2)
//{
//	auto x0 = std::max(o1.x0(), o2.x0());
//	auto x1 = std::min(o1.x1(), o2.x1());
//	auto y0 = std::max(o1.y0(), o2.y0());
//	auto y1 = std::min(o1.y1(), o2.y1());
//	return HitRect{ x0, y0, x1 - x0, y1 - y0 };
//}
//
//HitRect HitRect::collide(const HitRect& o) const
//{
//	return HitRect::collide(*this, o);
//}
//
//inline bool HitRect::valid() const
//{
//	return w > 0 && h > 0;
//}

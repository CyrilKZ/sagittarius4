#include "../dtype.hpp"

struct Fleet
{
    // 玩家
    UID player;

    // 生命值
    uint32 health;

    // 规模
    uint32 shipcount;

    // 最高速度
    inline V2f32 vmax() const;

    // 攻击力
    inline uint32 firepower() const;

    // 碰撞体积
    inline float radius() const;

    // 视野范围
    inline float vision() const;
};

#ifndef PLATFORM_H
#define PLATFORM_H

#include "bn_fixed.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_items_platform.h"

namespace any {

class platform {
public:
    platform(bn::fixed x, bn::fixed y) :
        _x(x),
        _y(y),
        _sprite(bn::sprite_items::platform.create_sprite(x, y))
    {
        _sprite.set_z_order(-1);
        _sprite.set_bg_priority(0);
    }

        platform() : 
        _x(0), _y(0), 
        _sprite(bn::sprite_items::platform.create_sprite(240, 160)) {
            _sprite.set_z_order(-1);
            _sprite.set_bg_priority(0);
        }
        void set_position(bn::fixed x, bn::fixed y) {
        _x = x;
        _y = y;
        _sprite.set_position(x, y); // This physically moves the sprite on the GBA screen
    }

    bn::fixed x() const { return _x; }
    bn::fixed y() const { return _y; }

private:
    bn::fixed _x;
    bn::fixed _y;
    bn::sprite_ptr _sprite;
};
}
#endif
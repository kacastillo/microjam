#include "black_hole.h"

#include "bn_sprite_items_black_hole.h"

// All game functions/classes/variables/constants scoped to the namespace
namespace sno
{

    /**
     * black_hole constructor
     *
     * @param position the location of the black hole
     */
    black_hole::black_hole(bn::fixed_point position)
        : _sprite(bn::sprite_items::black_hole.create_sprite(position)),
          _position(position),
          // this should loop through all 8 frames of the black_hole.bmp
          _sprite_action(bn::create_sprite_animate_action_forever(
              _sprite, 1, //change 1 to change the speed of the rotation 1,2,4 or 8
              bn::sprite_items::black_hole.tiles_item(),
              0, 1, 2, 3, 4, 5, 6, 7))
    {
    }

    /**
     * Gets the current position of the black hole.
     *
     * @return the black hole's position as a fixed_point
     */
    bn::fixed_point black_hole::position() const
    {
        return _position;
    }
    // this declares the update method on our black hole
    void black_hole::update()
    {
        _sprite_action.update();
    }
}

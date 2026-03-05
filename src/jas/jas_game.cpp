#include "jas_game.h"

#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_animate_actions.h"

#include "mj/mj_game_list.h"


namespace
{
    constexpr bn::string_view code_credits[] = { "Aaron, Jamison, Seadrah" };
    constexpr bn::string_view graphics_credits[] = { "" };
    constexpr bn::string_view sfx_credits[] = {""};
    constexpr bn::string_view music_credits[] = {""};
}

// Macros used to add game to game list
// MJ_GAME_LIST_ADD(aub::aub_test_game) // The class of the game is used here
MJ_GAME_LIST_ADD_CODE_CREDITS(code_credits)
MJ_GAME_LIST_ADD_GRAPHICS_CREDITS(graphics_credits)
MJ_GAME_LIST_ADD_MUSIC_CREDITS(music_credits)
MJ_GAME_LIST_ADD_SFX_CREDITS(sfx_credits)

namespace jas {
  /**
 * Constructor for an instance of a jas_game
 * 
 * First item in the initializer list MUST be a call to the superclass, mj::game with the identifier for the microgame.
 * 
 * @param completed_games how many microgames the player has completed so far
 * @param data shared information, such as a rng and number of frames left in the microgame
 */
jas_game::aub_test_game([[maybe_unused]] int completed_games, [[maybe_unused]] const mj::game_data& data) :
    mj::game("aub"),
    _player(player({20, 0}, 2))
    {}

/**
 * The instructions given to the player at the beginning of the microgame.
 * 
 * Must be <= 16 characters long
 */
bn::string<16> jas_game::title() const {
    return "Land the space-ship.";
}

}

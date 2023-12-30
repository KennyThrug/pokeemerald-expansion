#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasMoveEffectSelf(MOVE_RAPID_SPIN, MOVE_EFFECT_RAPIDSPIN) == TRUE);
    #if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
        ASSUME(MoveHasMoveEffectSelf(MOVE_RAPID_SPIN, MOVE_EFFECT_SPD_PLUS_1) == TRUE);
    #endif
}

SINGLE_BATTLE_TEST("Rapin Spin blows away Wrap, hazards and raises Speed (Gen 8+)")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WRAP); }
        TURN { MOVE(opponent, MOVE_STEALTH_ROCK); MOVE(player, MOVE_RAPID_SPIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAPID_SPIN, player);
        MESSAGE("Wobbuffet got free of Foe Wobbuffet's Wrap!");
        MESSAGE("Wobbuffet blew away Stealth Rock!");
        #if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Wobbuffet's Speed rose!");
        #endif
    }
}


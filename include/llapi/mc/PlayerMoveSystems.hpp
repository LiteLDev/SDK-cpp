/**
 * @file  PlayerMoveSystems.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerMoveSystems.
 *
 */
class PlayerMoveSystems {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVESYSTEMS
public:
    class PlayerMoveSystems& operator=(class PlayerMoveSystems const &) = delete;
    PlayerMoveSystems(class PlayerMoveSystems const &) = delete;
    PlayerMoveSystems() = delete;
#endif

public:
    /**
     * @symbol ?createLocalPlayerPreMoveJumpSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   314905850
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveJumpSystem();
    /**
     * @symbol ?createPlayerPostMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -270488886
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

};
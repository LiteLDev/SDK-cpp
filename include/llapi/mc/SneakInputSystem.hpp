/**
 * @file  SneakInputSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SneakInputSystem.
 *
 */
class SneakInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKINPUTSYSTEM
public:
    class SneakInputSystem& operator=(class SneakInputSystem const &) = delete;
    SneakInputSystem(class SneakInputSystem const &) = delete;
    SneakInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSneakInputSystem@SneakInputSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1434023532
     */
    MCAPI static struct TickingSystemWithInfo createSneakInputSystem();

};
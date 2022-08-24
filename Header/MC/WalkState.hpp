/**
 * @file  WalkState.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WalkState.
 *
 */
class WalkState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALKSTATE
public:
    class WalkState& operator=(class WalkState const &) = delete;
    WalkState(class WalkState const &) = delete;
    WalkState() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~WalkState();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?tick@WalkState@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?start@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WALKSTATE
#endif

};
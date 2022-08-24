/**
 * @file  PetSleepWithOwnerState.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PetSleepWithOwnerState.
 *
 */
class PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PETSLEEPWITHOWNERSTATE
public:
    class PetSleepWithOwnerState& operator=(class PetSleepWithOwnerState const &) = delete;
    PetSleepWithOwnerState(class PetSleepWithOwnerState const &) = delete;
    PetSleepWithOwnerState() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PETSLEEPWITHOWNERSTATE
    /**
     * @note   Virtual function table index: -1
     * @symbol ?start@PetSleepWithOwnerState@@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     */
    MCVAPI void stop();
#endif

//protected:
    /**
     * @symbol ?dampenSpeed@PetSleepWithOwnerState@@IEAAXXZ
     */
    MCAPI void dampenSpeed();

protected:

};
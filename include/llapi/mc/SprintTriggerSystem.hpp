/**
 * @file  SprintTriggerSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SprintTriggerSystem.
 *
 */
class SprintTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRINTTRIGGERSYSTEM
public:
    class SprintTriggerSystem& operator=(class SprintTriggerSystem const &) = delete;
    SprintTriggerSystem(class SprintTriggerSystem const &) = delete;
    SprintTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@SprintTriggerSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1111652044
     */
    MCAPI static struct TickingSystemWithInfo create();

};
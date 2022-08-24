/**
 * @file  GlideMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GlideMoveControl.
 *
 */
class GlideMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVECONTROL
public:
    class GlideMoveControl& operator=(class GlideMoveControl const &) = delete;
    GlideMoveControl(class GlideMoveControl const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~GlideMoveControl();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?initializeInternal@GlideMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tick@GlideMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDEMOVECONTROL
#endif
    /**
     * @symbol ??0GlideMoveControl@@QEAA@XZ
     */
    MCAPI GlideMoveControl();

};
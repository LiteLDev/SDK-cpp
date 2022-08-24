/**
 * @file  ControlledByPlayerGoal.hpp
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
 * @brief MC class ControlledByPlayerGoal.
 *
 */
class ControlledByPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYPLAYERGOAL
public:
    class ControlledByPlayerGoal& operator=(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ControlledByPlayerGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@ControlledByPlayerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@ControlledByPlayerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@ControlledByPlayerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@ControlledByPlayerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@ControlledByPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTROLLEDBYPLAYERGOAL
#endif
    /**
     * @symbol ??0ControlledByPlayerGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ControlledByPlayerGoal(class Mob &);

};
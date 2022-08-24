/**
 * @file  FindMountGoal.hpp
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
 * @brief MC class FindMountGoal.
 *
 */
class FindMountGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~FindMountGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@FindMountGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@FindMountGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@FindMountGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@FindMountGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@FindMountGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@FindMountGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINDMOUNTGOAL
#endif
    /**
     * @symbol ??0FindMountGoal@@QEAA@AEAVMob@@MH_N1MH@Z
     */
    MCAPI FindMountGoal(class Mob &, float, int, bool, bool, float, int);
    /**
     * @symbol ?isInMountRange@FindMountGoal@@QEAA_NXZ
     */
    MCAPI bool isInMountRange();

};
/**
 * @file  WitherRandomAttackPosGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherRandomAttackPosGoal.
 *
 */
class WitherRandomAttackPosGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERRANDOMATTACKPOSGOAL
public:
    class WitherRandomAttackPosGoal& operator=(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~WitherRandomAttackPosGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@WitherRandomAttackPosGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@WitherRandomAttackPosGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@WitherRandomAttackPosGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@WitherRandomAttackPosGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol 
     */
    virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WITHERRANDOMATTACKPOSGOAL
#endif
    /**
     * @symbol ??0WitherRandomAttackPosGoal@@QEAA@AEAVMob@@MHH@Z
     */
    MCAPI WitherRandomAttackPosGoal(class Mob &, float, int, int);

};
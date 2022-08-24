/**
 * @file  KnockbackRoarGoal.hpp
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
 * @brief MC class KnockbackRoarGoal.
 *
 */
class KnockbackRoarGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KNOCKBACKROARGOAL
public:
    class KnockbackRoarGoal& operator=(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~KnockbackRoarGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@KnockbackRoarGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@KnockbackRoarGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@KnockbackRoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KNOCKBACKROARGOAL
#endif
    /**
     * @symbol ??0KnockbackRoarGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI KnockbackRoarGoal(class Mob &);

};
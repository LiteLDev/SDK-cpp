/**
 * @file  RamAttackGoal.hpp
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
 * @brief MC class RamAttackGoal.
 *
 */
class RamAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOAL
public:
    class RamAttackGoal& operator=(class RamAttackGoal const &) = delete;
    RamAttackGoal(class RamAttackGoal const &) = delete;
    RamAttackGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RamAttackGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@RamAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@RamAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@RamAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@RamAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@RamAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@RamAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAMATTACKGOAL
#endif
    /**
     * @symbol ??0RamAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RamAttackGoal(class Mob &);

//protected:
    /**
     * @symbol ?_initiateRamAttack@RamAttackGoal@@IEAA_NXZ
     */
    MCAPI bool _initiateRamAttack();

//private:
    /**
     * @symbol ?_hasChargePath@RamAttackGoal@@AEAA_NXZ
     */
    MCAPI bool _hasChargePath();
    /**
     * @symbol ?_pathablePos@RamAttackGoal@@AEAA_NAEBVBlockSource@@VBlockPos@@@Z
     */
    MCAPI bool _pathablePos(class BlockSource const &, class BlockPos);
    /**
     * @symbol ?_resetCooldown@RamAttackGoal@@AEAAXXZ
     */
    MCAPI void _resetCooldown();
    /**
     * @symbol ?_tryKnockbackTarget@RamAttackGoal@@AEAAXXZ
     */
    MCAPI void _tryKnockbackTarget();

protected:

private:

};
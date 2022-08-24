/**
 * @file  MoveToVillageGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToVillageGoal.
 *
 */
class MoveToVillageGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOVILLAGEGOAL
public:
    class MoveToVillageGoal& operator=(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~MoveToVillageGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@MoveToVillageGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@MoveToVillageGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@MoveToVillageGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
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
    /**
     * @note   Virtual function table index: 11
     * @symbol ?isValidTarget@MoveToVillageGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?_moveToBlock@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @note   Virtual function table index: 17
     * @symbol ?_selectRandomPosInVillage@MoveToVillageGoal@@MEAA?AVBlockPos@@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOVILLAGEGOAL
#endif
    /**
     * @symbol ??0MoveToVillageGoal@@QEAA@AEAVMob@@MMMH@Z
     */
    MCAPI MoveToVillageGoal(class Mob &, float, float, float, int);

//protected:
    /**
     * @symbol ?_tryGetCurrentVillage@MoveToVillageGoal@@IEAA?AV?$shared_ptr@VVillage@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();

protected:

};
/**
 * @file  OwnerHurtByTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerHurtByTargetGoal.
 *
 */
class OwnerHurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    class OwnerHurtByTargetGoal& operator=(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~OwnerHurtByTargetGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@OwnerHurtByTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@OwnerHurtByTargetGoal@@UEAAXXZ
     */
    virtual void start();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OWNERHURTBYTARGETGOAL
#endif
    /**
     * @symbol ??0OwnerHurtByTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
     */
    MCAPI OwnerHurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};
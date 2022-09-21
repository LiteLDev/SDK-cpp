/**
 * @file  MC/LeapAtTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LeapAtTargetGoal.
 *
 */
class LeapAtTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEAPATTARGETGOAL
public:
    class LeapAtTargetGoal& operator=(class LeapAtTargetGoal const &) = delete;
    LeapAtTargetGoal(class LeapAtTargetGoal const &) = delete;
    LeapAtTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LeapAtTargetGoal();
    /**
     * @hash   1847610017
     * @vftbl  1
     * @symbol ?canUse@LeapAtTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -2003374353
     * @vftbl  2
     * @symbol ?canContinueToUse@LeapAtTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -657913798
     * @vftbl  4
     * @symbol ?start@LeapAtTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   122491167
     * @vftbl  7
     * @symbol ?appendDebugInfo@LeapAtTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1445343337
     * @symbol ??0LeapAtTargetGoal@@QEAA@AEAVMob@@M_N1@Z
     */
    MCAPI LeapAtTargetGoal(class Mob &, float, bool, bool);

};
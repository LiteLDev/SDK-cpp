/**
 * @file  FollowTargetCaptainGoal.hpp
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
 * @brief MC class FollowTargetCaptainGoal.
 *
 */
class FollowTargetCaptainGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWTARGETCAPTAINGOAL
public:
    class FollowTargetCaptainGoal& operator=(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~FollowTargetCaptainGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@FollowTargetCaptainGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@FollowTargetCaptainGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@FollowTargetCaptainGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOLLOWTARGETCAPTAINGOAL
#endif
    /**
     * @symbol ??0FollowTargetCaptainGoal@@QEAA@AEAVMob@@MMM@Z
     */
    MCAPI FollowTargetCaptainGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol ?_determineMovePos@FollowTargetCaptainGoal@@AEAAXXZ
     */
    MCAPI void _determineMovePos();

private:

};
/**
 * @file  ScaredGoal.hpp
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
 * @brief MC class ScaredGoal.
 *
 */
class ScaredGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAREDGOAL
public:
    class ScaredGoal& operator=(class ScaredGoal const &) = delete;
    ScaredGoal(class ScaredGoal const &) = delete;
    ScaredGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   981796445
     */
    virtual ~ScaredGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@ScaredGoal@@UEAA_NXZ
     * @hash   -1894066195
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@ScaredGoal@@UEAA_NXZ
     * @hash   -1421211701
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@ScaredGoal@@UEAAXXZ
     * @hash   -951757834
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@ScaredGoal@@UEAAXXZ
     * @hash   -637700170
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@ScaredGoal@@UEAAXXZ
     * @hash   -1157076095
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@ScaredGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   110839267
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0ScaredGoal@@QEAA@AEAVMob@@H@Z
     * @hash   1943567801
     */
    MCAPI ScaredGoal(class Mob &, int);

};
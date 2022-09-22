/**
 * @file  MC/SitGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SitGoal.
 *
 */
class SitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITGOAL
public:
    class SitGoal& operator=(class SitGoal const &) = delete;
    SitGoal(class SitGoal const &) = delete;
    SitGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SitGoal();
    /**
     * @hash   468025727
     * @vftbl  1
     * @symbol ?canUse@SitGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   840742840
     * @vftbl  4
     * @symbol ?start@SitGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   325549816
     * @vftbl  5
     * @symbol ?stop@SitGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   271002801
     * @vftbl  7
     * @symbol ?appendDebugInfo@SitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1561861412
     * @symbol ??0SitGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SitGoal(class Mob &);

};
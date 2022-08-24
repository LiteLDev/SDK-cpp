/**
 * @file  RestrictSunGoal.hpp
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
 * @brief MC class RestrictSunGoal.
 *
 */
class RestrictSunGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESTRICTSUNGOAL
public:
    class RestrictSunGoal& operator=(class RestrictSunGoal const &) = delete;
    RestrictSunGoal(class RestrictSunGoal const &) = delete;
    RestrictSunGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RestrictSunGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@RestrictSunGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@RestrictSunGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@RestrictSunGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@RestrictSunGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESTRICTSUNGOAL
#endif
    /**
     * @symbol ??0RestrictSunGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RestrictSunGoal(class Mob &);

};
/**
 * @file  RemoveOnHitSubcomponent.hpp
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
 * @brief MC class RemoveOnHitSubcomponent.
 *
 */
class RemoveOnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEONHITSUBCOMPONENT
public:
    class RemoveOnHitSubcomponent& operator=(class RemoveOnHitSubcomponent const &) = delete;
    RemoveOnHitSubcomponent(class RemoveOnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RemoveOnHitSubcomponent();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?doOnHitEffect@RemoveOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getName@RemoveOnHitSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEONHITSUBCOMPONENT
    /**
     * @note   Virtual function table index: -1
     * @symbol ?readfromJSON@RemoveOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?writetoJSON@RemoveOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @symbol ??0RemoveOnHitSubcomponent@@QEAA@XZ
     */
    MCAPI RemoveOnHitSubcomponent();

};
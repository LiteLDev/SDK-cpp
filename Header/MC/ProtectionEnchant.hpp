/**
 * @file  ProtectionEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProtectionEnchant.
 *
 */
class ProtectionEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROTECTIONENCHANT
public:
    class ProtectionEnchant& operator=(class ProtectionEnchant const &) = delete;
    ProtectionEnchant(class ProtectionEnchant const &) = delete;
    ProtectionEnchant() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ProtectionEnchant();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getMinCost@ProtectionEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getMaxCost@ProtectionEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getMaxLevel@ProtectionEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getDamageProtection@ProtectionEnchant@@UEBAHHAEBVActorDamageSource@@@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?doPostHurt@ProtectionEnchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
     */
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /**
     * @note   Virtual function table index: 10
     * @symbol 
     */
    virtual void __unk_vfn_10();
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 13
     * @symbol 
     */
    virtual void __unk_vfn_13();
    /**
     * @note   Virtual function table index: 14
     * @symbol ?_isValidEnchantmentTypeForCategory@ProtectionEnchant@@EEBA_NW4Type@Enchant@@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROTECTIONENCHANT
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isProtectionEnchant@ProtectionEnchant@@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const;
#endif
    /**
     * @symbol ??0ProtectionEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI ProtectionEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
MCAPI static float const THORNS_CHANCE_PER_LEVEL;
MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};
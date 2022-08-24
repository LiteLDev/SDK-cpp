/**
 * @file  CrossbowItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrossbowItem.
 *
 */
class CrossbowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWITEM
public:
    class CrossbowItem& operator=(class CrossbowItem const &) = delete;
    CrossbowItem(class CrossbowItem const &) = delete;
    CrossbowItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CrossbowItem();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getMaxUseDuration@CrossbowItem@@UEBAHPEBVItemStack@@@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual void __unk_vfn_14();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 52
     * @symbol 
     */
    virtual void __unk_vfn_52();
    /**
     * @note   Virtual function table index: 54
     * @symbol 
     */
    virtual void __unk_vfn_54();
    /**
     * @note   Virtual function table index: 63
     * @symbol ?getEnchantSlot@CrossbowItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @note   Virtual function table index: 67
     * @symbol 
     */
    virtual void __unk_vfn_67();
    /**
     * @note   Virtual function table index: 71
     * @symbol 
     */
    virtual void __unk_vfn_71();
    /**
     * @note   Virtual function table index: 72
     * @symbol 
     */
    virtual void __unk_vfn_72();
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 76
     * @symbol 
     */
    virtual void __unk_vfn_76();
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 81
     * @symbol 
     */
    virtual void __unk_vfn_81();
    /**
     * @note   Virtual function table index: 85
     * @symbol ?use@CrossbowItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @note   Virtual function table index: 87
     * @symbol ?useTimeDepleted@CrossbowItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @note   Virtual function table index: 88
     * @symbol ?releaseUsing@CrossbowItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @note   Virtual function table index: 114
     * @symbol ?enchantProjectile@CrossbowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @note   Virtual function table index: 120
     * @symbol ?getAnimationFrameFor@CrossbowItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @note   Virtual function table index: 123
     * @symbol ?getIcon@CrossbowItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @note   Virtual function table index: 125
     * @symbol ?setIcon@CrossbowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @note   Virtual function table index: 128
     * @symbol ?canBeCharged@CrossbowItem@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @note   Virtual function table index: 130
     * @symbol ?playSoundIncrementally@CrossbowItem@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CROSSBOWITEM
#endif
    /**
     * @symbol ??0CrossbowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI CrossbowItem(std::string const &, int);

//private:
    /**
     * @symbol ?_getShootDir@CrossbowItem@@AEBA?AVVec3@@AEBVPlayer@@M@Z
     */
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    /**
     * @symbol ?_shootArrow@CrossbowItem@@AEBAXAEBVItemInstance@@0AEAVPlayer@@@Z
     */
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    /**
     * @symbol ?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z
     */
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;

private:
MCAPI static int const DEFAULT_USE_DURATION;

};
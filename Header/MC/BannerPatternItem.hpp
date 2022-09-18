/**
 * @file  BannerPatternItem.hpp
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
 * @brief MC class BannerPatternItem.
 *
 */
class BannerPatternItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERPATTERNITEM
public:
    class BannerPatternItem& operator=(class BannerPatternItem const &) = delete;
    BannerPatternItem(class BannerPatternItem const &) = delete;
    BannerPatternItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1350921147
     */
    virtual ~BannerPatternItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @hash   -226342399
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  53
     * @symbol ?getPatternIndex@BannerPatternItem@@UEBAHXZ
     * @hash   -1139974532
     */
    virtual int getPatternIndex() const;
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@BannerPatternItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   197896168
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  96
     * @symbol ?buildDescriptionId@BannerPatternItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   1474677619
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BANNERPATTERNITEM
    /**
     * @symbol ?isPattern@BannerPatternItem@@UEBA_NXZ
     * @hash   -399691449
     */
    MCVAPI bool isPattern() const;
#endif
    /**
     * @symbol ??0BannerPatternItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4Type@0@@Z
     * @hash   -132234937
     */
    MCAPI BannerPatternItem(std::string const &, int, enum class BannerPatternItem::Type);

};
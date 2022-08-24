/**
 * @file  InternalItemDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalItemDescriptor.
 *
 */
class InternalItemDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALITEMDESCRIPTOR
public:
    class InternalItemDescriptor& operator=(class InternalItemDescriptor const &) = delete;
    InternalItemDescriptor(class InternalItemDescriptor const &) = delete;
    InternalItemDescriptor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?clone@InternalItemDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?sameItem@InternalItemDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getFullName@InternalItemDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getItem@InternalItemDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?toMap@InternalItemDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?save@InternalItemDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getType@InternalItemDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     */
    virtual enum ItemDescriptor::InternalType getType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALITEMDESCRIPTOR
#endif

};
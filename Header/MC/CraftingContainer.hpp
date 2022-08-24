/**
 * @file  CraftingContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingContainer.
 *
 */
class CraftingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTAINER
public:
    class CraftingContainer& operator=(class CraftingContainer const &) = delete;
    CraftingContainer(class CraftingContainer const &) = delete;
    CraftingContainer() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CraftingContainer();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getItem@CraftingContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?setItem@CraftingContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?getContainerSize@CraftingContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @note   Virtual function table index: 15
     * @symbol ?getMaxStackSize@CraftingContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @note   Virtual function table index: 16
     * @symbol ?startOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @note   Virtual function table index: 22
     * @symbol 
     */
    virtual void __unk_vfn_22();
    /**
     * @note   Virtual function table index: 23
     * @symbol 
     */
    virtual void __unk_vfn_23();
    /**
     * @note   Virtual function table index: 24
     * @symbol ?setContainerChanged@CraftingContainer@@UEAAXH@Z
     */
    virtual void setContainerChanged(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTINGCONTAINER
#endif
    /**
     * @symbol ??0CraftingContainer@@QEAA@HH@Z
     */
    MCAPI CraftingContainer(int, int);
    /**
     * @symbol ?getItem@CraftingContainer@@QEBAAEBVItemStack@@HH@Z
     */
    MCAPI class ItemStack const & getItem(int, int) const;

};
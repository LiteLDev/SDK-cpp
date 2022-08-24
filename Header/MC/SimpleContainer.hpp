/**
 * @file  SimpleContainer.hpp
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
 * @brief MC class SimpleContainer.
 *
 */
class SimpleContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLECONTAINER
public:
    class SimpleContainer& operator=(class SimpleContainer const &) = delete;
    SimpleContainer(class SimpleContainer const &) = delete;
    SimpleContainer() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SimpleContainer();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @note   Virtual function table index: 15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @note   Virtual function table index: 16
     * @symbol ?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLECONTAINER
#endif
    /**
     * @symbol ??0SimpleContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
     */
    MCAPI SimpleContainer(std::string const &, bool, int, enum ContainerType);

};
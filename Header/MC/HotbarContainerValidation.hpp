/**
 * @file  HotbarContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HotbarContainerValidation.
 *
 */
class HotbarContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOTBARCONTAINERVALIDATION
public:
    class HotbarContainerValidation& operator=(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~HotbarContainerValidation();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol 
     */
    virtual void __unk_vfn_4();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?isItemAllowedToRemove@HotbarContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getContainerSize@HotbarContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOTBARCONTAINERVALIDATION
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canItemMoveToContainer@HotbarContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
#endif

};
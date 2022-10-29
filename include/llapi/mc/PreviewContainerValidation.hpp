/**
 * @file  PreviewContainerValidation.hpp
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
 * @brief MC class PreviewContainerValidation.
 *
 */
class PreviewContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREVIEWCONTAINERVALIDATION
public:
    class PreviewContainerValidation& operator=(class PreviewContainerValidation const &) = delete;
    PreviewContainerValidation(class PreviewContainerValidation const &) = delete;
    PreviewContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   105958332
     */
    virtual ~PreviewContainerValidation();
    /**
     * @vftbl  1
     * @hash   -1355585151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1354661630
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   -2038760099
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1351891067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   1625824057
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -1450780531
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PREVIEWCONTAINERVALIDATION
    /**
     * @symbol ?isItemAllowedInSlot@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -375648592
     */
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @symbol ?isItemAllowedToAdd@PreviewContainerValidation@@UEBA_NAEBVItemStack@@@Z
     * @hash   2106780305
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @symbol ?isValidSlotForContainer@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1530886314
     */
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
#endif

};
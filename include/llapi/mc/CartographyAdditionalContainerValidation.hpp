/**
 * @file  MC/CartographyAdditionalContainerValidation.hpp
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
 * @brief MC class CartographyAdditionalContainerValidation.
 *
 */
class CartographyAdditionalContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARTOGRAPHYADDITIONALCONTAINERVALIDATION
public:
    class CartographyAdditionalContainerValidation& operator=(class CartographyAdditionalContainerValidation const &) = delete;
    CartographyAdditionalContainerValidation(class CartographyAdditionalContainerValidation const &) = delete;
    CartographyAdditionalContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CartographyAdditionalContainerValidation();
    /**
     * @hash   -2032817683
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   -683594279
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@CartographyAdditionalContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   -1055585242
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   432034672
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   1650412756
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   1190522813
     * @vftbl  8
     * @symbol ?getContainerOffset@CartographyAdditionalContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @hash   571493367
     * @vftbl  9
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};
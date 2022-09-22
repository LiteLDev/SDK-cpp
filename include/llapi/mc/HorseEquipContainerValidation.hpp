/**
 * @file  MC/HorseEquipContainerValidation.hpp
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
 * @brief MC class HorseEquipContainerValidation.
 *
 */
class HorseEquipContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEEQUIPCONTAINERVALIDATION
public:
    class HorseEquipContainerValidation& operator=(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HorseEquipContainerValidation();
    /**
     * @hash   1637182171
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   441572299
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@HorseEquipContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   -1675510920
     * @vftbl  3
     * @symbol ?getAvailableSetCount@HorseEquipContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @hash   -792997562
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@HorseEquipContainerValidation@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @hash   817668127
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @hash   364345310
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   1582723394
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -506139959
     * @vftbl  9
     * @symbol ?getContainerSize@HorseEquipContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @hash   -1772422300
     * @symbol ??0HorseEquipContainerValidation@@QEAA@AEBVContainerScreenContext@@@Z
     */
    MCAPI HorseEquipContainerValidation(class ContainerScreenContext const &);

};
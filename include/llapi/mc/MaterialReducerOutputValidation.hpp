/**
 * @file  MaterialReducerOutputValidation.hpp
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
 * @brief MC class MaterialReducerOutputValidation.
 *
 */
class MaterialReducerOutputValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCEROUTPUTVALIDATION
public:
    class MaterialReducerOutputValidation& operator=(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   528990189
     */
    virtual ~MaterialReducerOutputValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   1392764515
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @hash   -1361872974
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   -273767216
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1359102411
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   297285990
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @hash   -1357255369
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@MaterialReducerOutputValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   -1232919997
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@MaterialReducerOutputValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   -793255263
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIALREDUCEROUTPUTVALIDATION
    /**
     * @symbol ?canDestroy@MaterialReducerOutputValidation@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -595406358
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
#endif

};
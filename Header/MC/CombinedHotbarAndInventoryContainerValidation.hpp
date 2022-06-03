// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CombinedHotbarAndInventoryContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBINEDHOTBARANDINVENTORYCONTAINERVALIDATION
public:
    class CombinedHotbarAndInventoryContainerValidation& operator=(class CombinedHotbarAndInventoryContainerValidation const &) = delete;
    CombinedHotbarAndInventoryContainerValidation(class CombinedHotbarAndInventoryContainerValidation const &) = delete;
    CombinedHotbarAndInventoryContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~CombinedHotbarAndInventoryContainerValidation();
    /*2*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /*
    inline bool canItemMoveToContainer(class ItemStackBase const & a0) const{
        bool (CombinedHotbarAndInventoryContainerValidation::*rv)(class ItemStackBase const &) const;
        *((void**)&rv) = dlsym("?canItemMoveToContainer@CombinedHotbarAndInventoryContainerValidation@@UEBA_NAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0));
    }
    */

protected:

private:

};
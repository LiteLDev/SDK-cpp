/**
 * @file  MC/CartographyContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CartographyContainerManagerModel.
 *
 */
class CartographyContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARTOGRAPHYCONTAINERMANAGERMODEL
public:
    class CartographyContainerManagerModel& operator=(class CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel(class CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CartographyContainerManagerModel();
    /**
     * @hash   369539484
     * @vftbl  6
     * @symbol ?getItemCopies@CartographyContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   657619699
     * @vftbl  7
     * @symbol ?setSlot@CartographyContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1222267292
     * @vftbl  8
     * @symbol ?getSlot@CartographyContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   1395574224
     * @vftbl  9
     * @symbol ?setData@CartographyContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1004434438
     * @vftbl  10
     * @symbol ?broadcastChanges@CartographyContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -830383782
     * @vftbl  16
     * @symbol ?isValid@CartographyContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -1921049149
     * @vftbl  17
     * @symbol ?_postInit@CartographyContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1859539662
     * @symbol ??0CartographyContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI CartographyContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};
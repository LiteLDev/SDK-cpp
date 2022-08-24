/**
 * @file  CompoundCreatorContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class CompoundCreatorContainerManagerModel.
 *
 */
class CompoundCreatorContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDCREATORCONTAINERMANAGERMODEL
public:
    class CompoundCreatorContainerManagerModel& operator=(class CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel(class CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CompoundCreatorContainerManagerModel();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getItemCopies@CompoundCreatorContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?setSlot@CompoundCreatorContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @note   Virtual function table index: 8
     * @symbol ?getSlot@CompoundCreatorContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?setData@CompoundCreatorContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @note   Virtual function table index: 10
     * @symbol ?broadcastChanges@CompoundCreatorContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @note   Virtual function table index: 16
     * @symbol ?isValid@CompoundCreatorContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?_postInit@CompoundCreatorContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDCREATORCONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0CompoundCreatorContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI CompoundCreatorContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};
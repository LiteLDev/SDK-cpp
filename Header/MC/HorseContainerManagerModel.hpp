/**
 * @file  HorseContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HorseContainerManagerModel.
 *
 */
class HorseContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSECONTAINERMANAGERMODEL
public:
    class HorseContainerManagerModel& operator=(class HorseContainerManagerModel const &) = delete;
    HorseContainerManagerModel(class HorseContainerManagerModel const &) = delete;
    HorseContainerManagerModel() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~HorseContainerManagerModel();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getItemCopies@HorseContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?setSlot@HorseContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @note   Virtual function table index: 8
     * @symbol ?getSlot@HorseContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @note   Virtual function table index: 17
     * @symbol ?_postInit@HorseContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSECONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0HorseContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     */
    MCAPI HorseContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID const &);

};
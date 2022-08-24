/**
 * @file  TradeContainerManagerModel.hpp
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
 * @brief MC class TradeContainerManagerModel.
 *
 */
class TradeContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADECONTAINERMANAGERMODEL
public:
    class TradeContainerManagerModel& operator=(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~TradeContainerManagerModel();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @note   Virtual function table index: 8
     * @symbol ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @note   Virtual function table index: 16
     * @symbol ?isValid@TradeContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADECONTAINERMANAGERMODEL
#endif
    /**
     * @symbol ??0TradeContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     */
    MCAPI TradeContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID const &);
    /**
     * @symbol ?getEntity@TradeContainerManagerModel@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getEntity() const;

};
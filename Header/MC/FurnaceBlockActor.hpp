/**
 * @file  FurnaceBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceBlockActor.
 *
 */
class FurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEBLOCKACTOR
public:
    class FurnaceBlockActor& operator=(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEBLOCKACTOR
    /**
     * @note   Virtual function table index: -1
     * @symbol ?_getUpdatePacket@FurnaceBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?_onUpdatePacket@FurnaceBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canPullOutItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canPushInItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?fixupOnLoad@FurnaceBlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainer@FurnaceBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainer@FurnaceBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainerSize@FurnaceBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getItem@FurnaceBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getMaxStackSize@FurnaceBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getName@FurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?load@FurnaceBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onCustomTagLoadDone@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onCustomTagLoadDone(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onMove@FurnaceBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onNeighborChanged@FurnaceBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?save@FurnaceBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?serverInitItemStackIds@FurnaceBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setItem@FurnaceBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tick@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ??1FurnaceBlockActor@@UEAA@XZ
     */
    MCVAPI ~FurnaceBlockActor();
#endif
    /**
     * @symbol ??0FurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI FurnaceBlockActor(class BlockPos const &);
    /**
     * @symbol ?checkForAlternativeFuelAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@AEBVItemStack@@@Z
     */
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    /**
     * @symbol ?checkForSmeltEverythingAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @symbol ?getLitDuration@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getLitDuration() const;
    /**
     * @symbol ?getLitTime@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getLitTime() const;
    /**
     * @symbol ?getStoredXP@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getStoredXP() const;
    /**
     * @symbol ?getTickCount@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getTickCount() const;
    /**
     * @symbol ?isEmptiedByHopper@FurnaceBlockActor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    /**
     * @symbol ?onFurnaceBlockRemoved@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    /**
     * @symbol ?setLitDuration@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setLitDuration(int);
    /**
     * @symbol ?setLitTime@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setLitTime(int);
    /**
     * @symbol ?setStoredXP@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setStoredXP(int);
    /**
     * @symbol ?setTickCount@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setTickCount(int);
    /**
     * @symbol ?storeXPRewardForRemovingWithHopper@FurnaceBlockActor@@QEAAXAEBVItemStackBase@@H@Z
     */
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    /**
     * @symbol ?withdrawStoredXPReward@FurnaceBlockActor@@QEAAHXZ
     */
    MCAPI int withdrawStoredXPReward();
MCAPI static int const BURN_INTERVAL;
MCAPI static float const DEFAULT_SMELTING_TIME;
    /**
     * @symbol ?getAvailableFuelSetCount@FurnaceBlockActor@@SAHHAEBVItemStackBase@@@Z
     */
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    /**
     * @symbol ?getBurnDuration@FurnaceBlockActor@@SAMAEBVItemStackBase@@M@Z
     */
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    /**
     * @symbol ?getXPRewardFromSmeltingItems@FurnaceBlockActor@@SAHAEBVItemStackBase@@H@Z
     */
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    /**
     * @symbol ?isItemAllowedInFuelSlot@FurnaceBlockActor@@SA_NHAEBVItemStackBase@@H@Z
     */
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

//protected:
    /**
     * @symbol ??0FurnaceBlockActor@@IEAA@W4BlockActorType@@AEBVBlockPos@@AEBVHashedString@@W4LevelSoundEvent@@W4ContainerType@@HAEBVBlock@@5@Z
     */
    MCAPI FurnaceBlockActor(enum BlockActorType, class BlockPos const &, class HashedString const &, enum LevelSoundEvent, enum ContainerType, int, class Block const &, class Block const &);

//private:
    /**
     * @symbol ?_refreshFurnaceBlockLitState@FurnaceBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    /**
     * @symbol ?burn@FurnaceBlockActor@@AEAAXAEBVRecipes@@@Z
     */
    MCAPI void burn(class Recipes const &);
    /**
     * @symbol ?canBurn@FurnaceBlockActor@@AEAA_NAEBVRecipes@@@Z
     */
    MCAPI bool canBurn(class Recipes const &);
    /**
     * @symbol ?_getXPRewardMultiplier@FurnaceBlockActor@@CAMAEBVItemStackBase@@@Z
     */
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    /**
     * @symbol ?_roundXPReward@FurnaceBlockActor@@CAHM@Z
     */
    MCAPI static int _roundXPReward(float);

protected:

private:
MCAPI static std::string const BURN_DURATION_KEY;
MCAPI static std::string const BURN_TIME_KEY;
MCAPI static std::string const COOK_TIME_KEY;
MCAPI static std::string const CUSTOM_NAME_KEY;
MCAPI static std::string const ITEMS_LIST_KEY;
MCAPI static std::string const LAST_FUEL_KEY;
MCAPI static std::string const SLOT_KEY;
MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
MCAPI static std::string const STORED_XP_KEY;

};
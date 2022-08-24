/**
 * @file  CauldronBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Potion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CauldronBlockActor.
 *
 */
class CauldronBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCKACTOR
public:
    class CauldronBlockActor& operator=(class CauldronBlockActor const &) = delete;
    CauldronBlockActor(class CauldronBlockActor const &) = delete;
    CauldronBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCKACTOR
    /**
     * @note   Virtual function table index: -1
     * @symbol ?_getUpdatePacket@CauldronBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?_onUpdatePacket@CauldronBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainer@CauldronBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainer@CauldronBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getContainerSize@CauldronBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getItem@CauldronBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getMaxStackSize@CauldronBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getName@CauldronBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?load@CauldronBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onChanged@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?save@CauldronBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?serverInitItemStackIds@CauldronBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setItem@CauldronBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?startOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stopOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tick@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0CauldronBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI CauldronBlockActor(class BlockPos const &);
    /**
     * @symbol ?getColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @symbol ?getCustomColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getCustomColor() const;
    /**
     * @symbol ?getMixDyeColor@CauldronBlockActor@@QEAA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getMixDyeColor();
    /**
     * @symbol ?getPotionColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getPotionColor() const;
    /**
     * @symbol ?getPotionType@CauldronBlockActor@@QEBA?AW4PotionType@Potion@@XZ
     */
    MCAPI enum Potion::PotionType getPotionType() const;
    /**
     * @symbol ?mixDyes@CauldronBlockActor@@QEAAXXZ
     */
    MCAPI void mixDyes();
    /**
     * @symbol ?setCustomColor@CauldronBlockActor@@QEAAXAEBVColor@mce@@@Z
     */
    MCAPI void setCustomColor(class mce::Color const &);
    /**
     * @symbol ?setPotionType@CauldronBlockActor@@QEAAXW4PotionType@Potion@@@Z
     */
    MCAPI void setPotionType(enum Potion::PotionType);
MCAPI static class mce::Color WATER_COLOR;

};
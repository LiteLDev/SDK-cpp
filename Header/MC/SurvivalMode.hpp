/**
 * @file  SurvivalMode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GameMode.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SurvivalMode.
 *
 */
class SurvivalMode : public GameMode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURVIVALMODE
public:
    class SurvivalMode& operator=(class SurvivalMode const &) = delete;
    SurvivalMode(class SurvivalMode const &) = delete;
    SurvivalMode() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SurvivalMode();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?startDestroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z
     */
    virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?destroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E@Z
     */
    virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /**
     * @note   Virtual function table index: 5
     * @symbol ?startBuildBlock@SurvivalMode@@UEAAXAEBVBlockPos@@E@Z
     */
    virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @note   Virtual function table index: 6
     * @symbol ?buildBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E_N@Z
     */
    virtual bool buildBlock(class BlockPos const &, unsigned char, bool);
    /**
     * @note   Virtual function table index: 9
     * @symbol ?tick@SurvivalMode@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 11
     * @symbol ?useItem@SurvivalMode@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool useItem(class ItemStack &);
    /**
     * @note   Virtual function table index: 12
     * @symbol ?useItemOn@SurvivalMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
     */
    virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /**
     * @note   Virtual function table index: 13
     * @symbol ?interact@SurvivalMode@@UEAA_NAEAVActor@@AEBVVec3@@@Z
     */
    virtual bool interact(class Actor &, class Vec3 const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?attack@SurvivalMode@@UEAA_NAEAVActor@@@Z
     */
    virtual bool attack(class Actor &);
    /**
     * @note   Virtual function table index: 16
     * @symbol ?setTrialMode@SurvivalMode@@UEAAX_N@Z
     */
    virtual void setTrialMode(bool);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?isInTrialMode@SurvivalMode@@UEAA_NXZ
     */
    virtual bool isInTrialMode();
    /**
     * @note   Virtual function table index: 18
     * @symbol ?registerUpsellScreenCallback@SurvivalMode@@UEAAXV?$function@$$A6AX_N@Z@std@@@Z
     */
    virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SURVIVALMODE
#endif
    /**
     * @symbol ??0SurvivalMode@@QEAA@AEAVPlayer@@@Z
     */
    MCAPI SurvivalMode(class Player &);

//private:
    /**
     * @symbol ?_messagePlayers@SurvivalMode@@AEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _messagePlayers(std::string);
    /**
     * @symbol ?_showTrialReminder@SurvivalMode@@AEAAX_N@Z
     */
    MCAPI void _showTrialReminder(bool);

private:
MCAPI static bool mTrialHasEnded;

};
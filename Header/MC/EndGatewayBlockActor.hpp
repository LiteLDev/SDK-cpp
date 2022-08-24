/**
 * @file  EndGatewayBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndGatewayBlockActor.
 *
 */
class EndGatewayBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYBLOCKACTOR
public:
    class EndGatewayBlockActor& operator=(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~EndGatewayBlockActor();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?load@EndGatewayBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?save@EndGatewayBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?tick@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @note   Virtual function table index: 8
     * @symbol ?onChanged@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 14
     * @symbol ?triggerEvent@EndGatewayBlockActor@@UEAAXHH@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 18
     * @symbol ?hasAlphaLayer@EndGatewayBlockActor@@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @note   Virtual function table index: 28
     * @symbol 
     */
    virtual void __unk_vfn_28();
    /**
     * @note   Virtual function table index: 29
     * @symbol 
     */
    virtual void __unk_vfn_29();
    /**
     * @note   Virtual function table index: 30
     * @symbol 
     */
    virtual void __unk_vfn_30();
    /**
     * @note   Virtual function table index: 32
     * @symbol 
     */
    virtual void __unk_vfn_32();
    /**
     * @note   Virtual function table index: 33
     * @symbol 
     */
    virtual void __unk_vfn_33();
    /**
     * @note   Virtual function table index: 34
     * @symbol 
     */
    virtual void __unk_vfn_34();
    /**
     * @note   Virtual function table index: 35
     * @symbol ?_getUpdatePacket@EndGatewayBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDGATEWAYBLOCKACTOR
#endif
    /**
     * @symbol ??0EndGatewayBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI EndGatewayBlockActor(class BlockPos const &);
    /**
     * @symbol ?canTeleport@EndGatewayBlockActor@@QEBA_NPEBVGetCollisionShapeInterface@@AEBVBlockSource@@@Z
     */
    MCAPI bool canTeleport(class GetCollisionShapeInterface const *, class BlockSource const &) const;
    /**
     * @symbol ?getExitPosition@EndGatewayBlockActor@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getExitPosition() const;
    /**
     * @symbol ?getParticleAmount@EndGatewayBlockActor@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int getParticleAmount(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?setExitPosition@EndGatewayBlockActor@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setExitPosition(class BlockPos const &);
    /**
     * @symbol ?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z
     */
    MCAPI void teleportEntity(class Actor &);
MCAPI static int const COOLDOWN_TIME;
MCAPI static int const EVENT_COOLDOWN;
MCAPI static int const SPAWN_TIME;
    /**
     * @symbol ?findExitPortal@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVWorldGenerator@@AEBV2@@Z
     */
    MCAPI static class BlockPos findExitPortal(class WorldGenerator &, class BlockPos const &);
    /**
     * @symbol ?findTallestBlock@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@H_N@Z
     */
    MCAPI static class BlockPos findTallestBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @symbol ?findValidSpawnAround@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@_NH@Z
     */
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource &, class BlockPos const &, bool, int);

//private:
    /**
     * @symbol ?_getHighestSection@EndGatewayBlockActor@@CAHAEAVWorldGenerator@@AEAVBlockVolume@@AEBVBlockPos@@@Z
     */
    MCAPI static int _getHighestSection(class WorldGenerator &, class BlockVolume &, class BlockPos const &);

private:

};
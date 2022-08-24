/**
 * @file  SculkSensorBlockActor.hpp
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
 * @brief MC class SculkSensorBlockActor.
 *
 */
class SculkSensorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORBLOCKACTOR
public:
    class SculkSensorBlockActor& operator=(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SculkSensorBlockActor();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?load@SculkSensorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?save@SculkSensorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?tick@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 13
     * @symbol ?onRemoved@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSENSORBLOCKACTOR
#endif
    /**
     * @symbol ??0SculkSensorBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SculkSensorBlockActor(class BlockPos const &);
    /**
     * @symbol ?getLatestReceivedVibrationFrequency@SculkSensorBlockActor@@QEBAHXZ
     */
    MCAPI int getLatestReceivedVibrationFrequency() const;
    /**
     * @symbol ?onStepOn@SculkSensorBlockActor@@QEAAXAEAVBlockSource@@AEAVActor@@@Z
     */
    MCAPI void onStepOn(class BlockSource &, class Actor &);
MCAPI static enum BlockActorType const TypeId;
MCAPI static std::string const TypeString;
    /**
     * @symbol ?tryGet@SculkSensorBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class SculkSensorBlockActor * tryGet(class BlockSource &, class BlockPos const &);

};
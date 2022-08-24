/**
 * @file  RedstoneTorchCapacitor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RedstoneTorchCapacitor.
 *
 */
class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RedstoneTorchCapacitor();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getStrength@RedstoneTorchCapacitor@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?removeSource@RedstoneTorchCapacitor@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @note   Virtual function table index: 11
     * @symbol ?addSource@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @note   Virtual function table index: 12
     * @symbol ?allowConnection@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?evaluate@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @note   Virtual function table index: 15
     * @symbol ?cacheValues@RedstoneTorchCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @note   Virtual function table index: 16
     * @symbol ?updateDependencies@RedstoneTorchCapacitor@@EEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @note   Virtual function table index: 17
     * @symbol 
     */
    virtual void __unk_vfn_17();
    /**
     * @note   Virtual function table index: 18
     * @symbol ?isHalfPulse@RedstoneTorchCapacitor@@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @note   Virtual function table index: 20
     * @symbol 
     */
    virtual void __unk_vfn_20();
    /**
     * @note   Virtual function table index: 22
     * @symbol ?getCircuitComponentType@RedstoneTorchCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @note   Virtual function table index: 24
     * @symbol ?getPoweroutDirection@RedstoneTorchCapacitor@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REDSTONETORCHCAPACITOR
#endif
    /**
     * @symbol ??0RedstoneTorchCapacitor@@QEAA@XZ
     */
    MCAPI RedstoneTorchCapacitor();
    /**
     * @symbol ?resetBurnOutCount@RedstoneTorchCapacitor@@QEAAXXZ
     */
    MCAPI void resetBurnOutCount();
    /**
     * @symbol ?setOn@RedstoneTorchCapacitor@@QEAAX_N@Z
     */
    MCAPI void setOn(bool);

//private:
    /**
     * @symbol ?FindStrongestStrength@RedstoneTorchCapacitor@@AEAAHAEBVBlockPos@@AEAVCircuitSystem@@AEA_N@Z
     */
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:

};
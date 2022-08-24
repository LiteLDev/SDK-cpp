/**
 * @file  StructureBlockActor.hpp
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
 * @brief MC class StructureBlockActor.
 *
 */
class StructureBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKACTOR
public:
    class StructureBlockActor& operator=(class StructureBlockActor const &) = delete;
    StructureBlockActor(class StructureBlockActor const &) = delete;
    StructureBlockActor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~StructureBlockActor();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?load@StructureBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?save@StructureBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: 8
     * @symbol ?onChanged@StructureBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
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
    /**
     * @note   Virtual function table index: 35
     * @symbol ?_getUpdatePacket@StructureBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @note   Virtual function table index: 36
     * @symbol ?_onUpdatePacket@StructureBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREBLOCKACTOR
#endif
    /**
     * @symbol ??0StructureBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI StructureBlockActor(class BlockPos const &);
    /**
     * @symbol ?getStructureData@StructureBlockActor@@QEBAAEBVStructureEditorData@@XZ
     */
    MCAPI class StructureEditorData const & getStructureData() const;
    /**
     * @symbol ?setPowered@StructureBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
     */
    MCAPI void setPowered(class BlockSource &, class BlockPos const &, bool, bool);
    /**
     * @symbol ?setStructureData@StructureBlockActor@@QEAAXAEBVStructureEditorData@@@Z
     */
    MCAPI void setStructureData(class StructureEditorData const &);
MCAPI static float const MAX_WIREFRAME_RENDER_DISTANCE;
MCAPI static class mce::Color const X_AXIS_COLOR;
MCAPI static class mce::Color const Y_AXIS_COLOR;
MCAPI static class mce::Color const Z_AXIS_COLOR;

//private:
    /**
     * @symbol ?_loadStructure@StructureBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBaseGameVersion@@@Z
     */
    MCAPI bool _loadStructure(class BlockSource &, class BlockPos const &, class BaseGameVersion const &);
    /**
     * @symbol ?_saveStructure@StructureBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI bool _saveStructure(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol ?_trigger@StructureBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBaseGameVersion@@_N@Z
     */
    MCAPI void _trigger(class BlockSource &, class BlockPos const &, class BaseGameVersion const &, bool);

private:

};
/**
 * @file  LeafBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LeafBlock.
 *
 */
class LeafBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEAFBLOCK
public:
    class LeafBlock& operator=(class LeafBlock const &) = delete;
    LeafBlock(class LeafBlock const &) = delete;
    LeafBlock() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~LeafBlock();
    /**
     * @note   Virtual function table index: 19
     * @symbol 
     */
    virtual void __unk_vfn_19();
    /**
     * @note   Virtual function table index: 22
     * @symbol ?canProvideSupport@LeafBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @note   Virtual function table index: 24
     * @symbol ?canProvideMultifaceSupport@LeafBlock@@UEBA_NAEBVBlock@@E@Z
     */
    virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
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
     * @note   Virtual function table index: 36
     * @symbol 
     */
    virtual void __unk_vfn_36();
    /**
     * @note   Virtual function table index: 37
     * @symbol 
     */
    virtual void __unk_vfn_37();
    /**
     * @note   Virtual function table index: 38
     * @symbol 
     */
    virtual void __unk_vfn_38();
    /**
     * @note   Virtual function table index: 39
     * @symbol 
     */
    virtual void __unk_vfn_39();
    /**
     * @note   Virtual function table index: 40
     * @symbol 
     */
    virtual void __unk_vfn_40();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
    /**
     * @note   Virtual function table index: 42
     * @symbol 
     */
    virtual void __unk_vfn_42();
    /**
     * @note   Virtual function table index: 44
     * @symbol 
     */
    virtual void __unk_vfn_44();
    /**
     * @note   Virtual function table index: 45
     * @symbol 
     */
    virtual void __unk_vfn_45();
    /**
     * @note   Virtual function table index: 46
     * @symbol 
     */
    virtual void __unk_vfn_46();
    /**
     * @note   Virtual function table index: 47
     * @symbol 
     */
    virtual void __unk_vfn_47();
    /**
     * @note   Virtual function table index: 48
     * @symbol 
     */
    virtual void __unk_vfn_48();
    /**
     * @note   Virtual function table index: 49
     * @symbol 
     */
    virtual void __unk_vfn_49();
    /**
     * @note   Virtual function table index: 59
     * @symbol 
     */
    virtual void __unk_vfn_59();
    /**
     * @note   Virtual function table index: 60
     * @symbol 
     */
    virtual void __unk_vfn_60();
    /**
     * @note   Virtual function table index: 61
     * @symbol ?canContainLiquid@LeafBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 94
     * @symbol ?breaksFallingBlocks@LeafBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @note   Virtual function table index: 100
     * @symbol ?getResourceCount@LeafBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @note   Virtual function table index: 103
     * @symbol ?spawnResources@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @note   Virtual function table index: 105
     * @symbol 
     */
    virtual void __unk_vfn_105();
    /**
     * @note   Virtual function table index: 106
     * @symbol ?getPlacementBlock@LeafBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @note   Virtual function table index: 124
     * @symbol 
     */
    virtual void __unk_vfn_124();
    /**
     * @note   Virtual function table index: 126
     * @symbol 
     */
    virtual void __unk_vfn_126();
    /**
     * @note   Virtual function table index: 127
     * @symbol 
     */
    virtual void __unk_vfn_127();
    /**
     * @note   Virtual function table index: 132
     * @symbol 
     */
    virtual void __unk_vfn_132();
    /**
     * @note   Virtual function table index: 137
     * @symbol ?getColor@LeafBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @note   Virtual function table index: 140
     * @symbol ?isSeasonTinted@LeafBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 141
     * @symbol ?onGraphicsModeChanged@LeafBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @note   Virtual function table index: 148
     * @symbol 
     */
    virtual void __unk_vfn_148();
    /**
     * @note   Virtual function table index: 157
     * @symbol 
     */
    virtual void __unk_vfn_157();
    /**
     * @note   Virtual function table index: 165
     * @symbol ?onRemove@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 168
     * @symbol 
     */
    virtual void __unk_vfn_168();
    /**
     * @note   Virtual function table index: 169
     * @symbol 
     */
    virtual void __unk_vfn_169();
    /**
     * @note   Virtual function table index: 170
     * @symbol 
     */
    virtual void __unk_vfn_170();
    /**
     * @note   Virtual function table index: 173
     * @symbol ?playerDestroy@LeafBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @note   Virtual function table index: 175
     * @symbol ?randomTick@LeafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 177
     * @symbol 
     */
    virtual void __unk_vfn_177();
    /**
     * @note   Virtual function table index: 182
     * @symbol ?getRenderLayer@LeafBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 187
     * @symbol ?getMapColor@LeafBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 188
     * @symbol 
     */
    virtual void __unk_vfn_188();
    /**
     * @note   Virtual function table index: 192
     * @symbol ?getExtraResourceItem@LeafBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getExtraResourceItem(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEAFBLOCK
#endif
    /**
     * @symbol ??0LeafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@VBlockLegacy@@@@@Z
     */
    MCAPI LeafBlock(std::string const &, int, class WeakPtr<class BlockLegacy>);
    /**
     * @symbol ?getSeasonsColor@LeafBlock@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    MCAPI class mce::Color getSeasonsColor(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @symbol ?runDecay@LeafBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI static void runDecay(class BlockSource &, class BlockPos const &, int);

//protected:
    /**
     * @symbol ?getSapling@LeafBlock@@IEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getSapling() const;
    /**
     * @symbol ?_isTransparent@LeafBlock@@KA_NAEBVBlock@@AEBW4BlockProperty@@@Z
     */
    MCAPI static bool _isTransparent(class Block const &, enum BlockProperty const &);

protected:

};
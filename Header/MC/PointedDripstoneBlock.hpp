/**
 * @file  PointedDripstoneBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PointedDripstoneBlock.
 *
 */
class PointedDripstoneBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEBLOCK
public:
    class PointedDripstoneBlock& operator=(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~PointedDripstoneBlock();
    /**
     * @note   Virtual function table index: 8
     * @symbol ?randomlyModifyPosition@PointedDripstoneBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?getAABB@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @note   Virtual function table index: 15
     * @symbol ?onProjectileHit@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @note   Virtual function table index: 19
     * @symbol 
     */
    virtual void __unk_vfn_19();
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
     * @note   Virtual function table index: 90
     * @symbol ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 98
     * @symbol ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 101
     * @symbol ?getResourceItem@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @note   Virtual function table index: 102
     * @symbol ?asItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @note   Virtual function table index: 105
     * @symbol 
     */
    virtual void __unk_vfn_105();
    /**
     * @note   Virtual function table index: 106
     * @symbol ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
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
     * @note   Virtual function table index: 144
     * @symbol ?getVisualShape@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @note   Virtual function table index: 147
     * @symbol ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @note   Virtual function table index: 148
     * @symbol 
     */
    virtual void __unk_vfn_148();
    /**
     * @note   Virtual function table index: 152
     * @symbol ?animateTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 153
     * @symbol ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @note   Virtual function table index: 157
     * @symbol 
     */
    virtual void __unk_vfn_157();
    /**
     * @note   Virtual function table index: 158
     * @symbol ?getSilkTouchItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
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
     * @note   Virtual function table index: 172
     * @symbol ?onFallOn@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @note   Virtual function table index: 174
     * @symbol ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 175
     * @symbol ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 177
     * @symbol 
     */
    virtual void __unk_vfn_177();
    /**
     * @note   Virtual function table index: 180
     * @symbol ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 188
     * @symbol 
     */
    virtual void __unk_vfn_188();
    /**
     * @note   Virtual function table index: 192
     * @symbol ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @note   Virtual function table index: 193
     * @symbol ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @note   Virtual function table index: 194
     * @symbol 
     */
    virtual void __unk_vfn_194();
    /**
     * @note   Virtual function table index: 195
     * @symbol ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 197
     * @symbol ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
    /**
     * @note   Virtual function table index: -1
     * @symbol ?falling@PointedDripstoneBlock@@UEBA_NXZ
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @symbol ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI PointedDripstoneBlock(std::string const &, int);
    /**
     * @symbol ?addDripParticle@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4ParticleType@@@Z
     */
    MCAPI static void addDripParticle(class BlockSource &, class BlockPos const &, enum ParticleType);
    /**
     * @symbol ?canGrow@PointedDripstoneBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI static bool canGrow(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?fillCauldron@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void fillCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?findStalactiteTipAboveCauldron@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class std::optional<class BlockPos> findStalactiteTipAboveCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getCauldronFillLiquidType@PointedDripstoneBlock@@SA?AV?$optional@W4MaterialType@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class std::optional<enum MaterialType> getCauldronFillLiquidType(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getStalactiteTipBelowFillSource@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class std::optional<class BlockPos> getStalactiteTipBelowFillSource(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalactite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void growStalactite(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalagmite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void growStalagmite(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_updateBlockThickness@PointedDripstoneBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _updateBlockThickness(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_calculateDripstoneThickness@PointedDripstoneBlock@@CA?AW4DripstoneThickness@@AEAVBlockSource@@AEBVBlockPos@@E_N@Z
     */
    MCAPI static enum DripstoneThickness _calculateDripstoneThickness(class BlockSource &, class BlockPos const &, unsigned char, bool);
    /**
     * @symbol ?_canDrip@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _canDrip(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_canFillCauldron@PointedDripstoneBlock@@CA_NAEBVBlock@@@Z
     */
    MCAPI static bool _canFillCauldron(class Block const &);
    /**
     * @symbol ?_canTipGrow@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _canTipGrow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_createDripstone@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@EW4DripstoneThickness@@@Z
     */
    MCAPI static void _createDripstone(class BlockSource &, class BlockPos const &, unsigned char, enum DripstoneThickness);
    /**
     * @symbol ?_createMergedTips@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI static void _createMergedTips(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?_findBlockVertically@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@@Z@3@2H@Z
     */
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(class BlockSource &, class BlockPos const &, unsigned char, class std::function<bool (class BlockSource &, class BlockPos const &)>, class std::function<bool (class BlockSource &, class BlockPos const &)>, int);
    /**
     * @symbol ?_findRootBlock@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI static class std::optional<class BlockPos> _findRootBlock(class BlockSource &, class BlockPos const &, int);
    /**
     * @symbol ?_findTip@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EH_N@Z
     */
    MCAPI static class std::optional<class BlockPos> _findTip(class BlockSource &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @symbol ?_getBlockAboveStalactiteRoot@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static class std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_getRandomBlockPositionOffset@PointedDripstoneBlock@@CA?AVVec3@@AEBVBlockPos@@@Z
     */
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol ?_grow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI static void _grow(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?_growStalagmiteBelow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void _growStalagmiteBelow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isStalactiteBase@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _isStalactiteBase(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isTip@PointedDripstoneBlock@@CA_NAEBVBlock@@E_N@Z
     */
    MCAPI static bool _isTip(class Block const &, unsigned char, bool);
    /**
     * @symbol ?_isValidPointedDripstonePlacement@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol ?_mayPlaceHanging@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _mayPlaceHanging(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_mayPlaceStanding@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _mayPlaceStanding(class BlockSource &, class BlockPos const &);

private:

};
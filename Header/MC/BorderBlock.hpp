/**
 * @file  BorderBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WallBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BorderBlock.
 *
 */
class BorderBlock : public WallBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BORDERBLOCK
public:
    class BorderBlock& operator=(class BorderBlock const &) = delete;
    BorderBlock(class BorderBlock const &) = delete;
    BorderBlock() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BorderBlock();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getCollisionShape@BorderBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
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
     * @note   Virtual function table index: 77
     * @symbol ?setupRedstoneComponent@BorderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 100
     * @symbol ?getResourceCount@BorderBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @note   Virtual function table index: 101
     * @symbol ?getResourceItem@BorderBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @note   Virtual function table index: 105
     * @symbol 
     */
    virtual void __unk_vfn_105();
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
     * @note   Virtual function table index: 134
     * @symbol ?buildDescriptionId@BorderBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @note   Virtual function table index: 143
     * @symbol ?getVisualShapeInWorld@BorderBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @note   Virtual function table index: 144
     * @symbol ?getVisualShape@BorderBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @note   Virtual function table index: 147
     * @symbol ?getVariant@BorderBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @note   Virtual function table index: 148
     * @symbol 
     */
    virtual void __unk_vfn_148();
    /**
     * @note   Virtual function table index: 152
     * @symbol ?animateTick@BorderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 157
     * @symbol 
     */
    virtual void __unk_vfn_157();
    /**
     * @note   Virtual function table index: 165
     * @symbol ?onRemove@BorderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
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
     * @note   Virtual function table index: 171
     * @symbol ?onPlace@BorderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 177
     * @symbol 
     */
    virtual void __unk_vfn_177();
    /**
     * @note   Virtual function table index: 188
     * @symbol 
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BORDERBLOCK
#endif
    /**
     * @symbol ??0BorderBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BorderBlock(std::string const &, int);

};
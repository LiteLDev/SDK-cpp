// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"
#include "DiggerItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PickaxeItem : public DiggerItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PICKAXEITEM
public:
    class PickaxeItem& operator=(class PickaxeItem const &) = delete;
    PickaxeItem(class PickaxeItem const &) = delete;
    PickaxeItem() = delete;
#endif

public:
    /*0*/ virtual ~PickaxeItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*40*/ virtual bool canDestroySpecial(class Block const &) const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*58*/ virtual int getEnchantSlot() const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*84*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    MCAPI PickaxeItem(std::string const &, int, class Item::Tier const &);

protected:

private:
    MCAPI bool const _isTierOneBlock(class BlockLegacy const &) const;
    MCAPI bool const _isTierTwoBlock(class BlockLegacy const &) const;

};
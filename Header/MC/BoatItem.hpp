// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BoatItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOATITEM
public:
    class BoatItem& operator=(class BoatItem const &) = delete;
    BoatItem(class BoatItem const &) = delete;
    BoatItem() = delete;
#endif


public:
    /*0*/ virtual ~BoatItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*46*/ virtual bool isStackedByData() const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*57*/ virtual bool isLiquidClipItem(int) const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual bool isValidAuxValue(int) const;
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*85*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*119*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*121*/ virtual class Item & setIcon(std::string const &, int);
    /*132*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /*133*/ virtual enum ActorType _getActorType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOATITEM
#endif
    MCAPI BoatItem(std::string const &, int, int);



};
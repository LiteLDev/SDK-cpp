// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AbstractCandleBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CandleBlock : public AbstractCandleBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANDLEBLOCK
public:
    class CandleBlock& operator=(class CandleBlock const &) = delete;
    CandleBlock(class CandleBlock const &) = delete;
    CandleBlock() = delete;
#endif


public:
    /*0*/ virtual ~CandleBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual int _getNumCandles(class Block const &) const;
    /*204*/ virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /*205*/ virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*210*/ virtual void __unk_vfn_210();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANDLEBLOCK
    MCVAPI bool isInteractiveBlock() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI CandleBlock(std::string const &, int);
    MCAPI static bool tryLightFire(class BlockSource &, class BlockPos const &, class Actor *);

//private:
    MCAPI static void _forEachCandle(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>);


private:


};
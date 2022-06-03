// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There
public:
class EndSpike {
public:
    EndSpike() = delete;
    EndSpike(EndSpike const&) = delete;
    EndSpike(EndSpike const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    class SpikeFeature& operator=(class SpikeFeature const &) = delete;
    SpikeFeature(class SpikeFeature const &) = delete;
    SpikeFeature() = delete;
#endif

public:
    /*0*/ virtual ~SpikeFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const &);
    MCAPI bool placeManually(class BlockSource &, class BlockPos const &, class Random &, class Actor *);
    MCAPI void postProcessMobsAt(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI void setCrystalBeamTarget(class BlockPos const &);
    MCAPI void setCrystalInvulnerable(bool);

protected:

private:

};
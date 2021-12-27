// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERFEATURE
public:
    class FlowerFeature& operator=(class FlowerFeature const&) = delete;
    FlowerFeature(class FlowerFeature const&) = delete;
    FlowerFeature() = delete;
#endif

public:
    /*0*/ virtual ~FlowerFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual ~FlowerFeature();
    /*
    inline  ~FlowerFeature(){
         (FlowerFeature::*rv)();
        *((void**)&rv) = dlsym("??1FlowerFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI FlowerFeature(class Block const&);

protected:

private:
    MCAPI bool _placeMushroom(class BlockSource&, class BlockPos const&, class Block const&, class Random&) const;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Silverfish : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISH
public:
    class Silverfish& operator=(class Silverfish const &) = delete;
    Silverfish(class Silverfish const &) = delete;
    Silverfish() = delete;
#endif

public:
    /*14*/ virtual ~Silverfish();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*267*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void spawnAnim();
    /*294*/ virtual void aiStep();
    /*299*/ virtual bool checkSpawnRules(bool);
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void __unk_vfn_338();
    /*343*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*361*/ virtual bool isDarkEnoughToSpawn() const;
    /*
    inline bool useNewAi() const{
        bool (Silverfish::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Silverfish@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Silverfish(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:

};
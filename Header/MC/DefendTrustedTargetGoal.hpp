// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NearestAttackableTargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefendTrustedTargetGoal : public NearestAttackableTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDTRUSTEDTARGETGOAL
public:
    class DefendTrustedTargetGoal& operator=(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal() = delete;
#endif


public:
    /*0*/ virtual ~DefendTrustedTargetGoal();
    /*1*/ virtual bool canUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFENDTRUSTEDTARGETGOAL
#endif
    MCAPI DefendTrustedTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, bool, int, enum LevelSoundEvent, class DefinitionTrigger const &);

//private:
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const &);


private:


};
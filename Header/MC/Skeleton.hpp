// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Skeleton : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETON
public:
    class Skeleton& operator=(class Skeleton const &) = delete;
    Skeleton(class Skeleton const &) = delete;
    Skeleton() = delete;
#endif

public:
    /*14*/ virtual ~Skeleton();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*50*/ virtual void vehicleTick();
    /*52*/ virtual float getRidingHeight();
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
    /*112*/ virtual void setTarget(class Actor *);
    /*173*/ virtual bool canFreeze() const;
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void getDebugText(std::vector<std::string> &);
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*310*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void __unk_vfn_338();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool useNewAi() const{
        bool (Skeleton::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Skeleton@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Skeleton(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void setWitherParent(class WitherBoss *);

protected:

private:
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};
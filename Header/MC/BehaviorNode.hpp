// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORNODE
public:
    class BehaviorNode& operator=(class BehaviorNode const &) = delete;
    BehaviorNode(class BehaviorNode const &) = delete;
#endif

public:
    /*0*/ virtual ~BehaviorNode();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual void initializeFromDefinition(class Actor &);
    MCAPI BehaviorNode();
    MCAPI class BehaviorData & getBehaviorData();

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PrioritizedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIORITIZEDGOAL
public:
    class PrioritizedGoal& operator=(class PrioritizedGoal const &) = delete;
    PrioritizedGoal(class PrioritizedGoal const &) = delete;
    PrioritizedGoal() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIORITIZEDGOAL
#endif
    MCAPI int getPriority() const;
    MCAPI bool getToStart() const;
    MCAPI bool getUsed() const;
    MCAPI void setToStart(bool);
    MCAPI void setUsed(bool);
    MCAPI ~PrioritizedGoal();



};
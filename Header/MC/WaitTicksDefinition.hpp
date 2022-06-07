// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WaitTicksDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSDEFINITION
public:
    class WaitTicksDefinition& operator=(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition() = delete;
#endif


public:
    /*0*/ virtual ~WaitTicksDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WAITTICKSDEFINITION
#endif



};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AngerLevelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGERLEVELSYSTEM
public:
    class AngerLevelSystem& operator=(class AngerLevelSystem const &) = delete;
    AngerLevelSystem(class AngerLevelSystem const &) = delete;
    AngerLevelSystem() = delete;
#endif


public:
    /*0*/ virtual ~AngerLevelSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANGERLEVELSYSTEM
#endif



};
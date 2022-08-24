/**
 * @file  BreakDoorAnnotationSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationSystem.
 *
 */
class BreakDoorAnnotationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONSYSTEM
public:
    class BreakDoorAnnotationSystem& operator=(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BreakDoorAnnotationSystem();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tick@BreakDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONSYSTEM
#endif

};
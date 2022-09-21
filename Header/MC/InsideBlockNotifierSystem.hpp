/**
 * @file  MC/InsideBlockNotifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockNotifierSystem.
 *
 */
class InsideBlockNotifierSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERSYSTEM
public:
    class InsideBlockNotifierSystem& operator=(class InsideBlockNotifierSystem const &) = delete;
    InsideBlockNotifierSystem(class InsideBlockNotifierSystem const &) = delete;
    InsideBlockNotifierSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InsideBlockNotifierSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -2031607594
     * @vftbl  2
     * @symbol ?tick@InsideBlockNotifierSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

};
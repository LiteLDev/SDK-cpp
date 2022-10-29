/**
 * @file  AngerLevelSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AngerLevelSystem.
 *
 */
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
    /**
     * @vftbl  0
     * @hash   -1976601194
     */
    virtual ~AngerLevelSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@AngerLevelSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1245773092
     */
    virtual void tick(class EntityRegistry &);

};
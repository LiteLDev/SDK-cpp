/**
 * @file  GenericPathNavigation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GenericPathNavigation.
 *
 */
class GenericPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICPATHNAVIGATION
public:
    class GenericPathNavigation& operator=(class GenericPathNavigation const &) = delete;
    GenericPathNavigation(class GenericPathNavigation const &) = delete;
    GenericPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   927385758
     */
    virtual ~GenericPathNavigation();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@GenericPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
     * @hash   -1641576405
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vftbl  2
     * @symbol ?tick@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -1221110810
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol ?getTempMobPos@GenericPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
     * @hash   386109984
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vftbl  9
     * @symbol ?stop@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -169704037
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  12
     * @symbol ?updatePath@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -2073298041
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

};
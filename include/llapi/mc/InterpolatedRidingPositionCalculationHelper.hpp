/**
 * @file  InterpolatedRidingPositionCalculationHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure InterpolatedRidingPositionCalculationHelper.
 *
 */
struct InterpolatedRidingPositionCalculationHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERPOLATEDRIDINGPOSITIONCALCULATIONHELPER
public:
    struct InterpolatedRidingPositionCalculationHelper& operator=(struct InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper(struct InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper() = delete;
#endif

public:
    /**
     * @symbol ?getInterpolatedBodyRot@InterpolatedRidingPositionCalculationHelper@@SAMAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUActorRotationComponent@@$$CBURenderRotationComponent@@$$CBUStateVectorComponent@@$$CBUSynchedActorDataComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUMobBodyRotationComponent@@@@M@Z
     * @hash   1856889540
     */
    MCAPI static float getInterpolatedBodyRot(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct MobBodyRotationComponent const>, float);
    /**
     * @symbol ?getInterpolatedPosition@InterpolatedRidingPositionCalculationHelper@@SA?AVVec3@@AEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUActorRotationComponent@@$$CBURenderRotationComponent@@$$CBUStateVectorComponent@@$$CBUSynchedActorDataComponent@@@@M@Z
     * @hash   867733150
     */
    MCAPI static class Vec3 getInterpolatedPosition(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, float);
    /**
     * @symbol ?getInterpolatedRidingOffset@InterpolatedRidingPositionCalculationHelper@@SA?AVVec3@@AEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UHorseFlag@@@@@@$$CBUStandAnimationComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUActorRotationComponent@@$$CBURenderRotationComponent@@$$CBUStateVectorComponent@@$$CBUSynchedActorDataComponent@@@@M@Z
     * @hash   -1598240536
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, float);

};
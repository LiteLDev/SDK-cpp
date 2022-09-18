/**
 * @file  GetCollisionShapeActorProxy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GetCollisionShapeActorProxy.
 *
 */
class GetCollisionShapeActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCOLLISIONSHAPEACTORPROXY
public:
    class GetCollisionShapeActorProxy& operator=(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1240846804
     */
    virtual ~GetCollisionShapeActorProxy();
    /**
     * @vftbl  1
     * @symbol ?getFeetAttachPosY@GetCollisionShapeActorProxy@@UEBAMXZ
     * @hash   857525614
     */
    virtual float getFeetAttachPosY() const;
    /**
     * @vftbl  2
     * @symbol ?canDescendThroughBlock@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   -355459892
     */
    virtual bool canDescendThroughBlock() const;
    /**
     * @vftbl  3
     * @symbol ?getFallDistance@GetCollisionShapeActorProxy@@UEBAMXZ
     * @hash   1894048694
     */
    virtual float getFallDistance() const;
    /**
     * @vftbl  4
     * @symbol ?getEntityTypeId@GetCollisionShapeActorProxy@@UEBA?AW4ActorType@@XZ
     * @hash   -1246112505
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @vftbl  5
     * @symbol ?isWearingLeatherBoots@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   -1579925717
     */
    virtual bool isWearingLeatherBoots() const;
    /**
     * @vftbl  6
     * @symbol ?hasLightWeightFamilyTag@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   1444429996
     */
    virtual bool hasLightWeightFamilyTag() const;
    /**
     * @vftbl  7
     * @symbol ?getAABB@GetCollisionShapeActorProxy@@UEBAAEBVAABB@@XZ
     * @hash   -42464667
     */
    virtual class AABB const & getAABB() const;
    /**
     * @vftbl  8
     * @symbol ?isWorldBuilder@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   975968509
     */
    virtual bool isWorldBuilder() const;
    /**
     * @vftbl  9
     * @symbol ?isRiding@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   576206825
     */
    virtual bool isRiding() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETCOLLISIONSHAPEACTORPROXY
    /**
     * @symbol ?hasPassenger@GetCollisionShapeActorProxy@@UEBA_NXZ
     * @hash   289408282
     */
    MCVAPI bool hasPassenger() const;
#endif
    /**
     * @symbol ??0GetCollisionShapeActorProxy@@QEAA@AEBUIActorMovementProxy@@@Z
     * @hash   2001481223
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const &);

};
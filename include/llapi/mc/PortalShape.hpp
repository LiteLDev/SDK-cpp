/**
 * @file  PortalShape.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalShape.
 *
 */
class PortalShape {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALSHAPE
public:
    class PortalShape& operator=(class PortalShape const &) = delete;
    PortalShape(class PortalShape const &) = delete;
    PortalShape() = delete;
#endif

public:
    /**
     * @symbol ??0PortalShape@@QEAA@AEBVBlockSource@@AEBVBlockPos@@W4PortalAxis@@@Z
     * @hash   988499592
     */
    MCAPI PortalShape(class BlockSource const &, class BlockPos const &, enum class PortalAxis);
    /**
     * @symbol ?createPortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@@Z
     * @hash   1967916666
     */
    MCAPI void createPortalBlocks(class WorldChangeTransaction &) const;
    /**
     * @symbol ?createRecord@PortalShape@@QEBA?AVPortalRecord@@XZ
     * @hash   1930032094
     */
    MCAPI class PortalRecord createRecord() const;
    /**
     * @symbol ?evaluate@PortalShape@@QEAAXAEBVBlockPos@@AEBVBlockSource@@@Z
     * @hash   -2052374007
     */
    MCAPI void evaluate(class BlockPos const &, class BlockSource const &);
    /**
     * @symbol ?getNumberOfPortalBlocks@PortalShape@@QEBAHXZ
     * @hash   -1006960328
     */
    MCAPI int getNumberOfPortalBlocks() const;
    /**
     * @symbol ?getPortalBlockAABB@PortalShape@@QEBA?AVAABB@@XZ
     * @hash   98668708
     */
    MCAPI class AABB getPortalBlockAABB() const;
    /**
     * @symbol ?isFilled@PortalShape@@QEBA_NXZ
     * @hash   -428483498
     */
    MCAPI bool isFilled() const;
    /**
     * @symbol ?isValid@PortalShape@@QEBA_NXZ
     * @hash   1923299012
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?removePortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@AEBVBlockPos@@@Z
     * @hash   -1515269661
     */
    MCAPI void removePortalBlocks(class WorldChangeTransaction &, class BlockPos const &) const;
    /**
     * @symbol ?setAxis@PortalShape@@QEAAXW4PortalAxis@@@Z
     * @hash   1202889384
     */
    MCAPI void setAxis(enum class PortalAxis);
    /**
     * @symbol ?updateNeighboringBlocks@PortalShape@@QEBAXAEAVBlockSource@@AEBVVec3@@@Z
     * @hash   1194303785
     */
    MCAPI void updateNeighboringBlocks(class BlockSource &, class Vec3 const &) const;

//private:
    /**
     * @symbol ?_calculatePortalHeight@PortalShape@@AEAAHAEBVBlockSource@@@Z
     * @hash   1324238443
     */
    MCAPI int _calculatePortalHeight(class BlockSource const &);
    /**
     * @symbol ?_getDistanceUntilEdge@PortalShape@@AEBAHAEBVBlockPos@@W4Name@Facing@@AEBVBlockSource@@@Z
     * @hash   -94968592
     */
    MCAPI int _getDistanceUntilEdge(class BlockPos const &, enum class Facing::Name, class BlockSource const &) const;

private:

};
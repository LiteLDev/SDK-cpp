/**
 * @file  MonumentBuilding.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonumentBuilding.
 *
 */
class MonumentBuilding : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONUMENTBUILDING
public:
    class MonumentBuilding& operator=(class MonumentBuilding const &) = delete;
    MonumentBuilding(class MonumentBuilding const &) = delete;
    MonumentBuilding() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1760341349
     */
    virtual ~MonumentBuilding();
    /**
     * @vftbl  2
     * @symbol ?getType@MonumentBuilding@@UEBA?AW4StructurePieceType@@XZ
     * @hash   2066256976
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@MonumentBuilding@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   1840536152
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -910164668
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ??0MonumentBuilding@@QEAA@AEAVRandom@@FHHAEAH@Z
     * @hash   938408388
     */
    MCAPI MonumentBuilding(class Random &, short, int, int, int &);

//private:
    /**
     * @symbol ?generateEntranceArchs@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1895084342
     */
    MCAPI void generateEntranceArchs(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateEntranceWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   68115415
     */
    MCAPI void generateEntranceWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateLowerWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   1992614934
     */
    MCAPI void generateLowerWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateMiddleWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1427649576
     */
    MCAPI void generateMiddleWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateRoofPiece@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   1551718823
     */
    MCAPI void generateRoofPiece(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateRoomGraph@MonumentBuilding@@AEAA?AV?$vector@V?$shared_ptr@VRoomDefinition@@@std@@V?$allocator@V?$shared_ptr@VRoomDefinition@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -1365346119
     */
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random &);
    /**
     * @symbol ?generateUpperWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1787766619
     */
    MCAPI void generateUpperWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateWing@MonumentBuilding@@AEAAX_NHAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1671236159
     */
    MCAPI void generateWing(bool, int, class BlockSource &, class Random &, class BoundingBox const &);

private:

};
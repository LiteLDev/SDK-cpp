/**
 * @file  OceanMonumentEntryRoom.hpp
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
 * @brief MC class OceanMonumentEntryRoom.
 *
 */
class OceanMonumentEntryRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTENTRYROOM
public:
    class OceanMonumentEntryRoom& operator=(class OceanMonumentEntryRoom const &) = delete;
    OceanMonumentEntryRoom(class OceanMonumentEntryRoom const &) = delete;
    OceanMonumentEntryRoom() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~OceanMonumentEntryRoom();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getType@OceanMonumentEntryRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?postProcess@OceanMonumentEntryRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTENTRYROOM
#endif

};
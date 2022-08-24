/**
 * @file  OceanRuinFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanRuinFeature.
 *
 */
class OceanRuinFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINFEATURE
public:
    class OceanRuinFeature& operator=(class OceanRuinFeature const &) = delete;
    OceanRuinFeature(class OceanRuinFeature const &) = delete;
    OceanRuinFeature() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~OceanRuinFeature();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getNearestGeneratedFeature@OceanRuinFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @note   Virtual function table index: 5
     * @symbol ?isFeatureChunk@OceanRuinFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @note   Virtual function table index: 6
     * @symbol ?createStructureStart@OceanRuinFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANRUINFEATURE
#endif
    /**
     * @symbol ??0OceanRuinFeature@@QEAA@AEAVOceanMonumentFeature@@IAEBVBaseGameVersion@@@Z
     */
    MCAPI OceanRuinFeature(class OceanMonumentFeature &, unsigned int, class BaseGameVersion const &);

};
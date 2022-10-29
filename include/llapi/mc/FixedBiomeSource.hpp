/**
 * @file  FixedBiomeSource.hpp
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
 * @brief MC class FixedBiomeSource.
 *
 */
class FixedBiomeSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIXEDBIOMESOURCE
public:
    class FixedBiomeSource& operator=(class FixedBiomeSource const &) = delete;
    FixedBiomeSource(class FixedBiomeSource const &) = delete;
    FixedBiomeSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   96852113
     */
    virtual ~FixedBiomeSource();
    /**
     * @vftbl  1
     * @symbol ?fillBiomes@FixedBiomeSource@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
     * @hash   1164991573
     */
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    /**
     * @vftbl  2
     * @symbol ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     * @hash   961826994
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @vftbl  3
     * @symbol ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
     * @hash   2026268276
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    /**
     * @vftbl  4
     * @symbol ?containsOnly@FixedBiomeSource@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
     * @hash   380221710
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<unsigned __int64 const, -1>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIXEDBIOMESOURCE
    /**
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     * @hash   -1818819852
     */
    MCVAPI class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
     * @hash   1547706210
     */
    MCVAPI class Biome const * getBiome(struct GetBiomeOptions const &) const;
    /**
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@HHH@Z
     * @hash   1369952697
     */
    MCVAPI class Biome const * getBiome(int, int, int) const;
#endif
    /**
     * @symbol ??0FixedBiomeSource@@QEAA@AEBVBiome@@@Z
     * @hash   -1992871054
     */
    MCAPI FixedBiomeSource(class Biome const &);

};
/**
 * @file  ScatterFeature.hpp
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
 * @brief MC class ScatterFeature.
 *
 */
class ScatterFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERFEATURE
public:
    class ScatterFeature& operator=(class ScatterFeature const &) = delete;
    ScatterFeature(class ScatterFeature const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ScatterFeature();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?place@ScatterFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTERFEATURE
#endif
    /**
     * @symbol ??0ScatterFeature@@QEAA@XZ
     */
    MCAPI ScatterFeature();

};
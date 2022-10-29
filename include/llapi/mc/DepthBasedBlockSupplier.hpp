/**
 * @file  DepthBasedBlockSupplier.hpp
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
 * @brief MC class DepthBasedBlockSupplier.
 *
 */
class DepthBasedBlockSupplier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPTHBASEDBLOCKSUPPLIER
public:
    class DepthBasedBlockSupplier& operator=(class DepthBasedBlockSupplier const &) = delete;
    DepthBasedBlockSupplier(class DepthBasedBlockSupplier const &) = delete;
    DepthBasedBlockSupplier() = delete;
#endif

public:
    /**
     * @symbol ??0DepthBasedBlockSupplier@@QEAA@VXoroshiroPositionalRandomFactory@@PEBVBlock@@@Z
     * @hash   786646704
     */
    MCAPI DepthBasedBlockSupplier(class XoroshiroPositionalRandomFactory, class Block const *);
    /**
     * @symbol ?getBlock@DepthBasedBlockSupplier@@QEBAPEBVBlock@@AEBVBlockPos@@PEBV2@@Z
     * @hash   -2004865671
     */
    MCAPI class Block const * getBlock(class BlockPos const &, class Block const *) const;

};
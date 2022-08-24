/**
 * @file  SporeBlossomBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SporeBlossomBlockActor.
 *
 */
class SporeBlossomBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPOREBLOSSOMBLOCKACTOR
public:
    class SporeBlossomBlockActor& operator=(class SporeBlossomBlockActor const &) = delete;
    SporeBlossomBlockActor(class SporeBlossomBlockActor const &) = delete;
    SporeBlossomBlockActor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SporeBlossomBlockActor();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?tick@SporeBlossomBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 28
     * @symbol 
     */
    virtual void __unk_vfn_28();
    /**
     * @note   Virtual function table index: 29
     * @symbol 
     */
    virtual void __unk_vfn_29();
    /**
     * @note   Virtual function table index: 30
     * @symbol 
     */
    virtual void __unk_vfn_30();
    /**
     * @note   Virtual function table index: 32
     * @symbol 
     */
    virtual void __unk_vfn_32();
    /**
     * @note   Virtual function table index: 33
     * @symbol 
     */
    virtual void __unk_vfn_33();
    /**
     * @note   Virtual function table index: 34
     * @symbol 
     */
    virtual void __unk_vfn_34();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPOREBLOSSOMBLOCKACTOR
#endif
    /**
     * @symbol ??0SporeBlossomBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SporeBlossomBlockActor(class BlockPos const &);

};
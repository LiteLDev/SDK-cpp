/**
 * @file  BurstReactionComponent.hpp
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
 * @brief MC class BurstReactionComponent.
 *
 */
class BurstReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURSTREACTIONCOMPONENT
public:
    class BurstReactionComponent& operator=(class BurstReactionComponent const &) = delete;
    BurstReactionComponent(class BurstReactionComponent const &) = delete;
    BurstReactionComponent() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BurstReactionComponent();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?_onEnd@BurstReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
     */
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BURSTREACTIONCOMPONENT
#endif

};
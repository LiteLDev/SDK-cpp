/**
 * @file  FindBlockNode.hpp
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
 * @brief MC class FindBlockNode.
 *
 */
class FindBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDBLOCKNODE
public:
    class FindBlockNode& operator=(class FindBlockNode const &) = delete;
    FindBlockNode(class FindBlockNode const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~FindBlockNode();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?tick@FindBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?initializeFromDefinition@FindBlockNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINDBLOCKNODE
#endif
    /**
     * @symbol ??0FindBlockNode@@QEAA@XZ
     */
    MCAPI FindBlockNode();

};
/**
 * @file  ReplaceRule.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ReplaceRule.
 *
 */
struct ReplaceRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLACERULE
public:
    struct ReplaceRule& operator=(struct ReplaceRule const &) = delete;
    ReplaceRule(struct ReplaceRule const &) = delete;
    ReplaceRule() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REPLACERULE
#endif
    /**
     * @symbol ??0ReplaceRule@@QEAA@VBlockDescriptor@@V?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);
    /**
     * @symbol ??1ReplaceRule@@QEAA@XZ
     */
    MCAPI ~ReplaceRule();

};
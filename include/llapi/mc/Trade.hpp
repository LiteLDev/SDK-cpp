/**
 * @file  Trade.hpp
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
 * @brief MC structure Trade.
 *
 */
struct Trade {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE
public:
    struct Trade& operator=(struct Trade const &) = delete;
    Trade(struct Trade const &) = delete;
    Trade() = delete;
#endif

public:
    /**
     * @symbol ??4Trade@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -832279720
     */
    MCAPI struct Trade & operator=(struct Trade &&);
    /**
     * @symbol ??1Trade@@QEAA@XZ
     * @hash   244024160
     */
    MCAPI ~Trade();

};
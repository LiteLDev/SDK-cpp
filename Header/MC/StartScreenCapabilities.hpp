/**
 * @file  StartScreenCapabilities.hpp
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
 * @brief MC structure StartScreenCapabilities.
 *
 */
struct StartScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTSCREENCAPABILITIES
public:
    struct StartScreenCapabilities& operator=(struct StartScreenCapabilities const &) = delete;
    StartScreenCapabilities(struct StartScreenCapabilities const &) = delete;
    StartScreenCapabilities() = delete;
#endif
public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~StartScreenCapabilities();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?isOfType@?$TypedScreenCapabilities@UStartScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@@@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTSCREENCAPABILITIES
#endif

};
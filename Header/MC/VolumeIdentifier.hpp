/**
 * @file  VolumeIdentifier.hpp
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
 * @brief MC structure VolumeIdentifier.
 *
 */
struct VolumeIdentifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEIDENTIFIER
public:
    struct VolumeIdentifier& operator=(struct VolumeIdentifier const &) = delete;
    VolumeIdentifier(struct VolumeIdentifier const &) = delete;
    VolumeIdentifier() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEIDENTIFIER
#endif
    /**
     * @symbol ?bindType@VolumeIdentifier@@SAXXZ
     */
    MCAPI static void bindType();

};
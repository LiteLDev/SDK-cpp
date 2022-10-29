/**
 * @file  BiomeArea.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeArea.
 *
 */
class BiomeArea {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEAREA
public:
    class BiomeArea& operator=(class BiomeArea const &) = delete;
    BiomeArea(class BiomeArea const &) = delete;
    BiomeArea() = delete;
#endif

public:
    /**
     * @symbol ??0BiomeArea@@QEAA@AEBVBoundingBox@@I@Z
     * @hash   -1390458145
     */
    MCAPI BiomeArea(class BoundingBox const &, unsigned int);
    /**
     * @symbol ??1BiomeArea@@QEAA@XZ
     * @hash   247533273
     */
    MCAPI ~BiomeArea();

};
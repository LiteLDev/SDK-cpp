/**
 * @file  Palette.hpp
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
 * @brief MC class Palette.
 *
 */
class Palette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PALETTE
public:
    class Palette& operator=(class Palette const &) = delete;
    Palette(class Palette const &) = delete;
    Palette() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PALETTE
#endif
MCAPI static class mce::Color const BLACK;
MCAPI static class mce::Color const BLUE;
MCAPI static class mce::Color const BROWN;
MCAPI static class mce::Color const CYAN;
MCAPI static class mce::Color const GRAY;
MCAPI static class mce::Color const GREEN;
MCAPI static class mce::Color const LIGHT_BLUE;
MCAPI static class mce::Color const LIGHT_GREEN;
MCAPI static class mce::Color const MAGENTA;
MCAPI static class mce::Color const ORANGE;
MCAPI static class mce::Color const PINK;
MCAPI static class mce::Color const PURPLE;
MCAPI static class mce::Color const RED;
MCAPI static class mce::Color const SILVER;
MCAPI static class mce::Color const WHITE;
MCAPI static class mce::Color const YELLOW;
    /**
     * @symbol ?fromByte@Palette@@SA?AW4PaletteColor@@E@Z
     */
    MCAPI static enum PaletteColor fromByte(unsigned char);
    /**
     * @symbol ?getColor@Palette@@SAAEBVColor@mce@@W4PaletteColor@@@Z
     */
    MCAPI static class mce::Color const & getColor(enum PaletteColor);

};
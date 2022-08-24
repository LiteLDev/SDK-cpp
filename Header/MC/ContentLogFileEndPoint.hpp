/**
 * @file  ContentLogFileEndPoint.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentLogFileEndPoint.
 *
 */
class ContentLogFileEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGFILEENDPOINT
public:
    class ContentLogFileEndPoint& operator=(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGFILEENDPOINT
    /**
     * @note   Virtual function table index: -1
     * @symbol ?flush@ContentLogFileEndPoint@@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isEnabled@ContentLogFileEndPoint@@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?log@ContentLogFileEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     */
    MCVAPI void log(enum LogArea, enum LogLevel, char const *);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?logOnlyOnce@ContentLogFileEndPoint@@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setEnabled@ContentLogFileEndPoint@@UEAAX_N@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @symbol ??0ContentLogFileEndPoint@@QEAA@VPath@Core@@0@Z
     */
    MCAPI ContentLogFileEndPoint(class Core::Path, class Core::Path);
MCAPI static class gsl::basic_string_span<char const, -1> const FILE_NAME;

};
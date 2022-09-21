/**
 * @file  MC/CrashDumpPlayerData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpPlayerData.
 *
 */
class CrashDumpPlayerData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPPLAYERDATA
public:
    class CrashDumpPlayerData& operator=(class CrashDumpPlayerData const &) = delete;
    CrashDumpPlayerData(class CrashDumpPlayerData const &) = delete;
    CrashDumpPlayerData() = delete;
#endif

public:
    /**
     * @hash   922057011
     * @symbol ?kFormat@CrashDumpPlayerData@@2QBUCrashDumpFormatEntryImpl@@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};
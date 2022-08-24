/**
 * @file  DedicatedServerCommands.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServerCommands.
 *
 */
class DedicatedServerCommands {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERCOMMANDS
public:
    class DedicatedServerCommands& operator=(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVERCOMMANDS
#endif
    /**
     * @symbol ?setupStandaloneServer@DedicatedServerCommands@@SAXAEBV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@AEAVIMinecraftApp@@AEAVLevel@@AEAVLevelStorage@@AEAVDedicatedServer@@AEAVAllowListFile@@@Z
     */
    MCAPI static void setupStandaloneServer(class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const &, class IMinecraftApp &, class Level &, class LevelStorage &, class DedicatedServer &, class AllowListFile &);

//private:

private:
MCAPI static std::vector<std::string> mSaveAllFileList;

};
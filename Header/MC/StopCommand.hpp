/**
 * @file  StopCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StopCommand.
 *
 */
class StopCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPCOMMAND
public:
    class StopCommand& operator=(class StopCommand const &) = delete;
    StopCommand(class StopCommand const &) = delete;
    StopCommand() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~StopCommand();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPCOMMAND
#endif
    /**
     * @symbol ?setup@StopCommand@@SAXAEAVCommandRegistry@@AEAVDedicatedServer@@@Z
     */
    MCAPI static void setup(class CommandRegistry &, class DedicatedServer &);

//private:

private:
MCAPI static class DedicatedServer * mServer;

};
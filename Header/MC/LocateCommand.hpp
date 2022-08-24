/**
 * @file  LocateCommand.hpp
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
 * @brief MC class LocateCommand.
 *
 */
class LocateCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCATECOMMAND
public:
    class LocateCommand& operator=(class LocateCommand const &) = delete;
    LocateCommand(class LocateCommand const &) = delete;
    LocateCommand() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~LocateCommand();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?execute@LocateCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCATECOMMAND
#endif
    /**
     * @symbol ?setup@LocateCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_executeLocateBiome@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeLocateBiome(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_executeLocateStructure@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeLocateStructure(class CommandOrigin const &, class CommandOutput &) const;

private:

};
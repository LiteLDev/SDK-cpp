/**
 * @file  GetChunkDataCommand.hpp
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
 * @brief MC class GetChunkDataCommand.
 *
 */
class GetChunkDataCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKDATACOMMAND
public:
    class GetChunkDataCommand& operator=(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1884067160
     */
    virtual ~GetChunkDataCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@GetChunkDataCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -40216087
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@GetChunkDataCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1008771680
     */
    MCAPI static void setup(class CommandRegistry &);

};
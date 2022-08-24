/**
 * @file  LessonCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LessonCommand.
 *
 */
class LessonCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONCOMMAND
public:
    class LessonCommand& operator=(class LessonCommand const &) = delete;
    LessonCommand(class LessonCommand const &) = delete;
    LessonCommand() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~LessonCommand();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?execute@LessonCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LESSONCOMMAND
#endif
    /**
     * @symbol ?setup@LessonCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};
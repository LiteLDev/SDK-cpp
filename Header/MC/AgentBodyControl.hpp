/**
 * @file  AgentBodyControl.hpp
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
 * @brief MC class AgentBodyControl.
 *
 */
class AgentBodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTBODYCONTROL
public:
    class AgentBodyControl& operator=(class AgentBodyControl const &) = delete;
    AgentBodyControl(class AgentBodyControl const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~AgentBodyControl();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?clientTick@AgentBodyControl@@UEAAXAEAVMob@@@Z
     */
    virtual void clientTick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTBODYCONTROL
#endif
    /**
     * @symbol ??0AgentBodyControl@@QEAA@XZ
     */
    MCAPI AgentBodyControl();

};
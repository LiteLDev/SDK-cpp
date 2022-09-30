/**
 * @file  ServerNetworkEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerNetworkEventCoordinator.
 *
 */
class ServerNetworkEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKEVENTCOORDINATOR
public:
    class ServerNetworkEventCoordinator& operator=(class ServerNetworkEventCoordinator const &) = delete;
    ServerNetworkEventCoordinator(class ServerNetworkEventCoordinator const &) = delete;
    ServerNetworkEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   -133730342
     * @symbol ?getServerNetworkEventHandler@ServerNetworkEventCoordinator@@QEAAAEAVServerNetworkEventHandler@@XZ
     */
    MCAPI class ServerNetworkEventHandler & getServerNetworkEventHandler();
    /**
     * @hash   1849597432
     * @symbol ?registerServerNetworkEventHandler@ServerNetworkEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VServerNetworkEventHandler@@U?$default_delete@VServerNetworkEventHandler@@@std@@@std@@@Z
     */
    MCAPI void registerServerNetworkEventHandler(std::unique_ptr<class ServerNetworkEventHandler> &&);
    /**
     * @hash   -107517519
     * @symbol ?sendEvent@ServerNetworkEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableServerNetworkGameplayEvent@W4CoordinatorResult@@@@@@@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableServerNetworkGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @hash   -201619802
     * @symbol ?sendMessage@ServerNetworkEventCoordinator@@QEAAXAEAUMessageEvent@@@Z
     */
    MCAPI void sendMessage(struct MessageEvent &);

};
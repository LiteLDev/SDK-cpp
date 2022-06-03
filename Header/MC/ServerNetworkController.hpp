// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerNetworkController {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKCONTROLLER
public:
    class ServerNetworkController& operator=(class ServerNetworkController const &) = delete;
    ServerNetworkController(class ServerNetworkController const &) = delete;
    ServerNetworkController() = delete;
#endif

public:
    /*0*/ virtual ~ServerNetworkController();
    /*1*/ virtual bool isDedicatedServer() const;
    /*2*/ virtual bool isHost(class mce::UUID const &) const;
    /*3*/ virtual bool canChangePermission(class mce::UUID const &, class ServerPlayer const &) const;
    MCAPI ServerNetworkController(bool, class mce::UUID const &, class std::function<bool (class ServerPlayer const &, enum AbilitiesIndex)>);

protected:

private:

};
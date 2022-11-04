/**
 * @file  PlayerCapabilities.hpp
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
 * @brief MC namespace PlayerCapabilities.
 *
 */
namespace PlayerCapabilities {

#define AFTER_EXTRA
// Add Member There
struct ISharedController {
    ISharedController() = delete;
    ISharedController(ISharedController const&) = delete;
    ISharedController(ISharedController const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol ?createController@PlayerCapabilities@@YA?AV?$unique_ptr@UISharedController@PlayerCapabilities@@U?$default_delete@UISharedController@PlayerCapabilities@@@std@@@std@@AEBVLevel@@@Z
     * @hash   64218448
     */
    MCAPI std::unique_ptr<struct PlayerCapabilities::ISharedController> createController(class Level const &);

};
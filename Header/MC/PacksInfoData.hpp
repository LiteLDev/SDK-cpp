/**
 * @file  MC/PacksInfoData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PacksInfoData.
 *
 */
struct PacksInfoData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSINFODATA
public:
    struct PacksInfoData& operator=(struct PacksInfoData const &) = delete;
    PacksInfoData(struct PacksInfoData const &) = delete;
    PacksInfoData() = delete;
#endif

public:
    /**
     * @hash   -1811770587
     * @symbol ?getBehaviorPackSize@PacksInfoData@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBehaviorPackSize() const;
    /**
     * @hash   1394991397
     * @symbol ?getResourcePackSize@PacksInfoData@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getResourcePackSize() const;

};
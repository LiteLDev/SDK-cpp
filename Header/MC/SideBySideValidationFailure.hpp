/**
 * @file  SideBySideValidationFailure.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideValidationFailure.
 *
 */
class SideBySideValidationFailure {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEVALIDATIONFAILURE
public:
    class SideBySideValidationFailure& operator=(class SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure(class SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure() = delete;
#endif

public:
    /**
     * @symbol ?generateMessage@SideBySideValidationFailure@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N00AEBV23@AEBVVec3@@@Z
     * @hash   87366145
     */
    MCAPI std::string generateMessage(bool, bool, bool, std::string const &, class Vec3 const &) const;
    /**
     * @symbol ??1SideBySideValidationFailure@@QEAA@XZ
     * @hash   1285012024
     */
    MCAPI ~SideBySideValidationFailure();
    /**
     * @symbol ?toString@SideBySideValidationFailure@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4FailureReason@1@@Z
     * @hash   2137667796
     */
    MCAPI static std::string toString(enum class SideBySideValidationFailure::FailureReason);

};
/**
 * @file  VolumeDefinition.hpp
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
 * @brief MC structure VolumeDefinition.
 *
 */
struct VolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITION
public:
    struct VolumeDefinition& operator=(struct VolumeDefinition const &) = delete;
    VolumeDefinition(struct VolumeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0VolumeDefinition@@QEAA@XZ
     * @hash   101602825
     */
    MCAPI VolumeDefinition();
    /**
     * @symbol ??1VolumeDefinition@@QEAA@XZ
     * @hash   -1544692441
     */
    MCAPI ~VolumeDefinition();
    /**
     * @symbol ?NAME@VolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -2063485353
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol ?bindType@VolumeDefinition@@SAXXZ
     * @hash   -1175589565
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getMaxSupportedVersion@VolumeDefinition@@SAAEBVSemVersion@@XZ
     * @hash   -300466944
     */
    MCAPI static class SemVersion const & getMaxSupportedVersion();
    /**
     * @symbol ?getMinSupportedVersion@VolumeDefinition@@SAAEBVSemVersion@@XZ
     * @hash   -1813244436
     */
    MCAPI static class SemVersion const & getMinSupportedVersion();

};
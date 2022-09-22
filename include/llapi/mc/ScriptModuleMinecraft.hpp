/**
 * @file  MC/ScriptModuleMinecraft.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
namespace Scripting {
    template <typename T>
    class ClassBindingBuilder {
        ClassBindingBuilder() = delete;
        ClassBindingBuilder(ClassBindingBuilder const&) = delete;
        ClassBindingBuilder(ClassBindingBuilder const&&) = delete;
    };
    template <typename T, typename T2>
    class EnumBindingBuilder {
        EnumBindingBuilder() = delete;
        EnumBindingBuilder(EnumBindingBuilder const&) = delete;
        EnumBindingBuilder(EnumBindingBuilder const&&) = delete;
    };
    struct Version;
};
#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptModuleMinecraft.
 *
 */
namespace ScriptModuleMinecraft {

#define AFTER_EXTRA
enum class ScriptFacing {
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};

enum class ScriptMessageSourceType;
struct ScriptNavigationResult {
public:
    bool mIsFullPath;
    std::vector<BlockPos> mPath;

public:
    struct ScriptNavigationResult& operator=(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult() = delete;

public:
    MCAPI ~ScriptNavigationResult();
};
#undef AFTER_EXTRA
    /**
     * @hash   1702767742
     * @symbol ?bindBlockLocation@ScriptModuleMinecraft@@YA?AV?$ClassBindingBuilder@VBlockPos@@@Scripting@@XZ
     */
    MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();
    /**
     * @symbol ?bindFacingEnumV010@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@W4ScriptFacing@ScriptModuleMinecraft@@W412@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum ScriptModuleMinecraft::ScriptFacing, enum ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV010();
    /**
     * @symbol ?bindFacingEnumV1@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptFacing@ScriptModuleMinecraft@@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV1();
    /**
     * @symbol ?bindMessageSourceTypeV010@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@W4ScriptMessageSourceType@ScriptModuleMinecraft@@W412@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum ScriptModuleMinecraft::ScriptMessageSourceType, enum ScriptModuleMinecraft::ScriptMessageSourceType> bindMessageSourceTypeV010();
    /**
     * @symbol ?bindMessageSourceTypeV1@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptMessageSourceType@ScriptModuleMinecraft@@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum ScriptModuleMinecraft::ScriptMessageSourceType> bindMessageSourceTypeV1();

};
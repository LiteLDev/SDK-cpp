/**
 * @file  MC/ScriptPluginPackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginPackSource.
 *
 */
class ScriptPluginPackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINPACKSOURCE
public:
    class ScriptPluginPackSource& operator=(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptPluginPackSource();
    /**
     * @hash   -1486751079
     * @vftbl  1
     * @symbol ?getManifest@ScriptPluginPackSource@@UEAAAEBVPackManifest@@XZ
     */
    virtual class PackManifest const & getManifest();
    /**
     * @hash   505324333
     * @vftbl  2
     * @symbol ?loadScripts@ScriptPluginPackSource@@UEAA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> loadScripts(std::string const &);

};
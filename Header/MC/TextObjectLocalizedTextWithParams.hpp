/**
 * @file  MC/TextObjectLocalizedTextWithParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectLocalizedTextWithParams.
 *
 */
class TextObjectLocalizedTextWithParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
public:
    class TextObjectLocalizedTextWithParams& operator=(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TextObjectLocalizedTextWithParams();
    /**
     * @hash   2087244373
     * @vftbl  1
     * @symbol ?asString@TextObjectLocalizedTextWithParams@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   1064224085
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectLocalizedTextWithParams@@UEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   -664816934
     * @vftbl  3
     * @symbol ?resolve@TextObjectLocalizedTextWithParams@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   31082737
     * @symbol ??0TextObjectLocalizedTextWithParams@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTextObjectRoot@@U?$default_delete@VTextObjectRoot@@@std@@@2@@Z
     */
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::unique_ptr<class TextObjectRoot>);
    /**
     * @hash   -1546852308
     * @symbol ??0TextObjectLocalizedTextWithParams@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@Z
     */
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const &);

};
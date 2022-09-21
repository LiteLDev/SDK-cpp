/**
 * @file  CommandOutput.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandOutputParameter.hpp"
#include "CommandOrigin.hpp"
#include "Command.hpp"
#include "ServerPlayer.hpp"
#include "../utils/PluginOwnData.h"
#include "../I18nAPI.h"

#define POD_COMMANDOUTPUT_LANGCODE ("_ll_plugin_cmdoutp_langcode_" + std::to_string((uint64_t)this))
#undef BEFORE_EXTRA

/**
 * @brief Command execution output
 *
 */
class CommandOutput {

#define AFTER_EXTRA // Add members here
public:
    /**
     * @brief Output a normal message.
     *
     * @param str The message
     */
    LIAPI void addMessage(const std::string& str);

    /**
     * @brief Output a success message.
     *
     * @param str The message
     */
    LIAPI void success(const string& str);

    /**
     * @brief Output a error message.
     *
     * @param str The message
     */
    LIAPI void error(const string& str);

    inline void setLanguageCode(const std::string& code = "") {
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }

    inline void setLanguageCode(const CommandOrigin& ori) {
        std::string code = "en_US";
        if (PluginOwnData::has(I18nBase::POD_KEY)) {
            auto& i18n = PluginOwnData::get<I18nBase>(I18nBase::POD_KEY);
            switch ((OriginType)ori.getOriginType()) {
                case OriginType::Player:
                    code = ori.getPlayer()->getLanguageCode();
                    break;
                default:
                    code = i18n.getDefaultLocaleName();
                    break;
            }
        }
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }

    template <typename... Args> inline void trAddMessage(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->addMessage(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->addMessage(tr(format, std::forward<Args>(args)...));
    }

    template <typename... Args> inline void trSuccess(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->success(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->success(tr(format, std::forward<Args>(args)...));
    }

    template <typename... Args> inline void trError(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->error(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->error(tr(format, std::forward<Args>(args)...));
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUT
public:
    class CommandOutput& operator=(class CommandOutput const&) = delete;
    CommandOutput() = delete;
#endif

public:
    /**
     * @symbol ??0CommandOutput@@QEAA@W4CommandOutputType@@@Z
     * @hash   -1906512777
     */
    MCAPI CommandOutput(enum class CommandOutputType);
    /**
     * @symbol ??0CommandOutput@@QEAA@AEBV0@@Z
     * @hash   -1418144527
     */
    MCAPI CommandOutput(class CommandOutput const&);
    /**
     * @symbol ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1625676890
     */
    MCAPI void addToResultList(std::string const&, std::string const&);
    /**
     * @symbol
     * ?addToResultList@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     * @hash   -2019758587
     */
    MCAPI void addToResultList(std::string const&, class Actor const&);
    /**
     * @symbol ?empty@CommandOutput@@QEBA_NXZ
     * @hash   2114801942
     */
    MCAPI bool empty() const;
    /**
     * @symbol
     * ?error@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
     * @hash   1420096547
     */
    MCAPI void error(std::string const&, std::vector<class CommandOutputParameter> const&);
    /**
     * @symbol
     * ?forceOutput@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
     * @hash   1031751947
     */
    MCAPI void forceOutput(std::string const&, std::vector<class CommandOutputParameter> const&);
    /**
     * @symbol ?getData@CommandOutput@@QEBAAEBVCommandPropertyBag@@XZ
     * @hash   -1317558974
     */
    MCAPI class CommandPropertyBag const& getData() const;
    /**
     * @symbol
     * ?getMessages@CommandOutput@@QEBAAEBV?$vector@VCommandOutputMessage@@V?$allocator@VCommandOutputMessage@@@std@@@std@@XZ
     * @hash   -788988960
     */
    MCAPI std::vector<class CommandOutputMessage> const& getMessages() const;
    /**
     * @symbol ?getSuccessCount@CommandOutput@@QEBAHXZ
     * @hash   1360894636
     */
    MCAPI int getSuccessCount() const;
    /**
     * @symbol ?getType@CommandOutput@@QEBA?AW4CommandOutputType@@XZ
     * @hash   -1159705490
     */
    MCAPI enum class CommandOutputType getType() const;
    /**
     * @symbol ?hasPlayerText@CommandOutput@@QEBA_NXZ
     * @hash   1611387254
     */
    MCAPI bool hasPlayerText() const;
    /**
     * @symbol
     * ?load@CommandOutput@@QEAAXW4CommandOutputType@@H$$QEAV?$vector@VCommandOutputMessage@@V?$allocator@VCommandOutputMessage@@@std@@@std@@$$QEAV?$unique_ptr@VCommandPropertyBag@@U?$default_delete@VCommandPropertyBag@@@std@@@4@@Z
     * @hash   847267746
     */
    MCAPI void load(enum class CommandOutputType, int, std::vector<class CommandOutputMessage>&&,
                    std::unique_ptr<class CommandPropertyBag>&&);
    /**
     * @symbol ?setHasPlayerText@CommandOutput@@QEAAXXZ
     * @hash   1334051535
     */
    MCAPI void setHasPlayerText();
    /**
     * @symbol
     * ?success@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@@Z
     * @hash   1780476233
     */
    MCAPI void success(std::string const&, std::vector<class CommandOutputParameter> const&);
    /**
     * @symbol ?success@CommandOutput@@QEAAXXZ
     * @hash   163386203
     */
    MCAPI void success();
    /**
     * @symbol ?wantsData@CommandOutput@@QEBA_NXZ
     * @hash   -1266489514
     */
    MCAPI bool wantsData() const;
    /**
     * @symbol ??1CommandOutput@@QEAA@XZ
     * @hash   56722184
     */
    MCAPI ~CommandOutput();

    // private:
    /**
     * @symbol
     * ?addMessage@CommandOutput@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@std@@@3@W4CommandOutputMessageType@@@Z
     * @hash   -2124484666
     */
    MCAPI void addMessage(std::string const&, std::vector<class CommandOutputParameter> const&,
                          enum class CommandOutputMessageType);

private:
};
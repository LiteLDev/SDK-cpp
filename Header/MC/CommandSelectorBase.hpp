/**
 * @file  CommandSelectorBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ActorDefinitionIdentifier.hpp"
#include "CommandPosition.hpp"
#include <functional>
class CommandOrigin;
class Actor;
class Player;

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandSelectorBase.
 *
 */
class CommandSelectorBase {

#define AFTER_EXTRA
// Add Member There
private:
uint32_t version;
uint32_t type;
uint32_t order;
std::vector<InvertableFilter<std::string>> nameFilters;
char pad_0040[24];
std::vector<InvertableFilter<ActorDefinitionIdentifier>> familyFilters;
std::vector<InvertableFilter<std::string>> tagFilters;
std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> customFilters;
CommandPosition position;
BlockPos box;
float radiusMin;
float radiusMax;
uint64_t resultCount;
bool includeDeadPlayers;
char pad_0185[5];
bool playerOnly;
char explicitIdSelector;
char unk192;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTORBASE
public:
    class CommandSelectorBase& operator=(class CommandSelectorBase const &) = delete;
    CommandSelectorBase(class CommandSelectorBase const &) = delete;
    CommandSelectorBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDSELECTORBASE
#endif
    /**
     * @symbol ?addFamilyFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addFilter@CommandSelectorBase@@QEAAXV?$function@$$A6A_NAEBVCommandOrigin@@AEBVActor@@@Z@std@@@Z
     */
    MCAPI void addFilter(class std::function<bool (class CommandOrigin const &, class Actor const &)>);
    /**
     * @symbol ?addGameModeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@W4GameType@@@@@Z
     */
    MCAPI void addGameModeFilter(struct InvertableFilter<enum GameType> const &);
    /**
     * @symbol ?addHasItemFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVCommandIntegerRange@@W4EquipmentSlot@@1@Z
     */
    MCAPI void addHasItemFilter(std::string const &, int, class CommandIntegerRange const &, enum EquipmentSlot, class CommandIntegerRange const &);
    /**
     * @symbol ?addLevelFilter@CommandSelectorBase@@QEAAXAEBU?$pair@HH@std@@@Z
     */
    MCAPI void addLevelFilter(struct std::pair<int, int> const &);
    /**
     * @symbol ?addNameFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addNameFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addScoreFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandIntegerRange@@V?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@3@@Z
     */
    MCAPI void addScoreFilter(std::string const &, class CommandIntegerRange const &, class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @symbol ?addTagFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addTagFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addTypeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addXRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     */
    MCAPI void addXRotationFilter(struct std::pair<float, float> const &);
    /**
     * @symbol ?addYRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     */
    MCAPI void addYRotationFilter(struct std::pair<float, float> const &);
    /**
     * @symbol ?compile@CommandSelectorBase@@QEAA_NAEBVCommandOrigin@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool compile(class CommandOrigin const &, std::string &);
    /**
     * @symbol ?getName@CommandSelectorBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ?getOrder@CommandSelectorBase@@QEBA?AW4CommandSelectionOrder@@XZ
     */
    MCAPI enum CommandSelectionOrder getOrder() const;
    /**
     * @symbol ?hasName@CommandSelectorBase@@QEBA_NXZ
     */
    MCAPI bool hasName() const;
    /**
     * @symbol ?isExplicitIdSelector@CommandSelectorBase@@QEBA_NXZ
     */
    MCAPI bool isExplicitIdSelector() const;
    /**
     * @symbol ?setBox@CommandSelectorBase@@QEAAXVBlockPos@@@Z
     */
    MCAPI void setBox(class BlockPos);
    /**
     * @symbol ?setExcludeAgents@CommandSelectorBase@@QEAAX_N@Z
     */
    MCAPI void setExcludeAgents(bool);
    /**
     * @symbol ?setExplicitIdSelector@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setExplicitIdSelector(std::string const &);
    /**
     * @symbol ?setIncludeDeadPlayers@CommandSelectorBase@@QEAAX_N@Z
     */
    MCAPI void setIncludeDeadPlayers(bool);
    /**
     * @symbol ?setOrder@CommandSelectorBase@@QEAAXW4CommandSelectionOrder@@@Z
     */
    MCAPI void setOrder(enum CommandSelectionOrder);
    /**
     * @symbol ?setPosition@CommandSelectorBase@@QEAAXAEBVCommandPosition@@@Z
     */
    MCAPI void setPosition(class CommandPosition const &);
    /**
     * @symbol ?setRadiusMax@CommandSelectorBase@@QEAAXM@Z
     */
    MCAPI void setRadiusMax(float);
    /**
     * @symbol ?setRadiusMin@CommandSelectorBase@@QEAAXM@Z
     */
    MCAPI void setRadiusMin(float);
    /**
     * @symbol ?setResultCount@CommandSelectorBase@@QEAAX_K_N@Z
     */
    MCAPI void setResultCount(unsigned __int64, bool);
    /**
     * @symbol ?setType@CommandSelectorBase@@QEAAXW4CommandSelectionType@@@Z
     */
    MCAPI void setType(enum CommandSelectionType);
    /**
     * @symbol ?setVersion@CommandSelectorBase@@QEAAXH@Z
     */
    MCAPI void setVersion(int);
    /**
     * @symbol ??1CommandSelectorBase@@QEAA@XZ
     */
    MCAPI ~CommandSelectorBase();

//protected:
    /**
     * @symbol ??0CommandSelectorBase@@IEAA@_N@Z
     */
    MCAPI CommandSelectorBase(bool);
    /**
     * @symbol ?newResults@CommandSelectorBase@@IEBA?AV?$shared_ptr@V?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@std@@AEBVCommandOrigin@@@Z
     */
    MCAPI class std::shared_ptr<std::vector<class Actor *>> newResults(class CommandOrigin const &) const;

//private:
    /**
     * @symbol ?compareName@CommandSelectorBase@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool compareName(std::string const &) const;
    /**
     * @symbol ?filter@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@@Z
     */
    MCAPI bool filter(class CommandOrigin const &, class Actor &) const;
    /**
     * @symbol ?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const &) const;
    /**
     * @symbol ?matchFamily@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchFamily(class Actor const &) const;
    /**
     * @symbol ?matchName@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchName(class Actor const &) const;
    /**
     * @symbol ?matchTag@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchTag(class Actor const &) const;
    /**
     * @symbol ?matchType@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchType(class Actor const &) const;

protected:

private:

};
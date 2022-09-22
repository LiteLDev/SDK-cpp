/**
 * @file  MC/BaseCommandBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseCommandBlock.
 *
 */
class BaseCommandBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECOMMANDBLOCK
public:
    class BaseCommandBlock& operator=(class BaseCommandBlock const &) = delete;
    BaseCommandBlock(class BaseCommandBlock const &) = delete;
#endif

public:
    /**
     * @hash   137542111
     * @symbol ??0BaseCommandBlock@@QEAA@XZ
     */
    MCAPI BaseCommandBlock();
    /**
     * @hash   -361364610
     * @symbol ?getCommand@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @hash   509338114
     * @symbol ?getLastOutput@BaseCommandBlock@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getLastOutput() const;
    /**
     * @hash   -891478036
     * @symbol ?getName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -1073249794
     * @symbol ?getRawName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRawName() const;
    /**
     * @hash   -1929894650
     * @symbol ?getSuccessCount@BaseCommandBlock@@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @hash   -685625624
     * @symbol ?getTickDelay@BaseCommandBlock@@QEBAHXZ
     */
    MCAPI int getTickDelay() const;
    /**
     * @hash   2020066756
     * @symbol ?getTrackOutput@BaseCommandBlock@@QEBA_NXZ
     */
    MCAPI bool getTrackOutput() const;
    /**
     * @hash   -1585209745
     * @symbol ?load@BaseCommandBlock@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1919026848
     * @symbol ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBUActorUniqueID@@@Z
     */
    MCAPI bool performCommand(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @hash   1932936428
     * @symbol ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@AEA_N@Z
     */
    MCAPI bool performCommand(class BlockSource &, class BlockPos const &, bool &);
    /**
     * @hash   -2093985289
     * @symbol ?save@BaseCommandBlock@@QEBA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool save(class CompoundTag &) const;
    /**
     * @hash   528448848
     * @symbol ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setCommand(class BlockSource &, struct ActorUniqueID const &, std::string const &);
    /**
     * @hash   -438575718
     * @symbol ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setCommand(class BlockSource &, class BlockPos const &, std::string const &);
    /**
     * @hash   2038842078
     * @symbol ?setLastOutput@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void setLastOutput(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1373244302
     * @symbol ?setName@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @hash   -1830062842
     * @symbol ?setShouldExecuteOnFirstTick@BaseCommandBlock@@QEAAX_N@Z
     */
    MCAPI void setShouldExecuteOnFirstTick(bool);
    /**
     * @hash   -291550424
     * @symbol ?setSuccessCount@BaseCommandBlock@@QEAAXH@Z
     */
    MCAPI void setSuccessCount(int);
    /**
     * @hash   743507734
     * @symbol ?setTickDelay@BaseCommandBlock@@QEAAXH@Z
     */
    MCAPI void setTickDelay(int);
    /**
     * @hash   1908874944
     * @symbol ?setTrackOutput@BaseCommandBlock@@QEAAX_N@Z
     */
    MCAPI void setTrackOutput(bool);
    /**
     * @hash   -2063574864
     * @symbol ?shouldExecuteOnFirstTick@BaseCommandBlock@@QEBA_NXZ
     */
    MCAPI bool shouldExecuteOnFirstTick() const;
    /**
     * @hash   1247709949
     * @symbol ??1BaseCommandBlock@@QEAA@XZ
     */
    MCAPI ~BaseCommandBlock();

//private:
    /**
     * @hash   -885690054
     * @symbol ?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z
     */
    MCAPI bool _performCommand(class BlockSource &, class CommandOrigin const &, bool &);
    /**
     * @hash   889443063
     * @symbol ?_setCommand@BaseCommandBlock@@AEAAXAEAVBlockSource@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _setCommand(class BlockSource &, class CommandOrigin const &, std::string const &);
    /**
     * @hash   -699496612
     * @symbol ?compile@BaseCommandBlock@@AEAAXAEBVCommandOrigin@@AEAVLevel@@@Z
     */
    MCAPI void compile(class CommandOrigin const &, class Level &);

private:
    /**
     * @hash   -1301214322
     * @symbol ?DefaultCommandBlockName@BaseCommandBlock@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DefaultCommandBlockName;

};
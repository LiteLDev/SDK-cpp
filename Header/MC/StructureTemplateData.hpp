/**
 * @file  StructureTemplateData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "StructureBlockPalette.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplateData.
 *
 */
class StructureTemplateData {

#define AFTER_EXTRA
// Add Member There
public:
    void* __vftable;
    int mFormatVersion;
    BlockPos mSize;
    BlockPos mStructureWorldOrigin;
    std::vector<int> mBlockIndices;
    std::vector<int> mExtraBlockIndices;
    std::unordered_map<std::string, StructureBlockPalette> mPalettes;
    std::vector<std::unique_ptr<CompoundTag>> mEntityData;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATA
public:
    class StructureTemplateData& operator=(class StructureTemplateData const &) = delete;
    StructureTemplateData(class StructureTemplateData const &) = delete;
#endif

public:
    /**
     * @symbol ??0StructureTemplateData@@QEAA@XZ
     * @hash   416299827
     */
    MCAPI StructureTemplateData();
    /**
     * @symbol ?addEntityData@StructureTemplateData@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     * @hash   -1318284414
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?addPalette@StructureTemplateData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VStructureBlockPalette@@@Z
     * @hash   1469284275
     */
    MCAPI void addPalette(std::string const &, class StructureBlockPalette);
    /**
     * @symbol ?clear@StructureTemplateData@@QEAAXXZ
     * @hash   -2140107265
     */
    MCAPI void clear();
    /**
     * @symbol ?getBlockIndices@StructureTemplateData@@QEBAAEBV?$vector@HV?$allocator@H@std@@@std@@XZ
     * @hash   128223182
     */
    MCAPI std::vector<int> const & getBlockIndices() const;
    /**
     * @symbol ?getEntityData@StructureTemplateData@@QEBAAEBV?$vector@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$allocator@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@2@@std@@XZ
     * @hash   -751372879
     */
    MCAPI std::vector<std::unique_ptr<class CompoundTag>> const & getEntityData() const;
    /**
     * @symbol ?getExtraBlockIndices@StructureTemplateData@@QEBAAEBV?$vector@HV?$allocator@H@std@@@std@@XZ
     * @hash   1064370368
     */
    MCAPI std::vector<int> const & getExtraBlockIndices() const;
    /**
     * @symbol ?getPalette@StructureTemplateData@@QEBAPEBVStructureBlockPalette@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   886952106
     */
    MCAPI class StructureBlockPalette const * getPalette(std::string const &) const;
    /**
     * @symbol ?getSize@StructureTemplateData@@QEBAAEBVBlockPos@@XZ
     * @hash   -515151682
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @symbol ?getStructureWorldOrigin@StructureTemplateData@@QEBAAEBVBlockPos@@XZ
     * @hash   -395195762
     */
    MCAPI class BlockPos const & getStructureWorldOrigin() const;
    /**
     * @symbol ?load@StructureTemplateData@@QEAA_NAEBVCompoundTag@@@Z
     * @hash   727985541
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @symbol ?save@StructureTemplateData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -585366074
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ?setBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
     * @hash   1537810278
     */
    MCAPI void setBlockIndices(std::vector<int>);
    /**
     * @symbol ?setExtraBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
     * @hash   348698592
     */
    MCAPI void setExtraBlockIndices(std::vector<int>);
    /**
     * @symbol ?setSize@StructureTemplateData@@QEAAXAEBVBlockPos@@@Z
     * @hash   970604730
     */
    MCAPI void setSize(class BlockPos const &);
    /**
     * @symbol ?setStructureWorldOrigin@StructureTemplateData@@QEAAXAEBVBlockPos@@@Z
     * @hash   -344982966
     */
    MCAPI void setStructureWorldOrigin(class BlockPos const &);
    /**
     * @symbol ?DEFAULT_PALETTE_NAME@StructureTemplateData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   960073287
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME;

//protected:
    /**
     * @symbol ?_parseBlockIndices@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     * @hash   -1470047898
     */
    MCAPI enum class StructureLoadResult _parseBlockIndices(class CompoundTag const &);
    /**
     * @symbol ?_parseEntities@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     * @hash   -447112337
     */
    MCAPI enum class StructureLoadResult _parseEntities(class CompoundTag const &);
    /**
     * @symbol ?_parseFormatVersion@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     * @hash   -1317705225
     */
    MCAPI enum class StructureLoadResult _parseFormatVersion(class CompoundTag const &);
    /**
     * @symbol ?_parsePalettes@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     * @hash   -225618088
     */
    MCAPI enum class StructureLoadResult _parsePalettes(class CompoundTag const &);
    /**
     * @symbol ?_parseSize@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     * @hash   -1835999937
     */
    MCAPI enum class StructureLoadResult _parseSize(class CompoundTag const &);
    /**
     * @symbol ?_saveBlockIndices@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     * @hash   815076746
     */
    MCAPI void _saveBlockIndices(class CompoundTag &) const;
    /**
     * @symbol ?_savePalettes@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     * @hash   -716360436
     */
    MCAPI void _savePalettes(class CompoundTag &) const;
    /**
     * @symbol ?_saveStructureTag@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     * @hash   -1702262691
     */
    MCAPI void _saveStructureTag(class CompoundTag &) const;

//private:
    /**
     * @symbol ?_contentErrorMissingField@StructureTemplateData@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1387675124
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};
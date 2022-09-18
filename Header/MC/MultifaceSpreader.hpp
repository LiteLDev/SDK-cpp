/**
 * @file  MultifaceSpreader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MultifaceSpreader.
 *
 */
class MultifaceSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACESPREADER
public:
    class MultifaceSpreader& operator=(class MultifaceSpreader const &) = delete;
    MultifaceSpreader(class MultifaceSpreader const &) = delete;
    MultifaceSpreader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1690183524
     */
    virtual ~MultifaceSpreader();
    /**
     * @vftbl  1
     * @symbol ?_canSpreadFrom@MultifaceSpreader@@MEBA_NAEBVBlock@@E@Z
     * @hash   -136461590
     */
    virtual bool _canSpreadFrom(class Block const &, unsigned char) const;
    /**
     * @vftbl  2
     * @symbol ?_canSpreadInto@MultifaceSpreader@@MEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     * @hash   -328557366
     */
    virtual bool _canSpreadInto(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  3
     * @symbol ?_isOtherBlockValidAsSource@MultifaceSpreader@@MEBA_NAEBVBlock@@@Z
     * @hash   -495593028
     */
    virtual bool _isOtherBlockValidAsSource(class Block const &) const;
    /**
     * @symbol ??0MultifaceSpreader@@QEAA@AEBV?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@@Z
     * @hash   652383911
     */
    MCAPI MultifaceSpreader(std::vector<enum class MultifaceSpreader::SpreadType> const &);
    /**
     * @symbol ?getSpreadFromFaceTowardDirection@MultifaceSpreader@@QEBA?AV?$optional@U?$pair@$$CBVBlockPos@@$$CBE@std@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     * @hash   1962286482
     */
    MCAPI class std::optional<struct std::pair<class BlockPos const, unsigned char const>> getSpreadFromFaceTowardDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @symbol ?spreadFromAllFacesTowardAllDirections@MultifaceSpreader@@QEBAHAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
     * @hash   35021424
     */
    MCAPI int spreadFromAllFacesTowardAllDirections(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;
    /**
     * @symbol ?spreadFromFaceTowardDirection@MultifaceSpreader@@QEBA_NAEAVBlockSource@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     * @hash   1271440860
     */
    MCAPI bool spreadFromFaceTowardDirection(class BlockSource &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @symbol ?spreadFromFaceTowardDirectionWorldGen@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     * @hash   -1285833384
     */
    MCAPI bool spreadFromFaceTowardDirectionWorldGen(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @symbol ?spreadFromFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@E@Z
     * @hash   -768322148
     */
    MCAPI bool spreadFromFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?spreadFromRandomFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
     * @hash   1584472464
     */
    MCAPI bool spreadFromRandomFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;
    /**
     * @symbol ?ALL_SPREAD_TYPES@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
     * @hash   -2146446941
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES;
    /**
     * @symbol ?SAME_POSITION_ONLY@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
     * @hash   -577421257
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const SAME_POSITION_ONLY;

//protected:
    /**
     * @symbol ?_canSpreadToFace@MultifaceSpreader@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     * @hash   -1327547291
     */
    MCAPI bool _canSpreadToFace(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;

protected:

};
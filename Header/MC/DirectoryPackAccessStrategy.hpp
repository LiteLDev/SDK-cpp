/**
 * @file  DirectoryPackAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackAccessStrategy.
 *
 */
class DirectoryPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKACCESSSTRATEGY
public:
    class DirectoryPackAccessStrategy& operator=(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -845785205
     */
    virtual ~DirectoryPackAccessStrategy();
    /**
     * @vftbl  1
     * @symbol ?getPackSize@DirectoryPackAccessStrategy@@UEBA_KXZ
     * @hash   940738691
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @vftbl  2
     * @symbol ?getPackLocation@DirectoryPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     * @hash   -1114615343
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @vftbl  3
     * @symbol ?getPackName@DirectoryPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1533225093
     */
    virtual std::string const & getPackName() const;
    /**
     * @vftbl  4
     * @symbol ?isWritable@DirectoryPackAccessStrategy@@UEBA_NXZ
     * @hash   1706961701
     */
    virtual bool isWritable() const;
    /**
     * @vftbl  5
     * @symbol ?setIsTrusted@DirectoryPackAccessStrategy@@UEAAX_N@Z
     * @hash   -1010272777
     */
    virtual void setIsTrusted(bool);
    /**
     * @vftbl  6
     * @symbol ?isTrusted@DirectoryPackAccessStrategy@@UEBA_NXZ
     * @hash   1364513560
     */
    virtual bool isTrusted() const;
    /**
     * @vftbl  7
     * @symbol ?hasAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     * @hash   -1055537208
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @vftbl  8
     * @symbol ?hasFolder@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     * @hash   -1567732960
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @vftbl  9
     * @symbol ?getAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1714449659
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @vftbl  10
     * @symbol ?deleteAsset@DirectoryPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     * @hash   -1359489025
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @vftbl  11
     * @symbol ?writeAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1721922412
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @vftbl  12
     * @symbol ?forEachIn@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     * @hash   -1437813365
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @vftbl  13
     * @symbol ?forEachInAssetSet@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
     * @hash   -874616095
     */
    virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /**
     * @vftbl  14
     * @symbol ?getStrategyType@DirectoryPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     * @hash   1728318940
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @vftbl  16
     * @symbol ?createSubPack@DirectoryPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     * @hash   -1011642918
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @vftbl  18
     * @symbol ?canRecurse@DirectoryPackAccessStrategy@@UEBA_NXZ
     * @hash   -1615311382
     */
    virtual bool canRecurse() const;
    /**
     * @vftbl  19
     * @symbol ?unload@DirectoryPackAccessStrategy@@UEAAXXZ
     * @hash   -2144763351
     */
    virtual void unload();
    /**
     * @symbol ??0DirectoryPackAccessStrategy@@QEAA@AEBVResourceLocation@@_N@Z
     * @hash   1421382469
     */
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const &, bool);

};
/**
 * @file  PackAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackAccessStrategy.
 *
 */
class PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKACCESSSTRATEGY
public:
    class PackAccessStrategy& operator=(class PackAccessStrategy const &) = delete;
    PackAccessStrategy(class PackAccessStrategy const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~PackAccessStrategy();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getPackSize@ZipPackAccessStrategy@@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const = 0;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getPackLocation@ZipPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const = 0;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getPackName@ZipPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getPackName() const = 0;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?isWritable@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const = 0;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?setIsTrusted@ZipPackAccessStrategy@@UEAAX_N@Z
     */
    virtual void setIsTrusted(bool) = 0;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?isTrusted@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const = 0;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?hasAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const = 0;
    /**
     * @note   Virtual function table index: 8
     * @symbol ?hasFolder@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     */
    virtual bool hasFolder(class Core::Path const &) const = 0;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const = 0;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?deleteAsset@ZipPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &) = 0;
    /**
     * @note   Virtual function table index: 11
     * @symbol ?writeAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &) = 0;
    /**
     * @note   Virtual function table index: 12
     * @symbol ?forEachIn@ZipPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const = 0;
    /**
     * @note   Virtual function table index: 13
     * @symbol ?forEachInAssetSet@PackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
     */
    virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /**
     * @note   Virtual function table index: 14
     * @symbol ?getStrategyType@ZipPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     */
    virtual enum PackAccessStrategyType getStrategyType() const = 0;
    /**
     * @note   Virtual function table index: 15
     * @symbol ?getSubPath@PackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getSubPath() const;
    /**
     * @note   Virtual function table index: 16
     * @symbol ?createSubPack@ZipPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const = 0;
    /**
     * @note   Virtual function table index: 17
     * @symbol ?generateAssetSet@PackAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     */
    virtual enum PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @note   Virtual function table index: 18
     * @symbol ?canRecurse@PackAccessStrategy@@UEBA_NXZ
     */
    virtual bool canRecurse() const;
    /**
     * @note   Virtual function table index: 19
     * @symbol ?unload@ZipPackAccessStrategy@@UEAAXXZ
     */
    virtual void unload() = 0;
    /**
     * @note   Virtual function table index: 20
     * @symbol ?hasUpgradeFiles@PackAccessStrategy@@UEBA_NXZ
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @note   Virtual function table index: 21
     * @symbol ?readContentIdentity@PackAccessStrategy@@UEBA?AVContentIdentity@@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKACCESSSTRATEGY
#endif
    /**
     * @symbol ??0PackAccessStrategy@@QEAA@XZ
     */
    MCAPI PackAccessStrategy();
    /**
     * @symbol ?hasGeneratedAssetSet@PackAccessStrategy@@QEBA_NXZ
     */
    MCAPI bool hasGeneratedAssetSet() const;
MCAPI static class Core::PathBuffer<std::string> const PACK_IMPORT_LOCK_FILE;

//protected:
    /**
     * @symbol ?_addToAssetSet@PackAccessStrategy@@IEAAXAEBVPath@Core@@@Z
     */
    MCAPI void _addToAssetSet(class Core::Path const &);
    /**
     * @symbol ?_deleteFromAssetSet@PackAccessStrategy@@IEAAXAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    MCAPI void _deleteFromAssetSet(class Core::PathBuffer<std::string> const &);
    /**
     * @symbol ?_isInAssetSet@PackAccessStrategy@@IEBA_NAEBVPath@Core@@@Z
     */
    MCAPI bool _isInAssetSet(class Core::Path const &) const;

protected:

};
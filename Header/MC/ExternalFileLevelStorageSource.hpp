// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExternalFileLevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALFILELEVELSTORAGESOURCE
public:
    class ExternalFileLevelStorageSource& operator=(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource() = delete;
#endif

public:
    /*0*/ virtual ~ExternalFileLevelStorageSource();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual class LevelData getLevelData(std::string const &) const;
    /*3*/ virtual class Core::Result getLevelData(std::string const &, class LevelData &) const;
    /*4*/ virtual void saveLevelData(std::string const &, class LevelData const &);
    /*5*/ virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>> &);
    /*6*/ virtual std::unique_ptr<class LevelStorage> createLevelStorage(class Scheduler &, std::string const &, class ContentIdentity const &, class IContentKeyProvider const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, std::unique_ptr<class LevelStorageEventing>);
    /*7*/ virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(std::string const &, class ContentIdentity const &, class IContentKeyProvider const &);
    /*8*/ virtual bool isNewLevelIdAcceptable(std::string const &);
    /*9*/ virtual void deleteLevel(std::string const &);
    /*10*/ virtual bool renameLevel(std::string const &, std::string const &);
    /*11*/ virtual void renameLevel(class LevelData &, class Core::Path const &, std::string const &);
    /*12*/ virtual bool createBackupCopyOfWorld(std::string const &, std::string const &, std::string const &);
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual bool isLevelMarkedForSync(class Core::Path const &) const;
    /*17*/ virtual bool isLevelPartiallyCopied(class Core::Path const &) const;
    /*18*/ virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const &) const;
    /*19*/ virtual class Core::PathBuffer<std::string> const getBasePath() const;
    /*20*/ virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const &) const;
    /*21*/ virtual class Core::PathBuffer<std::string> const getPathToLevelInfo(std::string const &, bool) const;
    /*
    inline bool requiresConversion(std::string const & a0){
        bool (ExternalFileLevelStorageSource::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?requiresConversion@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline bool isConvertible(std::string const & a0){
        bool (ExternalFileLevelStorageSource::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?isConvertible@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline bool isBetaRetailLevel(std::string const & a0) const{
        bool (ExternalFileLevelStorageSource::*rv)(std::string const &) const;
        *((void**)&rv) = dlsym("?isBetaRetailLevel@ExternalFileLevelStorageSource@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline bool convertLevel(std::string const & a0, class ProgressListener * a1){
        bool (ExternalFileLevelStorageSource::*rv)(std::string const &, class ProgressListener *);
        *((void**)&rv) = dlsym("?convertLevel@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVProgressListener@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class ProgressListener *>(a1));
    }
    */
    MCAPI ExternalFileLevelStorageSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class SaveTransactionManager>> const &);

protected:

private:

};
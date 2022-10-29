/**
 * @file  ExperienceCostCommitObject.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceCostCommitObject.
 *
 */
class ExperienceCostCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCECOSTCOMMITOBJECT
public:
    class ExperienceCostCommitObject& operator=(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1961760919
     */
    virtual ~ExperienceCostCommitObject();
    /**
     * @vftbl  1
     * @symbol ?append@ExperienceCostCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
     * @hash   -197081198
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @vftbl  2
     * @symbol ?canCommit@ExperienceCostCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   1620897579
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @vftbl  3
     * @symbol ?commit@ExperienceCostCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
     * @hash   944162302
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @symbol ??0ExperienceCostCommitObject@@QEAA@H@Z
     * @hash   1503330242
     */
    MCAPI ExperienceCostCommitObject(int);

};
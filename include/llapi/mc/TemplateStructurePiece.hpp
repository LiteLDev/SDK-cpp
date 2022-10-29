/**
 * @file  TemplateStructurePiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TemplateStructurePiece.
 *
 */
class TemplateStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPLATESTRUCTUREPIECE
public:
    class TemplateStructurePiece& operator=(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -559991137
     */
    virtual ~TemplateStructurePiece();
    /**
     * @vftbl  1
     * @symbol ?moveBoundingBox@TemplateStructurePiece@@UEAAXHHH@Z
     * @hash   -1494611753
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl  4
     * @symbol ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1530140302
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ??0TemplateStructurePiece@@QEAA@H@Z
     * @hash   1510414410
     */
    MCAPI TemplateStructurePiece(int);

//protected:
    /**
     * @symbol ?_setup@TemplateStructurePiece@@IEAAXAEAVLegacyStructureTemplate@@AEBVLegacyStructureSettings@@AEBVBlockPos@@@Z
     * @hash   -966842830
     */
    MCAPI void _setup(class LegacyStructureTemplate &, class LegacyStructureSettings const &, class BlockPos const &);

//private:
    /**
     * @symbol ?_setBoundingBoxFromTemplate@TemplateStructurePiece@@AEAAXXZ
     * @hash   -1551121105
     */
    MCAPI void _setBoundingBoxFromTemplate();

protected:

private:

};
/**
 * @file  SeatDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SeatDescription.
 *
 */
struct SeatDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEATDESCRIPTION
public:
    SeatDescription() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEATDESCRIPTION
#endif
    /**
     * @symbol ??0SeatDescription@@QEAA@AEBU0@@Z
     */
    MCAPI SeatDescription(struct SeatDescription const &);
    /**
     * @symbol ?addRotationExpressionNode@SeatDescription@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void addRotationExpressionNode(class ExpressionNode const &);
    /**
     * @symbol ??4SeatDescription@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription const &);
    /**
     * @symbol ??4SeatDescription@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription &&);
    /**
     * @symbol ??8SeatDescription@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct SeatDescription const &) const;
    /**
     * @symbol ??1SeatDescription@@QEAA@XZ
     */
    MCAPI ~SeatDescription();
MCAPI static struct SeatDescription const EMPTY;

};
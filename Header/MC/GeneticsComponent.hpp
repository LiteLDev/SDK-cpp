/**
 * @file  GeneticsComponent.hpp
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
 * @brief MC class GeneticsComponent.
 *
 */
class GeneticsComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct Gene {
    Gene() = delete;
    Gene(Gene const&) = delete;
    Gene(Gene const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICSCOMPONENT
public:
    class GeneticsComponent& operator=(class GeneticsComponent const &) = delete;
    GeneticsComponent(class GeneticsComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENETICSCOMPONENT
#endif
    /**
     * @symbol ??0GeneticsComponent@@QEAA@XZ
     */
    MCAPI GeneticsComponent();
    /**
     * @symbol ?addAdditionalSaveData@GeneticsComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?buildDebugInfo@GeneticsComponent@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void buildDebugInfo(std::string &) const;
    /**
     * @symbol ?findGene@GeneticsComponent@@QEAAPEAUGene@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct GeneticsComponent::Gene * findGene(std::string const &);
    /**
     * @symbol ?fireGeneEvents@GeneticsComponent@@QEBAXAEAVActor@@@Z
     */
    MCAPI void fireGeneEvents(class Actor &) const;
    /**
     * @symbol ?initializeGenesFromParents@GeneticsComponent@@QEAAXAEAVActor@@00@Z
     */
    MCAPI void initializeGenesFromParents(class Actor &, class Actor &, class Actor &);
    /**
     * @symbol ??4GeneticsComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class GeneticsComponent & operator=(class GeneticsComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@GeneticsComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
MCAPI static int const INVALID_ALLELE_VALUE;

//private:
    /**
     * @symbol ?_crossParentGenes@GeneticsComponent@@AEAA?AUGene@1@AEBUGeneDefinition@@AEAU21@1@Z
     */
    MCAPI struct GeneticsComponent::Gene _crossParentGenes(struct GeneDefinition const &, struct GeneticsComponent::Gene &, struct GeneticsComponent::Gene &);

private:
MCAPI static std::string const GENE_ARRAY;
MCAPI static std::string const HIDDEN_ALLELE;
MCAPI static std::string const MAIN_ALLELE;

};
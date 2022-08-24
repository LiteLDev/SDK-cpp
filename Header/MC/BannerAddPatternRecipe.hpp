/**
 * @file  BannerAddPatternRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerAddPatternRecipe.
 *
 */
class BannerAddPatternRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERADDPATTERNRECIPE
public:
    class BannerAddPatternRecipe& operator=(class BannerAddPatternRecipe const &) = delete;
    BannerAddPatternRecipe(class BannerAddPatternRecipe const &) = delete;
    BannerAddPatternRecipe() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BannerAddPatternRecipe();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?assemble@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getCraftingSize@BannerAddPatternRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getIngredient@BannerAddPatternRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getResultItem@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?matches@BannerAddPatternRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?size@BannerAddPatternRecipe@@UEBAHXZ
     */
    virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BANNERADDPATTERNRECIPE
#endif
    /**
     * @symbol ??0BannerAddPatternRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     */
    MCAPI BannerAddPatternRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol ??0BannerAddPatternRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI BannerAddPatternRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?matchPatterns@BannerAddPatternRecipe@@QEBA?BV?$NonOwnerPointer@$$CBVBannerPattern@@@Bedrock@@AEAVCraftingContainer@@@Z
     */
    MCAPI class Bedrock::NonOwnerPointer<class BannerPattern const> const matchPatterns(class CraftingContainer &) const;
MCAPI static class mce::UUID const ID;

};
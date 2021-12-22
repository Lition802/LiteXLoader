// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootingEnchantFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTINGENCHANTFUNCTION
public:
    class LootingEnchantFunction& operator=(class LootingEnchantFunction const&) = delete;
    LootingEnchantFunction(class LootingEnchantFunction const&) = delete;
    LootingEnchantFunction() = delete;
#endif

public:
    /*0*/ virtual ~LootingEnchantFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*2*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

protected:

private:

};
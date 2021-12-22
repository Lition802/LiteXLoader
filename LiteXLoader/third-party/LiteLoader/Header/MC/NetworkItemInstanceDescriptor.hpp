// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkItemInstanceDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMINSTANCEDESCRIPTOR
public:
    class NetworkItemInstanceDescriptor& operator=(class NetworkItemInstanceDescriptor const&) = delete;
    NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor const&) = delete;
    NetworkItemInstanceDescriptor() = delete;
#endif

public:
    MCAPI NetworkItemInstanceDescriptor(class ItemInstance const&);
    MCAPI NetworkItemInstanceDescriptor(class ItemStackDescriptor const&);
    MCAPI class ItemInstance getItemInstance(class BlockPalette const&) const;
    MCAPI void read(class ReadOnlyBinaryStream&);
    MCAPI void write(class BinaryStream&) const;
    MCAPI ~NetworkItemInstanceDescriptor();

protected:

private:

};
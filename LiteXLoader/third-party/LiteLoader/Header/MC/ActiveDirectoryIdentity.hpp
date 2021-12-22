// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActiveDirectoryIdentity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYIDENTITY
public:
    class ActiveDirectoryIdentity& operator=(class ActiveDirectoryIdentity const&) = delete;
    ActiveDirectoryIdentity(class ActiveDirectoryIdentity const&) = delete;
    ActiveDirectoryIdentity() = delete;
#endif

public:
    MCAPI static std::string const IS_VALID_FIELD;
    MCAPI static std::string const JWT_EXPIRATION_FIELD;
    MCAPI static std::string const JWT_REQUEST_ID_FIELD;
    MCAPI static std::string const PAYLOAD_FIELD;
    MCAPI static std::string const PUBLIC_KEY;
    MCAPI static std::string const REQUEST_ID_FIELD;
    MCAPI static std::string const RESPONSE_FIELD;

protected:

private:
    MCAPI static std::string mCachedServiceEndpoint;

};
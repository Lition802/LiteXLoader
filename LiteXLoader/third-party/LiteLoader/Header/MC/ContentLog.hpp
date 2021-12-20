// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContentLog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG
public:
    class ContentLog& operator=(class ContentLog const&) = delete;
    ContentLog(class ContentLog const&) = delete;
#endif

public:
    /*0*/ virtual ~ContentLog();
    MCAPI ContentLog();
    MCAPI bool isEnabled() const;
    MCAPI void log(bool, enum LogLevel, enum LogArea, ...);
    MCAPI void updateEnabledStatus();
    MCAPI static char const* getLogAreaName(enum LogArea);

protected:

private:
    MCAPI void _writeToLog(bool, enum LogArea, enum LogLevel, char* &);

};
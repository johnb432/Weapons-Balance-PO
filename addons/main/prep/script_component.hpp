#include "..\script_mod.hpp"

#define COMPONENT prep
#define COMPONENT_NAME QUOTE(Weapons Balance - Project Opfor Prep)

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_PO_PREP
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_PO_PREP
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_PO_PREP
#endif

#include "\x\cba\addons\main\script_macros_common.hpp"

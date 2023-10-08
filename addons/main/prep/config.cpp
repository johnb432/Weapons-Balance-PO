#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "po_factions_afr",
            "po_factions_eu",
            "po_factions_fic",
            "po_factions_me",
            "po_main",
            "po_vehicles"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-PO";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class EBR_base_F;
    class LOP_Weap_LeeEnfield: EBR_base_F {
        class WeaponSlotsInfo;
    };
    class LOP_Weap_LeeEnfield_railed: LOP_Weap_LeeEnfield {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
};

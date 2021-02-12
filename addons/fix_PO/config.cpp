class CfgPatches {
    class WB_fix_PO {
        name = "Weapons balance - Fix PO";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "po_factions_afr",
            "po_factions_eu",
            "po_factions_fic",
            "po_factions_me",
            "po_main",
            "po_vehicles"
        };
        author = "johnb43";
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

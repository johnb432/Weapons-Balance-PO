#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "po_factions_afr",
            "po_factions_eu",
            "po_factions_fic",
            "po_factions_me",
            "po_main",
            "po_vehicles"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-PO";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Project Opfor";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Project Opfor";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-PO";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_po\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_po\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_po\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgWeapons.hpp"

class CfgMagazines {
    class 20Rnd_762x51_Mag;
    class LOP_10rnd_77mm_mag: 20Rnd_762x51_Mag {
        displayName = "10Rnd .303 Lee-Enfield Clip";
        mass = 5.65;
    };

    class Laserbatteries;
    class LOP_LaserMag: Laserbatteries {
        descriptionShort = "Batteries for Laser Designator<br/>Does not fit into NVG<br/>Recycle after use.";
        displayName = "Designator Batteries (PO)";
    };
};

class CfgMagazineWells {
    class CBA_303B_LeeEn {
        WB_Magazines[] += {
            "LOP_10rnd_77mm_mag"
        };
    };
};

class CfgVehicles {
    class B_Kitbag_cbr;
    class LOP_B_KB_Med_tub: B_Kitbag_cbr {
        displayName = "Kitbag (Tubitak/Medic)";
    };
};

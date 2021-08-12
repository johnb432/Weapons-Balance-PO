class asdg_OpticRail1913;

class CfgWeapons {
    class Uniform_Base;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class EBR_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class LOP_Weap_LeeEnfield: EBR_base_F {
        displayName = "Lee-Enfield No.4 Mk.I";
        magazineWell[] = {"CBA_303B_LeeEn"};
        scope = 2;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92.4;
        };
    };
    class LOP_Weap_LeeEnfield_railed: LOP_Weap_LeeEnfield {
        displayName = "Lee-Enfield No.4 Mk.I (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 94.4;
            delete CowsSlot;
            class CowsSlot: asdg_OpticRail1913 {};
        };
    };

    class LOP_U_Fatigue_BDU_FLEC_01: Uniform_Base {
        displayName = "Battle Dress Uniform (Flecktarn/Dark)";
    };
    class LOP_U_Fatigue_BDU_FLEC_02: Uniform_Base {
        displayName = "Battle Dress Uniform (Flecktarn/Light)";
    };
};

//Main settings
[
    "NURMI_NO_CBA_debug",
    "CHECKBOX",
    ["STR_NNO_CBA_Debug_Name" call BIS_fnc_localize, "STR_NNO_CBA_Debug_Tooltip" call BIS_fnc_localize],
    ["STR_NNO_CBA_Category_Main" call BIS_fnc_localize],
    false,
    1,
    {},
    true
] call CBA_Settings_fnc_init;
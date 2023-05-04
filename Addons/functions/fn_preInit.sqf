/*
 * Author: Nurmi
 *
 * Arguments:
 * None
 *
 * Example:
 * [] call NURMI_NO_fnc_preInit
 *
 * Return Value:
 * None
 *
 * Description:
 * <Placeholder>
 *
 */

if (!isServer) exitWith {};

//Create HashMap
NURMI_NO_Images = createHashMap;
publicVariable "NURMI_NO_Images";

NURMI_NO_Articles = [
	["a3\Missions_F_Orange\Data\Img\Faction_IDAP_overview_CA.paa","IDAP aid workers continued to run their missions throughout the war torn Altis"],
	["a3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_48_co.paa","How much are unmanned drones utilize in modern warfare?"],
	["a3\Missions_F_AoW\Data\Img\Artwork\Portrait\showcase_aow_picture_40_co.paa","U.S. Forces crack down on the local criminal syndicate in Horizon Islands"],
	["a3\Missions_F_AoW\Data\Img\Artwork\Landscape\showcase_aow_picture_13_co.paa","Can biological and toxic weapons be used in modern times?"]
];
publicVariable "NURMI_NO_Articles";
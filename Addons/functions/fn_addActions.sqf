/*
 * Author: Nurmi
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Example:
 * [player] call NURMI_NO_fnc_addActions;
 *
 * Description:
 * News acions to self-Interaction menu
 *
 */

#define icon_action_add "\Nurmi_News_Outlet\data\icon_action_article_CA.paa"
#define icon_action_main "\Nurmi_News_Outlet\data\icon_action_main_CA.paa"

params ["_unit"];

private _statement = {
	params ["_target", "_unit"];

	createDialog "NNO_NewsDialog";
	waitUntil {!isnull (findDisplay 139000)};
	[] remoteExecCall ["NURMI_NO_fnc_createNewsArticle", player, false];
};

private _mainAction = ["NNO_Main", localize "STR_NNO_Action_MainAction", icon_action_main, {}, {true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _mainAction] call ace_interact_menu_fnc_addActionToObject;

private _childAction = ["NNO_WriteNews", localize "STR_NNO_Action_newArticle", icon_action_add, _statement, {true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions", "NNO_Main"], _childAction] call ace_interact_menu_fnc_addActionToObject;
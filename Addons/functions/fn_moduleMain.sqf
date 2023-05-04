/*
 * Author: Nurmi
 *
 * Arguments:
 * 1: Module <LOGIC>
 *
 * Example:
 * [] call NURMI_NO_fnc_moduleMain;
 *
 * Return Value:
 * None
 *
 * Description:
 * <Placeholder>
 *
 */

if (!isServer) exitWith {};

//Get defined values from the module
private _logic = param [0, objNull, [objNull]];
private _moduleObjects = (_logic getVariable ["NNO_ModuleObject", ""]) splitString ", ";

{
	private _object = missionNameSpace getVariable [_x, objNull];

	//Debug
	if (_object isEqualTo objNull) exitWith {hint format ["[NNO] fnc_moduleMain:\n%1", localize "STR_NNO_Error_NoObject"];};

	[_object] remoteExecCall ["NURMI_NO_fnc_addActions", _object, true];
} forEach _moduleObjects;
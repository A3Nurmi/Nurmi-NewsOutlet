/*
 * Author: Nurmi
 *
 * Arguments:
 * 1: Module <LOGIC>
 *
 * Example:
 * [] call NURMI_NO_fnc_moduleBiography
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
private _object = _logic getVariable ["NNO_ModuleObject", ""];
private _biography = _logic getVariable ["NNO_ModuleBiography", ""];
private _imagePath = _logic getVariable ["NNO_ModulePath", ""];

if (count _object > 0) then {
	private _object = missionNameSpace getVariable [_object, objNull];
} else {
	_object = (synchronizedObjects _logic) select 0;
};

//Debug
if (_object isEqualTo objNull) exitWith {hint format ["[NNO] fnc_moduleBiography:\n%1", localize "STR_NNO_Error_NoObject"];};

//Set values
[localNamespace, ["NURMI_NO_Biography", [_imagePath, _biography]]] remoteExecCall ["setVariable", _object];
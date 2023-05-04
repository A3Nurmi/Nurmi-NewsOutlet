/*
 * Author: Nurmi
 *
 * Arguments:
 * 1: Module <LOGIC>
 *
 * Example:
 * [] call NURMI_NO_fnc_moduleImage
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
private _imageName = _logic getVariable ["NNO_ModuleName", ""];
private _imagePath = _logic getVariable ["NNO_ModulePath", ""];
private _imageDescription = _logic getVariable ["NNO_ModuleDescription", ""];

//Debug
if ((!fileExists _imagePath) OR (count _imagePath == 0)) exitWith {hint format ["[NNO] fnc_moduleImage:\n%1", localize "STR_NNO_Error_ImagePath"];};

NURMI_NO_Images set [_imageName, ["image",[_imagePath, _imageDescription]]];
publicVariable "NURMI_NO_Images";
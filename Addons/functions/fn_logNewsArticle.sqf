/*
 * Author: Nurmi
 *
 * Arguments:
 * 1: Array containing the news article <ARRAY>
 *
 * Example:
 * [] call NURMI_NO_fnc_logNewsArticle;
 *
 * Description:
 * Add the recived news article to diary record
 *
 */

params ["_array"];

private _title = (_array select 0) select 1;

//If no title was found use predetermined one
if (count _title == 0) then {_title = localize "STR_NNO_Notification_PlaceholderName";};

private _text = format ["<execute expression='[%2] call BIS_fnc_showAANArticle'>%1</execute>", _title, _array];

(call compile localize "STR_NNO_Notification_News") remoteExecCall ["CBA_fnc_notify", player];

player createDiaryRecord ["diary", ["Articles", _text]];
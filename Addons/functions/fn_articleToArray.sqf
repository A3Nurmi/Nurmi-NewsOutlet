/*
 * Author: Nurmi
 *
 * Arguments:
 * 1: <Control ID>
 *
 * Example:
 * [Control] call NURMI_NO_fnc_articleToArray;
 *
 * Description:
 * Get info from the (AAN) news dialog manu
 *
 * Return:
 * Array
 *
 */

params ["_button"];

private _display = ctrlParent _button;

//Get the article info
private _name = name player;

private _title = ctrlText (_display displayCtrl 102);
private _summary = ctrlText (_display displayCtrl 104);
private _text = ctrlText (_display displayCtrl 106);

private _daytime = dayTime;
private _hours = floor _daytime;
private _minutes = floor ((_daytime - _hours) * 60);

//Add the AAN article
private _array = [
	["title", _title],
	["meta", [name player, [2016, 7, 12, _hours, _minutes], "AEST"]],
	["textbold", _summary],
	["text", _text]
];

//Get the picture theme and position
private _themeText = (_display displayCtrl 108) lbText (lbCurSel (_display displayCtrl 108));
private _posText = (_display displayCtrl 110) lbText (lbCurSel (_display displayCtrl 110));
private _picture = NURMI_NO_Images getOrDefault [_themeText, []];
private _number = 1;

switch (_posText) do {
	case localize "STR_NNO_Dialog_News_PicturePos_Up": {_number = 2};
	case localize "STR_NNO_Dialog_News_PicturePos_Middle": {_number = 3};
	case localize "STR_NNO_Dialog_News_PicturePos_Down": {_number = 4};
};

if (count _picture > 1) then {
	_array insert [_number, [_picture], false];
};

//Get random fake article
private _fakeArticle = selectRandom NURMI_NO_Articles;
_array insert [2, [["box", _fakeArticle]], false];

//Get author's bio
private _biography = localNamespace getVariable ["NURMI_NO_Biography", []];

if (count _biography > 0) then {
	_array insert [-1, [["author", _biography]], false];
};

//Debug
if (NURMI_NO_debug) then {
	hint format ["Title:\n%1\n\nSummary:\n%2\n\nText:\n%3\n\nAuthor's bio:\n", _title, _summary, _text, _biography];
	copyToClipboard str _array;
};

_array
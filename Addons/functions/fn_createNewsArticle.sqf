/*
 * Author: Nurmi
 *
 * Arguments:
 * NONE
 *
 * Example:
 * [] call NURMI_NO_fnc_createNewsArticle;
 *
 * Description:
 * Open the (AAN) news dialog manu
 *
 */

private _display = findDisplay 139000;

private _picThemeSelection = _display displayCtrl 108;
private _picPositionSelection = _display displayCtrl 110;

private _buttonDistribute = _display displayCtrl 111;
private _buttonPreview = _display displayCtrl 112;
private _buttonExit = _display displayCtrl 113;

/*Add the correct text for the IDC
(_display displayCtrl 101) ctrlSetText localize "STR_NNO_Dialog_News_Title";
(_display displayCtrl 103) ctrlSetText localize "STR_NNO_Dialog_News_Summary";
(_display displayCtrl 105) ctrlSetText localize "STR_NNO_Dialog_News_Text";
(_display displayCtrl 107) ctrlSetText localize "STR_NNO_Dialog_News_Theme";
(_display displayCtrl 109) ctrlSetText localize "STR_NNO_Dialog_News_Position";
_buttonDistribute ctrlSetText localize "STR_NNO_Dialog_News_Distribute";
_buttonPreview ctrlSetText localize "STR_NNO_Dialog_News_Preview";*/

//Get stored text from variable
private _arrayText = localNamespace getVariable ["NURMI_NO_ArticleText", ["","",""]];
_display displayCtrl 102 ctrlSetText (_arrayText select 0);
_display displayCtrl 104 ctrlSetText (_arrayText select 1);
_display displayCtrl 106 ctrlSetText (_arrayText select 2);

//Add Selection for the CT_COMBO
_picThemeSelection lbAdd localize "STR_NNO_Dialog_News_NoPicture";
{_picThemeSelection lbAdd _x} forEach keys NURMI_NO_Images;

_picPositionSelection lbAdd localize "STR_NNO_Dialog_News_PicturePos_Up";
_picPositionSelection lbAdd localize "STR_NNO_Dialog_News_PicturePos_Middle";
_picPositionSelection lbAdd localize "STR_NNO_Dialog_News_PicturePos_Down";

_buttonPreview ctrlAddEventHandler ["ButtonClick",{
	params ["_buttonPreview"];

	private _array = [_buttonPreview] call NURMI_NO_fnc_articleToArray;

	[_array] call BIS_fnc_showAANArticle;
}];

_buttonDistribute ctrlAddEventHandler ["ButtonClick",{
	params ["_buttonDistribute"];

	private _buttonPreview = (ctrlParent _buttonDistribute) displayCtrl 112;
	private _buttonExit = (ctrlParent _buttonDistribute) displayCtrl 113;
	private _title = ctrlText (_display displayCtrl 102);

	if (count _title == 0) exitWith {
		(localize "STR_NNO_Notification_NoTitle") remoteExecCall ["CBA_fnc_notify", player];
	};

	private _array = [_buttonDistribute] call NURMI_NO_fnc_articleToArray;

	[_array] remoteExecCall ["NURMI_NO_fnc_logNewsArticle", 0, true];

	//Remove added EH's
	_buttonExit ctrlRemoveAllEventHandlers "ButtonClick";
	_buttonPreview ctrlRemoveAllEventHandlers "ButtonClick";
	_buttonDistribute ctrlRemoveAllEventHandlers "ButtonClick";

	localNamespace setVariable ["NURMI_NO_ArticleText", ["","",""]];

	//Close the dialog
	closeDialog 1;
}];

_buttonExit ctrlAddEventHandler ["ButtonClick",{
	params ["_buttonExit"];

	private _display = ctrlParent _buttonExit;
	private _buttonDistribute = _display displayCtrl 111;
	private _buttonPreview = _display displayCtrl 112;

	//Store text to variable when dialog is closed
	private _title = ctrlText (_display displayCtrl 102);
	private _summary = ctrlText (_display displayCtrl 104);
	private _text = ctrlText (_display displayCtrl 106);
	localNamespace setVariable ["NURMI_NO_ArticleText", [_title, _summary, _text]];

	if (NURMI_NO_debug) then {hint format ["Title:\n%1\n\nSummary:\n%2\n\nText:\n%3", _title, _summary, _text];};

	//Remove added EH's
	_buttonExit ctrlRemoveAllEventHandlers "ButtonClick";
	_buttonPreview ctrlRemoveAllEventHandlers "ButtonClick";
	_buttonDistribute ctrlRemoveAllEventHandlers "ButtonClick";

	//Close the dialog
	closeDialog 1;
}];

_display displayAddEventHandler ["Unload",{
	params ["_display", "_exitCode"];
	if (_exitCode == 2) then {
		private _buttonDistribute = _display displayCtrl 111;
		private _buttonPreview = _display displayCtrl 112;
		private _buttonExit = _display displayCtrl 113;

		//Store text to variable when dialog is closed
		private _title = ctrlText (_display displayCtrl 102);
		private _summary = ctrlText (_display displayCtrl 104);
		private _text = ctrlText (_display displayCtrl 106);
		localNamespace setVariable ["NURMI_NO_ArticleText", [_title, _summary, _text]];

		if (NURMI_NO_debug) then {hint format ["Title:\n%1\n\nSummary:\n%2\n\nText:\n%3", _title, _summary, _text];};

		//Remove added EH's
		_buttonExit ctrlRemoveAllEventHandlers "ButtonClick";
		_buttonPreview ctrlRemoveAllEventHandlers "ButtonClick";
		_buttonDistribute ctrlRemoveAllEventHandlers "ButtonClick";
	};
}];
#include "CustomControlClasses.hpp"
class NNO_NewsDialog
{
	idd = 139000;
	movingEnable = false;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.24111112;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.53333334;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorText[] = {0.7176,0.3608,0.8196,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Background_Name
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.19555556;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.04111112;
			style = 0;
			text = "$STR_NNO_Dialog_News_AAN";
			colorBackground[] = {0.3,0.6,0.3,0.75};
			colorText[] = {1,0.9804,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class TitleText
		{
			type = 0;
			idc = 101;
			x = safeZoneX + safeZoneW * 0.318125;
			y = safeZoneY + safeZoneH * 0.28222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "$STR_NNO_Dialog_News_Title";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class TitleText_Edit
		{
			type = 2;
			idc = 102;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.3625;
			h = safeZoneH * 0.04333334;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class SummaryText
		{
			type = 0;
			idc = 103;
			x = safeZoneX + safeZoneW * 0.318125;
			y = safeZoneY + safeZoneH * 0.40888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "$STR_NNO_Dialog_News_Summary";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class SummaryText_Edit
		{
			type = 2;
			idc = 104;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.45222223;
			w = safeZoneW * 0.3625;
			h = safeZoneH * 0.04333334;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class NewsText
		{
			type = 0;
			idc = 105;
			x = safeZoneX + safeZoneW * 0.318125;
			y = safeZoneY + safeZoneH * 0.53111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "$STR_NNO_Dialog_News_Text";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class NewsText_Edit
		{
			type = 2;
			idc = 106;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.57444445;
			w = safeZoneW * 0.3625;
			h = safeZoneH * 0.04333334;
			style = 32;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class PictureTheme
		{
			type = 0;
			idc = 107;
			x = safeZoneX + safeZoneW * 0.318125;
			y = safeZoneY + safeZoneH * 0.64777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "$STR_NNO_Dialog_News_Theme";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class PictureTheme_Selection
		{
			type = 4;
			idc = 108;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.68888889;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.03666667;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,0,0,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class PicturePosition
		{
			type = 0;
			idc = 109;
			x = safeZoneX + safeZoneW * 0.518125;
			y = safeZoneY + safeZoneH * 0.64777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "$STR_NNO_Dialog_News_Position";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class PicturePosition_Selection
		{
			type = 4;
			idc = 110;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.68888889;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.03666667;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,0,0,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class Button_Distribute
		{
			type = 1;
			idc = 111;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.77888889;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.04222223;
			style = 0;
			text = "$STR_NNO_Dialog_News_Distribute";
			borderSize = 0;
			colorBackground[] = {0.3,0.6,0.3,0.75};
			colorBackgroundActive[] = {0.3,0.6,0.3,1};
			colorBackgroundDisabled[] = {0.3,0.6,0.3,0.75};
			colorBorder[] = {0,0,0,1};
			colorDisabled[] = {0.3,0.6,0.3,0.75};
			colorFocused[] = {0.3,0.6,0.3,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class Button_Preview
		{
			type = 1;
			idc = 112;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.77888889;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.04222223;
			style = 0;
			text = "$STR_NNO_Dialog_News_Preview";
			borderSize = 0;
			colorBackground[] = {0.3,0.6,0.3,0.75};
			colorBackgroundActive[] = {0.3,0.6,0.3,1};
			colorBackgroundDisabled[] = {0.3,0.6,0.3,0.75};
			colorBorder[] = {0,0,0,1};
			colorDisabled[] = {0.3,0.6,0.3,0.75};
			colorFocused[] = {0.3,0.6,0.3,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class Button_Exit
		{
			type = 1;
			idc = 113;
			x = safeZoneX + safeZoneW * 0.679375;
			y = safeZoneY + safeZoneH * 0.19888889;
			w = safeZoneW * 0.024375;
			h = safeZoneH * 0.03444445;
			style = 0+2;
			text = "X";
			borderSize = 0;
			colorBackground[] = {1,0,0,1};
			colorBackgroundActive[] = {1,0,0,0.75};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.75);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};

	};

};

#include "dialogs\NewsDialog.hpp"
#include "script_component.hpp"

class CfgPatches
{
    class NURMI_NO
    {
        name = $STR_NNO_Mod_Name;
        author = "Nurmi";
        authorUrl = "https://armafinland.fi/";
        version = 1.0;

        units[] = {"NURMI_NO"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Modules_F","cba_main","ace_interaction"};
    };
};

class CfgFunctions
{
    class NURMI_NO
    {
        class functions
        {
            file = "\Nurmi_News_Outlet\functions";

            class preInit {preInit = 1;};

            class moduleInit {};
            class moduleMain {};
            class moduleImage {};
            class moduleBiography {};

            class addActions {};
            class createNewsArticle {};
            class articleToArray {};
            class logNewsArticle {};
        };
    };
};

class Extended_PreInit_EventHandlers
{
    class NURMI_NO
    {
        init = "call compile preprocessFileLineNumbers '\Nurmi_News_Outlet\XEH_preInit.sqf'";
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class NURMI_NO: NO_CATEGORY
    {
        displayName = $STR_NNO_Mod_Name;
    };
};

class CfgVehicles
{
    class Logic;

    class Module_F: Logic
    {
        class AttributesBase
        {
            class Default;
            class Edit;                 // Default edit box (i.e., text input field)
            class Combo;                // Default combo box (i.e., drop-down menu)
            class Checkbox;             // Default checkbox (returned value is Boolean)
            class CheckboxNumber;       // Default checkbox (returned value is Number)
            class ModuleDescription;    // Module description
            class Units;                // Selection of units on which the module is applied
        };

        // Description base classes, for more information see below
        class ModuleDescription
        {
            class AnyBrain;
        };
    };

    //NNO Modules - Main Module
    class NNO_ModuleMain: Module_F
    {
        scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
        scopeCurator = 0; // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        displayName = $STR_NNO_ModuleMain_DisplayName; // Name displayed in the menu
        icon = icon_module_main; // Map icon. Delete this entry to use the default icon
        category = "NURMI_NO";

        function = "NURMI_NO_fnc_moduleMain"; // Name of function triggered once conditions are met
        functionPriority = 5; // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 0; // 1 for module waiting until all synced triggers are activated
        isDisposable = 1; // 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
        is3DEN = 0; // 1 to run init function in Eden Editor as well

        // Module attributes
        class Attributes: AttributesBase
        {
            class NNO_ModuleObject: Edit
            {
                property = "NURMI_NO_ModuleMain_Object";
                displayName = $STR_NNO_ModuleMain_Object;
                tooltip = $STR_NNO_ModuleMain_Object_Tooltip;
                typeName = "STRING";
            };

            class ModuleDescription: ModuleDescription{}; // Module description should be shown last
        };

        // Module description. Must inherit from base class, otherwise pre-defined entities won't be available
        class ModuleDescription: ModuleDescription
        {
            description = $STR_NNO_ModuleMain_Description; // Short description, will be formatted as structured text
        };
    };

    //NNO Modules - Add Article Image Module
    class NNO_ModuleImage: Module_F
    {
        scope = 2;
        scopeCurator = 0;
        displayName = $STR_NNO_ModuleImage_DisplayName;
        icon = icon_module_image;
        category = "NURMI_NO";

        function = "NURMI_NO_fnc_moduleImage";
        functionPriority = 10;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;
        is3DEN = 0;

        class Attributes: AttributesBase
        {
            class NNO_ModuleName: Edit
            {
                property = "NURMI_NO_ModuleImage_Name";
                displayName = $STR_NNO_ModuleImage_Name;
                tooltip = $STR_NNO_ModuleImage_Name_Tooltip;
                typeName = "STRING";
            };

            class NNO_ModulePath: Edit
            {
                property = "NURMI_NO_ModuleImage_Path";
                displayName = $STR_NNO_ModuleImage_Path;
                tooltip = $STR_NNO_ModuleImage_Path_Tooltip;
                typeName = "STRING";
            };

            class NNO_ModuleDescription: Edit
            {
                property = "NURMI_NO_ModuleImage_Description";
                displayName = $STR_NNO_ModuleImage_Description;
                tooltip = $STR_NNO_ModuleImage_Description_Tooltip;
                typeName = "STRING";
            };

            class ModuleDescription: ModuleDescription{};
        };

        class ModuleDescription: ModuleDescription
        {
            description = $STR_NNO_ModuleImage_Description;
        };
    };

    //NNO Modules - Add Author's bio
    class NNO_ModuleBio: Module_F
    {
        scope = 2;
        scopeCurator = 0;
        displayName = $STR_NNO_ModuleBio_DisplayName;
        icon = icon_module_bio;
        category = "NURMI_NO";

        function = "NURMI_NO_fnc_moduleBiography";
        functionPriority = 10;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;
        is3DEN = 0;

        class Attributes: AttributesBase
        {
            class NNO_ModuleObject: Edit
            {
                property = "NURMI_NO_ModuleBio_Object";
                displayName = $STR_NNO_ModuleBio_Object;
                tooltip = $STR_NNO_ModuleBio_Object_Tooltip;
                typeName = "STRING";
            };

            class NNO_ModuleBiography: Edit
            {
                property = "NURMI_NO_ModuleBio_Biography";
                displayName = $STR_NNO_ModuleBio_Biography;
                tooltip = $STR_NNO_ModuleBio_Biography_Tooltip;
                typeName = "STRING";
            };

            class NNO_ModulePath: Edit
            {
                property = "NURMI_NO_ModuleBio_Path";
                displayName = $STR_NNO_ModuleBio_Path;
                tooltip = $STR_NNO_ModuleBio_Path_Tooltip;
                typeName = "STRING";
            };

            class ModuleDescription: ModuleDescription{};
        };

        class ModuleDescription: ModuleDescription
        {
            description = $STR_NNO_ModuleBio_Description;
        };
    };
};
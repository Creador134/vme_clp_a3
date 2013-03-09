class CfgPatches
{
	class A3_UIFonts_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};

class CfgFontFamilies
{
	class MicrosoftYaHei_CN
	{
		fonts[] = {"\vme_clp_a3_language_uifonts_f_data\fonts\MicrosoftYaHei17"};
		spaceWidth = 0.7;
		spacing = 0.2;
	};
	
	class MicrosoftYaHeiBold_CN
	{
		fonts[] = {"\vme_clp_a3_language_uifonts_f_data\fonts\MicrosoftYaHeiBold17"};
		spaceWidth = 0.9;
		spacing = 0.17;
	};
};
class CfgFonts
{
	class SimplifiedChinese
	{
		EtelkaMonospaceProBold = "MicrosoftYaHeiBold_CN";
		EtelkaNarrowMediumPro = "MicrosoftYaHei_CN";
		PuristaBold = "MicrosoftYaHei_CN";
		PuristaLight = "MicrosoftYaHei_CN";
		PuristaMedium = "MicrosoftYaHei_CN";
		PuristaSemibold = "MicrosoftYaHei_CN";
	};
	
	class TraditionalChinese
	{
		EtelkaMonospaceProBold = "MicrosoftYaHeiBold_CN";
		EtelkaNarrowMediumPro = "MicrosoftYaHei_CN";
		PuristaBold = "MicrosoftYaHei_CN";
		PuristaLight = "MicrosoftYaHei_CN";
		PuristaMedium = "MicrosoftYaHei_CN";
		PuristaSemibold = "MicrosoftYaHei_CN";
	};
};
//};

class CfgPatches
{
	class DZ_Vehicles_Wheeled_PlayZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Vehicles_Wheeled"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GUIInventoryAttachmentsProps;
	class Body;
	class Car;
	class CarScript;
	class OffroadHatchback: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
	class CivilianSedan: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
	class Hatchback_02: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
	class Sedan_02: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
	class Truck_01_Base: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
	class Offroad_02: CarScript
	{
		attachments[]+=
		{
			"Wrench"
		};
		class GUIInventoryAttachmentsProps: GUIInventoryAttachmentsProps
		{
			class Body: Body
			{
				attachmentSlots[]+=
				{
					"Wrench"
				};
			};
		};
	};
};
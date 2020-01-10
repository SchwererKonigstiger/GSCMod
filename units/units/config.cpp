////////////////////////////////////////////////////////////////////
//DeRap: units\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Jan 09 23:43:11 2020 : 'file' last modified on Tue Aug 06 17:07:08 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgGroups
{
	class WEST
	{
		class B_GSC_Woodland
		{
			name = "Global Security Coalition (Woodland)";
			class Infantry
			{
				name = "Infantry";
				class b_gsc_infantry_section_woodland
				{
					name = "Section (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AT_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AT_Rifleman";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Marksman";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
				};
				class b_gsc_aa_support_section_woodland
				{
					name = "AA Support Section (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Medic";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit3
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit4
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Marksman";
					};
					class Unit5
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
					class Unit6
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
					class Unit7
					{
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAA_Ammobearer";
					};
					class Unit8
					{
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AA_Specialist";
					};
				};
				class b_gsc_at_support_section_woodland
				{
					name = "AT Support Section (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Medic";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit3
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Rifleman";
					};
					class Unit4
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Marksman";
					};
					class Unit5
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
					class Unit6
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SAW";
					};
					class Unit7
					{
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAA_Ammobearer";
					};
					class Unit8
					{
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AT_Specialist";
					};
				};
				class b_gsc_command_section_woodland
				{
					name = "Command Section (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AT_Rifleman";
					};
					class Unit3
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Engineer";
					};
					class Unit4
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_JTAC";
					};
					class Unit5
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_UAV_Operator";
					};
					class Unit6
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_MMG_Gunner";
					};
					class Unit7
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_MMG_Ammobearer";
					};
					class Unit8
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Demo_Specialist";
					};
				};
				class b_gsc_vehicle_crew_woodland
				{
					name = "Vehicle Crew (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Vehicle_Crewman";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Vehicle_Crewman";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Vehicle_Crewman";
					};
				};
				class b_gsc_recce_team_woodland
				{
					name = "Recce Team (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_JTAC";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_UAV_Operator";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_Marksman";
					};
				};
				class b_gsc_mmg_element_woodland
				{
					name = "MMG Element (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_MMG_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_MMG_Gunner";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_MMG_Ammobearer";
					};
				};
				class b_gsc_at_element_woodland
				{
					name = "AT  Support Element (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAT_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAT_Ammobearer";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AT_Specialist";
					};
				};
				class b_gsc_aa_element_woodland
				{
					name = "AA  Support Element (Woodland)";
					side = 1;
					faction = "B_GSC_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Woodland_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAA_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_SpikeAA_Ammobearer";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Woodland_AA_Specialist";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
			};
			class Motorized
			{
				name = "Motorized Infantry";
			};
			class Support
			{
				name = "Support Infantry";
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
			};
			class Armored
			{
				name = "Armor";
			};
			class Artillery
			{
				name = "Artillery";
			};
		};
		class B_GSC_Desert
		{
			name = "Global Security Coalition (Desert)";
			class Infantry
			{
				name = "Infantry";
				class b_gsc_infantry_section_Desert
				{
					name = "Section (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Desert_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AT_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AT_Rifleman";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Marksman";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
				};
				class b_gsc_aa_support_section_Desert
				{
					name = "AA Support Section (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Desert_Medic";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit3
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit4
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Marksman";
					};
					class Unit5
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
					class Unit6
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
					class Unit7
					{
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAA_Ammobearer";
					};
					class Unit8
					{
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AA_Specialist";
					};
				};
				class b_gsc_at_support_section_Desert
				{
					name = "AT Support Section (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Desert_Medic";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit3
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Rifleman";
					};
					class Unit4
					{
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Marksman";
					};
					class Unit5
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
					class Unit6
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SAW";
					};
					class Unit7
					{
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAA_Ammobearer";
					};
					class Unit8
					{
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AT_Specialist";
					};
				};
				class b_gsc_command_section_Desert
				{
					name = "Command Section (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_GSC_Desert_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AT_Rifleman";
					};
					class Unit3
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Engineer";
					};
					class Unit4
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_JTAC";
					};
					class Unit5
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_UAV_Operator";
					};
					class Unit6
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_MMG_Gunner";
					};
					class Unit7
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_MMG_Ammobearer";
					};
					class Unit8
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Demo_Specialist";
					};
				};
				class b_gsc_vehicle_crew_Desert
				{
					name = "Vehicle Crew (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Vehicle_Crewman";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Vehicle_Crewman";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Vehicle_Crewman";
					};
				};
				class b_gsc_recce_team_Desert
				{
					name = "Recce Team (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_JTAC";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_UAV_Operator";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_Marksman";
					};
				};
				class b_gsc_mmg_element_Desert
				{
					name = "MMG Element (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_MMG_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_MMG_Gunner";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_MMG_Ammobearer";
					};
				};
				class b_gsc_at_element_Desert
				{
					name = "AT  Support Element (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAT_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAT_Ammobearer";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AT_Specialist";
					};
				};
				class b_gsc_aa_element_Desert
				{
					name = "AA  Support Element (Desert)";
					side = 1;
					faction = "B_GSC_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GSC_Desert_Section_Leader";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAA_Ammobearer";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_SpikeAA_Ammobearer";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_GSC_Desert_AA_Specialist";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
			};
			class Motorized
			{
				name = "Motorized Infantry";
			};
			class Support
			{
				name = "Support Infantry";
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
			};
			class Armored
			{
				name = "Armor";
			};
			class Artillery
			{
				name = "Artillery";
			};
		};
	};
};
class cfgWeapons
{
	class CUP_arifle_M4A3_camo;
	class CUP_arifle_M4A1_BUIS_camo_GL;
	class launch_MRAWS_olive_F;
	class CUP_lmg_m249_pip3;
	class CUP_srifle_M14_DMR;
	class CUP_lmg_M60E4;
	class CUP_arifle_SBR_od;
	class CUP_hgun_Glock17_tan;
	class CUP_arifle_M4A3_desert;
	class CUP_arifle_M4A1_BUIS_desert_GL;
	class GSC_M4A3_camo: CUP_arifle_M4A3_camo
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L";
			};
		};
	};
	class GSC_Glock17_tan: CUP_hgun_Glock17_tan
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_CZ_M3X";
			};
		};
	};
	class GSC_M4A1_BUIS_GL: CUP_arifle_M4A1_BUIS_camo_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
			};
		};
	};
	class GSC_Launch_MRAWS_Olive: launch_MRAWS_olive_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_OD";
			};
		};
	};
	class GSC_M249: CUP_lmg_m249_pip3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};
	class GSC_M14_DMR: CUP_srifle_M14_DMR
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_AMS";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class GSC_M60E4: CUP_lmg_M60E4
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};
	class GSC_SBR_od: CUP_arifle_SBR_od
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L";
			};
		};
	};
	class GSC_M4A3_Desert: CUP_arifle_M4A3_desert
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L";
			};
		};
	};
	class GSC_M4A1_BUIS_GL_Desert: CUP_arifle_M4A1_BUIS_desert_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
			};
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_rgr;
	class CFP_FieldPack_ATACSFG;
	class B_Mortar_01_weapon_F;
	class B_Mortar_01_support_F;
	class SP_Carryall_ATacsAU;
	class B_GSC_Medic_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 15;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 12;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
			class _xx_ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 10;
			};
		};
	};
	class B_GSC_MRAWS_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine = "MRAWS_HEAT_F";
				count = 2;
			};
		};
	};
	class B_GSC_SPIKE_AA_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_GSC_JTAC_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class B_GSC_Demo_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
	};
	class B_GSC_Engineer_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_ACE_SpraypaintBlue
			{
				name = "ACE_SpraypaintBlue";
				count = 1;
			};
			class _xx_ACE_SpraypaintBlack
			{
				name = "ACE_SpraypaintBlack";
				count = 1;
			};
			class _xx_ACE_SpraypaintRed
			{
				name = "ACE_SpraypaintRed";
				count = 1;
			};
			class _xx_ACE_SpraypaintGreen
			{
				name = "ACE_SpraypaintGreen";
				count = 1;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
			class _xx_ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 10;
			};
		};
	};
	class B_GSC_MRAWS_ASST_Pack: CFP_FieldPack_ATACSFG
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine = "MRAWS_HEAT_F";
				count = 1;
			};
			class _xx_MRAWS_HE_F
			{
				magazine = "MRAWS_HE_F";
				count = 1;
			};
		};
	};
	class B_GSC_MMG_Ammobearer_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 2;
			};
		};
	};
	class B_GSC_Spike_Ammobearer_Pack: CFP_FieldPack_ATACSFG
	{
		scope = 1;
		class Transport
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_GSC_Empty_Mortar_Pack: SP_Carryall_ATacsAU
	{
		scope = 1;
	};
	class B_GSC_UAV_Operator_Pack: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ITC_Land_B_AR2i_Packed
			{
				magazine = "ITC_Land_B_AR2i_Packed";
				count = 2;
			};
		};
	};
	class GSC_Repair_Bag: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class B_Soldier_base_F;
	class B_GSC_Desert_Rifleman: B_Soldier_base_F
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Section_Leader: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A1_BUIS_GL_Desert","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A1_BUIS_GL_Desert","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","B_UavTerminal"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","B_UavTerminal"};
	};
	class B_GSC_Desert_MMG_Gunner: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Gunner";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M60E4","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M60E4","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetB_light","B_UavTerminal"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetB_light","B_UavTerminal"};
	};
	class B_GSC_Desert_Medic: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACE_surgicalKit","ACE_personalAidKit"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACE_surgicalKit","ACE_personalAidKit"};
		backpack = "B_GSC_Medic_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","itemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","itemGPS"};
	};
	class B_GSC_Desert_AT_Rifleman: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Rifleman";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Launch_MRAWS_Olive","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Launch_MRAWS_Olive","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MRAWS_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Desert_Grenadier: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A1_BUIS_GL_Desert","CUP_launch_M72A6","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A1_BUIS_GL_Desert","CUP_launch_M72A6","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_JTAC: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "JTAC";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_JTAC_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Demo_Specialist: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Demolitions Specialist";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "true";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		backpack = "B_GSC_Demo_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Engineer: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "true";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		backpack = "B_GSC_Engineer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_AA_Specialist: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","CUP_launch_FIM92Stinger","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A3_Desert","CUP_launch_FIM92Stinger","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_AT_Specialist: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","launch_B_Titan_short_F","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_MAAWS_Ammobearer: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAAWS Ammobearer";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MRAWS_ASST_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_MMG_Ammobearer: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Ammobearer";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MMG_Ammobearer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Desert_SAW: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "SAW Gunner";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M249","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M249","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Spike_Ammobearer: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spike Ammobearer";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_Spike_Ammobearer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Marksman: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M14_DMR","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M14_DMR","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","optic_tws"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","optic_tws"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_RAV_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_RAV_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Mortar_FDC: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar FDC";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152"};
		backpack = "B_Mortar_01_support_F";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Mortar_Gunner: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar Gunner";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_Mortar_01_weapon_F";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Desert_Mortar_Loader: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar Loader";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_Empty_Mortar_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_UAV_Operator: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAV Operator";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_UAV_Operator_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","Laserdesignator","B_UavTerminal","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","Laserdesignator","B_UavTerminal","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_Vehicle_Crewman: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicle Crewman";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_SBR_od","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_SBR_od","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetCrew_I","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetCrew_I","ItemGPS"};
	};
	class B_GSC_Woodland_Rifleman: B_Soldier_base_F
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Section_Leader: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A1_BUIS_GL","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A1_BUIS_GL","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","B_UavTerminal"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","B_UavTerminal"};
	};
	class B_GSC_Woodland_MMG_Gunner: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Gunner";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M60E4","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M60E4","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152","ACE_Cabletie","ACE_Cabletie","ACE_Cabletie"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetB_light","B_UavTerminal"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetB_light","B_UavTerminal"};
	};
	class B_GSC_Woodland_Medic: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 1;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACE_surgicalKit","ACE_personalAidKit"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACE_surgicalKit","ACE_personalAidKit"};
		backpack = "B_GSC_Medic_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","itemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","itemGPS"};
	};
	class B_GSC_Woodland_AT_Rifleman: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Rifleman";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Launch_MRAWS_Olive","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Launch_MRAWS_Olive","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MRAWS_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Woodland_Grenadier: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A1_BUIS_GL","CUP_launch_M72A6","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A1_BUIS_GL","CUP_launch_M72A6","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_JTAC: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "JTAC";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_JTAC_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Demo_Specialist: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Demolitions Specialist";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "true";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		backpack = "B_GSC_Demo_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Engineer: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "true";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		backpack = "B_GSC_Engineer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_AA_Specialist: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","CUP_launch_FIM92Stinger","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"GSC_M4A3_Camo","CUP_launch_FIM92Stinger","GSC_Glock17_tan","Throw","Put","Laserdesignator"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_AT_Specialist: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","launch_B_Titan_short_F","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_MAAWS_Ammobearer: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAAWS Ammobearer";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MRAWS_ASST_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_MMG_Ammobearer: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Ammobearer";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_MMG_Ammobearer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Woodland_SAW: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "SAW Gunner";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M249","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M249","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_MG_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Spike_Ammobearer: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spike Ammobearer";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_Spike_Ammobearer_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Marksman: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M14_DMR","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M14_DMR","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","optic_tws"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","optic_tws"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_RAV_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_RAV_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Mortar_FDC: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar FDC";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","ACRE_PRC152"};
		backpack = "B_Mortar_01_support_F";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Mortar_Gunner: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar Gunner";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_Mortar_01_weapon_F";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetB_light","ItemGPS"};
	};
	class B_GSC_Woodland_Mortar_Loader: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mortar Loader";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_Empty_Mortar_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_UAV_Operator: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAV Operator";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_UAV_Operator_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","Laserbatteries"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","Laserdesignator","B_UavTerminal","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","Laserdesignator","B_UavTerminal","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Woodland_Vehicle_Crewman: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicle Crewman";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_SBR_od","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_SBR_od","CUP_launch_M136","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo","MineDetector"};
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetCrew_I","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_FAPC_Operator_OGA_OD","H_HelmetCrew_I","ItemGPS"};
	};
	class B_GSC_Woodland_SpikeAA_Ammobearer: B_GSC_Woodland_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spike Ammobearer";
		side = 1;
		faction = "B_GSC_Woodland";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		weapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Camo","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_SPIKE_AA_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
	class B_GSC_Desert_SpikeAA_Ammobearer: B_GSC_Desert_Rifleman
	{
		author = "Schwerer Konigstiger";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spike Ammobearer";
		side = 1;
		faction = "B_GSC_Desert";
		engineer = "false";
		attendant = 0;
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "CFP_U_Crye_ATacsAU";
		weapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"GSC_M4A3_Desert","GSC_Glock17_tan","Throw","Put","ACE_Vector"};
		Items[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		RespawnItems[] = {"ACE_RangeTable_82mm","ACE_microDAGR","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACRE_PRC343","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","CFP_Oakley_Goggles_Blk","CUP_muzzle_snds_M16_camo"};
		backpack = "B_GSC_SPIKE_AA_Pack";
		magazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"SmokeShellRed","SmokeShellBlue","Smokeshell","MiniGrenade","MiniGrenade","B_IR_Grenade","ACE_M84","ACE_M84","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_30Rnd_556x45_PMAG_QP_Tan","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","CUP_NVG_GPNVG_black","CFP_LBT6094_operator_OGA_OD","H_HelmetSpecB","ItemGPS"};
	};
};
class CfgPatches
{
	class GSC_units
	{
		units[] = {"B_GSC_Woodland_Rifleman","B_GSC_Woodland_Section_Leader","B_GSC_Woodland_Medic","B_GSC_Woodland_AT_Rifleman","B_GSC_Woodland_Grenadier","B_GSC_Woodland_JTAC","B_GSC_Woodland_Demo_Specialist","B_GSC_Woodland_Engineer","B_GSC_Woodland_AA_Specialist","B_GSC_Woodland_AT_Specialist","B_GSC_Woodland_MAAWS_Ammobearer","B_GSC_Woodland_MMG_Ammobearer","B_GSC_Woodland_SAW","B_GSC_Woodland_SpikeAT_Ammobearer","B_GSC_Woodland_SpikeAA_Ammobearer","B_GSC_Woodland_Marksman","B_GSC_Woodland_Mortar_FDC","B_GSC_Woodland_Mortar_Gunner","B_GSC_Woodland_Mortar_Loader","B_GSC_Woodland_UAV_Operator","B_GSC_Vehicle_Crewman","B_GSC_Woodland_MMG_Gunner","B_GSC_Desert_Rifleman","B_GSC_Desert_Section_Leader","B_GSC_Desert_Medic","B_GSC_Desert_AT_Rifleman","B_GSC_Desert_Grenadier","B_GSC_Desert_JTAC","B_GSC_Desert_Demo_Specialist","B_GSC_Desert_Engineer","B_GSC_Desert_AA_Specialist","B_GSC_Desert_AT_Specialist","B_GSC_Desert_MAAWS_Ammobearer","B_GSC_Desert_MMG_Ammobearer","B_GSC_Desert_SAW","B_GSC_Desert_SpikeAT_Ammobearer","B_GSC_Desert_SpikeAA_Ammobearer","B_GSC_Desert_Marksman","B_GSC_Desert_Mortar_FDC","B_GSC_Desert_Mortar_Gunner","B_GSC_Desert_Mortar_Loader","B_GSC_Desert_UAV_Operator","B_GSC_Vehicle_Crewman","B_GSC_Desert_MMG_Gunner"};
		weapons[] = {"GSC_M4A3_camo","GSC_Glock17_tan","GSC_M4A1_BUIS_GL","GSC_M4A3_Camo","GSC_Launch_MRAWS_Olive","GSC_M249","GSC_M14_DMR","GSC_M60E4","GSC_SBR_od","GSC_M4A3_Desert","GSC_M4A1_BUIS_GL_Desert"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = "";
		author = "Konigstiger";
	};
};
class CfgFactionClasses
{
	class B_GSC_Woodland
	{
		displayName = "Global Security Coalition (Woodland)";
		flag = "\units\data\gsclogo.paa";
		icon = "\units\data\gsclogo.paa";
		priority = 1;
		side = 1;
	};
	class B_GSC_Desert
	{
		displayName = "Global Security Coalition (Desert)";
		flag = "\units\data\gsclogo.paa";
		icon = "\units\data\gsclogo.paa";
		priority = 1;
		side = 1;
	};
};
class cfgMods
{
	author = "Konigstiger";
	timepacked = "1565111227";
};

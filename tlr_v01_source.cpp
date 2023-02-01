// tlr_v01_source.cpp : tlr_v01 AKA Texture Library Renderer Version 0.1 was created to sort the texture map assets I collected and created over the past few years.
// This C++ code was compiled with MSVC using the C++17 language standard
// MIT License
// [created by https://thegiwi.com/]

#include <string>
#include <iostream>
#include <fstream>
#include <functional>
#include <filesystem>
namespace fs = std::filesystem;

// FUNCTIONS FOR SEARCHING FOR IMAGE MAP TYPES FROM STRING INPUT
std::string SearchAlbedo(std::string SearchAlbedoInput)
{
	std::string KeywordCheck01 = "COL";
	std::string KeywordCheck02 = "col";
	std::string KeywordCheck03 = "color";
	std::string KeywordCheck04 = "colour";
	std::string KeywordCheck05 = "Albedo";
	std::string KeywordCheck06 = "albedo";
	std::string KeywordCheck07 = "Base_Color";
	std::string KeywordCheck08 = "BaseColor";
	std::string KeywordCheck09 = "base_color";
	std::string KeywordCheck10 = "basecolor";
	std::string KeywordCheck11 = "diffuse";
	std::string KeywordCheck12 = "Diffuse";
	std::string KeywordCheck13 = "baseColor";
	std::string KeywordCheck14 = "Color";

	std::string FoundAlbedo;

	if (SearchAlbedoInput.find(KeywordCheck01) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck02) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck03) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck04) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck05) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck06) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck07) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck08) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck09) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck10) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck11) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck12) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck13) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}
	else if (SearchAlbedoInput.find(KeywordCheck14) != std::string::npos)
	{
		FoundAlbedo = SearchAlbedoInput;
	}


	return FoundAlbedo;
}

std::string SearchRoughness(std::string SearchRoughnessInput)
{
	std::string KeywordCheck01 = "Roughness";
	std::string KeywordCheck02 = "roughness";
	std::string KeywordCheck03 = "ROUGHNESS";

	std::string FoundRoughness;

	if (SearchRoughnessInput.find(KeywordCheck01) != std::string::npos)
	{
		FoundRoughness = SearchRoughnessInput;
	}
	else if (SearchRoughnessInput.find(KeywordCheck02) != std::string::npos)
	{
		FoundRoughness = SearchRoughnessInput;
	}
	else if (SearchRoughnessInput.find(KeywordCheck03) != std::string::npos)
	{
		FoundRoughness = SearchRoughnessInput;
	}

	return FoundRoughness;
}

std::string SearchGloss(std::string SearchGlossInput)
{
	std::string KeywordCheck01 = "GLOSS";
	std::string KeywordCheck02 = "GLOSSINESS";
	std::string KeywordCheck03 = "gloss";
	std::string KeywordCheck04 = "glossiness";
	std::string KeywordCheck05 = "Gloss";
	std::string KeywordCheck06 = "Glossiness";

	std::string FoundGloss;

	if (SearchGlossInput.find(KeywordCheck01) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}
	else if (SearchGlossInput.find(KeywordCheck02) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}
	else if (SearchGlossInput.find(KeywordCheck03) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}
	else if (SearchGlossInput.find(KeywordCheck04) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}
	else if (SearchGlossInput.find(KeywordCheck05) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}
	else if (SearchGlossInput.find(KeywordCheck06) != std::string::npos)
	{
		FoundGloss = SearchGlossInput;
	}

	return FoundGloss;
}

std::string SearchMetallic(std::string SearchMetallicInput)
{
	std::string KeywordCheck01 = "METALNESS_";
	std::string KeywordCheck02 = "metalness";
	std::string KeywordCheck03 = "metallic";
	std::string KeywordCheck04 = "METALLIC";
	std::string KeywordCheck05 = "Metalness";
	std::string KeywordCheck06 = "Metallic";

	std::string FoundMetallic;

	if (SearchMetallicInput.find(KeywordCheck01) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}
	else if (SearchMetallicInput.find(KeywordCheck02) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}
	else if (SearchMetallicInput.find(KeywordCheck03) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}
	else if (SearchMetallicInput.find(KeywordCheck04) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}
	else if (SearchMetallicInput.find(KeywordCheck05) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}
	else if (SearchMetallicInput.find(KeywordCheck06) != std::string::npos)
	{
		FoundMetallic = SearchMetallicInput;
	}


	return FoundMetallic;
}

std::string SearchNormal(std::string SearchNormalInput)
{
	std::string KeywordCheck01 = "NRM";
	std::string KeywordCheck02 = "Normal";
	std::string KeywordCheck03 = "Normals";
	std::string KeywordCheck04 = "nrm";
	std::string KeywordCheck05 = "normal";
	std::string KeywordCheck06 = "normals";
	std::string KeywordCheck07 = "NORMAL";
	std::string KeywordCheck08 = "NRM16";

	std::string FoundNormal;
	std::string FoundNormal16;

	if (SearchNormalInput.find(KeywordCheck01) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
		if (FoundNormal.find(KeywordCheck08) != std::string::npos)
		{
			FoundNormal = FoundNormal16;
		}
	}
	else if (SearchNormalInput.find(KeywordCheck02) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}
	else if (SearchNormalInput.find(KeywordCheck03) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}
	else if (SearchNormalInput.find(KeywordCheck04) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}
	else if (SearchNormalInput.find(KeywordCheck05) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}
	else if (SearchNormalInput.find(KeywordCheck06) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}
	else if (SearchNormalInput.find(KeywordCheck07) != std::string::npos)
	{
		FoundNormal = SearchNormalInput;
	}

	return FoundNormal;
}

// FUNCTIONS FOR CUTTING THE PATH STRING
std::string AssetPathEdit(std::string AssetPath, std::function<std::string(std::string)> InFunc)
{
	char LookFor = '\\';

	size_t LookPos = AssetPath.find_last_of(LookFor);

	if (LookPos != std::string::npos)
	{
		AssetPath = AssetPath.substr(0, LookPos + 1) + "\n";
	}

	return AssetPath;

}

std::string AssetItemEdit(std::string AssetItem, std::function<std::string(std::string)> InFunc)
{
	char LookFor = '\\';

	size_t LookPos = AssetItem.find_last_of(LookFor);

	if (LookPos != std::string::npos)
	{
		AssetItem = AssetItem.substr(LookPos + 1);
	}

	return AssetItem;
}


int main()
{


	// ABSOLUTE PATH THAT THE BLENDER AUTOMATED RENDER WILL SEARCH TEXTURE MAPS FROM 
	std::string path = "\\PLACEHOLDER\\";

	// LOGS AND LISTS CREATED
	std::ofstream Log1_InitialList(".\\Log1_initial-list.txt");
	std::ofstream Log2_PathList(".\\Log2_path-list.txt");
	std::ofstream Log3_AssetItemList(".\\Log3_asset-item-list.txt");

	for (const fs::directory_entry& entry : fs::recursive_directory_iterator(path))
	{
		std::cout << "Building logs......." << '\n';

		Log1_InitialList << SearchNormal(entry.path().string() + '\n');
		Log2_PathList << AssetPathEdit(SearchNormal(entry.path().string()), &SearchNormal);
		Log3_AssetItemList << AssetItemEdit(SearchNormal(entry.path().string() + '\n'), &SearchNormal);

	}

	Log1_InitialList.close();
	Log2_PathList.close();
	Log3_AssetItemList.close();

	std::cout << "Logging passed!";

	//  OPEN PATH LIST WITH RELEVANT IMAGE ASSETS
	std::ifstream MainPathList(".\\Log2_path-list.txt", std::ios::in);

	//  LOG OF PATH LIST RENDERING. THIS CHECKS WHAT HAS BEEN RENDERED AND CONTINUES RENDERING WHERE IT LEFT OFF
	std::ifstream PathListCompleted_read(".\\Path_list_completed.txt", std::ios::in);
	std::ofstream PathListCompleted_write(".\\Path_list_completed.txt", std::ios::out | std::ios::app);

	std::string Compare;
	std::string ToCompare;

	std::string TxAlbedo;
	std::string TxRoughness;
	std::string TxGloss;
	std::string TxMetallic;
	std::string TxNormal;
	std::string WatermarkName;
	int counter = 0;

	std::string PythonScriptRelativePath = ".\\Texture_library_automation.py";

	// FILL IN THE ABSOLUTE FILE PATHS HERE. THESE WILL BE WRITTEN TO THE .bat FILE THAT WILL RUN BLENDER IN THE BACKGROUND
	std::string BlenderAppPath = "cd \"C:\\PLACEHOLDER\\PLACEHOLDER\\PLACEHOLDER\"\n";
	std::string BlenderRenderPath = "C:\\PLACEHOLDER\\PLACEHOLDER\\PLACEHOLDER\\BlenderAutoRendering.blend";
	std::string PythonScriptAbsolutePath = "C:\\PLACEHOLDER\\PLACEHOLDER\\PLACEHOLDER\\" + PythonScriptRelativePath.substr(1);

	while (getline(MainPathList, Compare))
	{
		counter++;
		// AUTOMATION FILES FOR BLENDER
		std::ofstream AutomationScript(PythonScriptRelativePath, std::ios::out | std::ios::trunc);
		std::ofstream TextWatermark(".\\Text_watermark.txt", std::ios::trunc);
		std::ofstream BlenderCMD(".\\RunBlenderCMD.bat", std::ios::trunc);

		// WRITTING THE .bat FILE
		BlenderCMD << BlenderAppPath << "blender -b " << "\"" << BlenderRenderPath << "\"" << " --python " << "\"" << PythonScriptAbsolutePath << "\"" << " --enable-autoexec -f " + std::to_string(counter);
		BlenderCMD.close();

		getline(PathListCompleted_read, ToCompare);

		if (ToCompare.find(Compare) == std::string::npos)
		{
			TxAlbedo = "__";
			TxRoughness = "__";
			TxMetallic = "__";
			TxNormal = "__";

			for (const fs::directory_entry& Script_entry : fs::directory_iterator(Compare))
			{
				// SEARCH FOR TEXTURES MAPS ACCORDING TO WHAT TYPE THE TEXTURE IS
				if (SearchAlbedo(Script_entry.path().string()) == Script_entry.path().string())
				{
					TxAlbedo = "\nalbedoTex = mat_TexLib.node_tree.nodes.new(\"ShaderNodeTexImage\")\nalbedoTex.location = -600, 514\nalbedoTex.image = bpy.data.images.load(r\"" + Script_entry.path().string() + "\")\nmat_TexLib.node_tree.links.new(bsdf.inputs[0], albedoTex.outputs[0])";
					WatermarkName = Script_entry.path().string();
				}
				if ((SearchRoughness(Script_entry.path().string()) == Script_entry.path().string()) || (SearchGloss(Script_entry.path().string()) == Script_entry.path().string()))
				{
					if (SearchRoughness(Script_entry.path().string()) == Script_entry.path().string())
					{
						TxRoughness = "\nroughnessTex = mat_TexLib.node_tree.nodes.new(\"ShaderNodeTexImage\")\nroughnessTex.location = -600, 214\nroughnessTex.image = bpy.data.images.load(r\"" + Script_entry.path().string() + "\")\nroughnessTex.image.colorspace_settings.name = \"Non-Color\"\nmat_TexLib.node_tree.links.new(bsdf.inputs[9], roughnessTex.outputs[0])";
					}
					else if (SearchGloss(Script_entry.path().string()) == Script_entry.path().string())
					{
						TxRoughness = "\nroughnessTex = mat_TexLib.node_tree.nodes.new(\"ShaderNodeTexImage\")\nroughnessTex.location = -600, 214\ninvert = mat_TexLib.node_tree.nodes.new(\"ShaderNodeInvert\")\ninvert.location = -300, 214\nroughnessTex.image = bpy.data.images.load(r\"" + Script_entry.path().string() + "\")\nroughnessTex.image.colorspace_settings.name = \"Non-Color\"\nmat_TexLib.node_tree.links.new(bsdf.inputs[9], invert.outputs[0])\nmat_TexLib.node_tree.links.new(invert.inputs[1], roughnessTex.outputs[0])";
					}
				}
				if (SearchMetallic(Script_entry.path().string()) == Script_entry.path().string())
				{
					TxMetallic = "\nmetallicTex = mat_TexLib.node_tree.nodes.new(\"ShaderNodeTexImage\")\nmetallicTex.location = -600, 214\nmetallicTex.image = bpy.data.images.load(r\"" + Script_entry.path().string() + "\")\nmetallicTex.image.colorspace_settings.name = \"Non-Color\"\nmat_TexLib.node_tree.links.new(bsdf.inputs[6],metallicTex.outputs[0])";
				}
				if (SearchNormal(Script_entry.path().string()) == Script_entry.path().string())
				{
					TxNormal = "\nnormalTex = mat_TexLib.node_tree.nodes.new(\"ShaderNodeTexImage\")\nnormalTex.location = -600, -414\nnormal_map = mat_TexLib.node_tree.nodes.new(\"ShaderNodeNormalMap\")\nnormal_map.location = -300, -414\nnormalTex.image = bpy.data.images.load(r\"" + Script_entry.path().string() + "\")\nnormalTex.image.colorspace_settings.name = \"Non-Color\"\nmat_TexLib.node_tree.links.new(normal_map.inputs[1], normalTex.outputs[0])\nmat_TexLib.node_tree.links.new(bsdf.inputs[22], normal_map.outputs[0])";
				}
			}
			// WRITTING .py SCRIPT
			AutomationScript << "import bpy" <<
				'\n' << "bpy.data.objects[\"TextGeoNodes\"].select_set(True)" <<
				'\n' << "totem = bpy.data.objects[\"Cube\"]" <<
				'\n' << "bpy.context.view_layer.objects.active = bpy.data.objects[\"TextGeoNodes\"]" <<

				// IT IS IMPORTANT TO INPUT THE ABSOLUTE PATH OF YOUR Text_watermark.txt FILE USING FORWARD SLASHES OTHERWISE THE RENDER WON'T HAPPEN PROPERLY
				'\n' << "textWatermark_src = open(\"PLACEHOLDER/PLACEHOLDER\", 'r')" <<

				'\n' << "textWatermark = textWatermark_src.read()" <<
				'\n' << "bpy.context.object.modifiers[\"GeometryNodes\"][\"Input_3\"] = textWatermark" <<
				'\n' << "bpy.ops.object.editmode_toggle()" <<
				'\n' << "bpy.ops.object.editmode_toggle()" <<
				'\n' << "bpy.context.scene.render.filepath = \"//TextureLibraryRenders/\"+textWatermark" <<
				'\n' << "textWatermark_src.close()" <<
				'\n' << "bpy.data.objects[\"TextGeoNodes\"].select_set(False)" <<
				'\n' << "totem.select_set(True)" <<
				'\n' << "bpy.context.view_layer.objects.active = bpy.data.objects[\"Cube\"]" <<
				'\n' << "mat_TexLib = bpy.data.materials.new(\"MT_TextureLibrary\")" <<
				'\n' << "mat_TexLib.use_nodes = True" <<
				'\n' << "bsdf = mat_TexLib.node_tree.nodes[\"Principled BSDF\"]" <<
				'\n' << "#Albedo" <<
				TxAlbedo <<
				'\n' << "#Roughness/Gloss" <<
				TxRoughness <<
				'\n' << "#Metallic" <<
				TxMetallic <<
				'\n' << "#Normal" <<
				TxNormal <<
				'\n' << "#Assigning material" <<
				'\n' << "totem.data.materials.append(mat_TexLib)" <<
				'\n'
				;

			// WRITING THE .txt FOR WATERMARK
			TextWatermark << AssetItemEdit(SearchAlbedo(WatermarkName), &SearchAlbedo);

			TextWatermark.close();

			AutomationScript.close();


			// RUN BLENDER IN CMD
			std::cout << '\n' << "Blender Opening";

			std::system(".\\RunBlenderCMD.bat");

			std::system("exit");

			PathListCompleted_write << Compare << "\n";

			std::cout << '\n' << "Blender Closing!";
		}
		else {
			std::cout << '\n' << "Checking completed";
		}
	}

	PathListCompleted_write.close();
	PathListCompleted_read.close();
	MainPathList.close();

	std::cout << '\n' << "All paths rendered!";

	return 0;
}

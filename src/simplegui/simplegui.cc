#include "simplegui.h"
#include "Core/Log.h"

#include "imgui/imgui.h"
#include "imgui/imgui_impl_opengl3.h"

namespace Oryol {

	//------------------------------------------------------------------------------
void SimpleGui::Works() {
	Log::Dbg("It's a works!\n");
}

void SimpleGui::Setup() {
	ImGui::CreateContext();
	ImGui_ImplOpenGL3_Init();
	ImGui::StyleColorsDark();
	Log::Dbg("Module is set up!\n");
}

void SimpleGui::NewFrame() {
	
	auto& tmp = ImGui::GetIO();
	tmp.DisplaySize.x = 500;
	tmp.DisplaySize.y = 300;

	ImGui_ImplOpenGL3_NewFrame();
	ImGui::NewFrame();

}

void SimpleGui::Render() {
	ImGui::Render();
	ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
	Log::Dbg("Module is Rendered!\n");
}

void SimpleGui::Teardown() {
	ImGui_ImplOpenGL3_Shutdown();
	ImGui::DestroyContext();
	Log::Dbg("Module is shut down!");
}

} // namespace Oryol

#include "Game.h"

Game::Game(){
#ifndef DEBUG
	SetTraceLogLevel(LOG_NONE);
#endif
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(640,480,"win");
	SetExitKey(KEY_NULL);
	SetTargetFPS(60);

	rlImGuiSetup(true);

	ImGuiIO &io=ImGui::GetIO();
	io.FontGlobalScale=1.5;
}

Game::~Game(){
	rlImGuiShutdown();
	CloseWindow();
}

void Game::exec(){
	bool run=true;
	while(!WindowShouldClose()&&run){
		BeginDrawing();
		ClearBackground(BLACK);
		rlImGuiBegin();

		if(!update_()){
			run=false;
		}
		ImGui::Begin("hello win");

		static float value=0.0f;
		ImGui::Text("is a value: %.3f",value);
		ImGui::SeparatorText("change float value");
		ImGui::NewLine();
		ImGui::SliderFloat("slider",&value,0,1);

		ImGui::End();
		rlImGuiEnd();
		EndDrawing();
	}
}

bool Game::update_(){
	float deltaTime=GetFrameTime();
	if(deltaTime>1.f/5) deltaTime=1.f/5;

	if(IsKeyDown(KEY_D)) pos_.x+=200.f*deltaTime;
	if(IsKeyDown(KEY_A)) pos_.x-=200.f*deltaTime;
	if(IsKeyDown(KEY_S)) pos_.y+=200.f*deltaTime;
	if(IsKeyDown(KEY_W)) pos_.y-=200.f*deltaTime;

	DrawRectangle(pos_.x,pos_.y,50,50,RED);

	return true;
}


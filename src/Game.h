#include <imgui.h>
#include <rlImGui.h>
#include <raylib.h>

class Game{
public:
	static Game &getGame(){static Game game;return game;}
	void exec();
private:
	Game();
	~Game();
	Game(Game&)=delete;
	Game(Game&&)=delete;
	Game &operator=(Game&)=delete;
	Game &operator=(Game&&)=delete;
private:
	bool update_();

	Vector2 pos_{};
};


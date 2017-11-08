/*



*/
#pragma once



class InputManager
{
public:
	InputManager() = default;
	//InputManager(const InputManager&);
	~InputManager() = default;

	void Init();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};
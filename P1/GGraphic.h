#pragma once
#include <d3d9.h>
#include <d3dx9.h>
class GGraphic
{
private:
	static GGraphic* sInstance;
	GGraphic();
	~GGraphic();
public:
	IDirect3D9* direct3D9;
	D3DPRESENT_PARAMETERS d3dPP;
	IDirect3DDevice9* d3dDevice;

	static GGraphic* getInstance();
	static void releaseInstance();
	//void update();
	void begin();
	void end();
};


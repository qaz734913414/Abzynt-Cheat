#include "autopistol.hpp"
std::unique_ptr<c_autopistol> g_pautopistol = std::make_unique<c_autopistol>();

void c_autopistol::think()
{
	if (g_config.settings.autopistol)
	{
		if (GetAsyncKeyState(1)) // We're checking for mouse1 clicked so w're shooting.
		{
			if (local_weapon.is_auto()) // We're checking if weapon is pistol.
			{
				g_pclient->shot();
			}
		}
	}
}
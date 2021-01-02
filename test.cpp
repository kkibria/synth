using namespace std;

#include <string>
#include <vector>
#define UNICODE
#include <Windows.h>

int main () 
{ 
	int nDeviceCount = waveOutGetNumDevs();
	vector<wstring> sDevices;
	WAVEOUTCAPS woc;
	for (int n = 0; n < nDeviceCount; n++)
		if (waveOutGetDevCaps(n, &woc, sizeof(WAVEOUTCAPS)) == S_OK) {
			wstring dvc(woc.szPname);
			sDevices.push_back(dvc);
		}
	return 0; 
} 

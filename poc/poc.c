#include "poc.h"

int main(int argc, char** argv)
{
	char unused = 0;
	HANDLE h_driver = (HANDLE)-1;

	system("title poc | color f");
	printf("[!] AMD uProf Profiler Suite AMDPowerProfiler.sys Improper User Input Validation Arbitrary Kernel Code Execution\n[!] Written by ExAllocatePool2.\n[!] Lets fight!");

	h_driver = CreateFileA(TARGET_DEVICE, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, 0, 0);
	if (h_driver == (HANDLE)-1)
	{
		printf("\n[-] Failed to retrieve a handle to the device driver. Error: %d (0x%x)", GetLastError(), GetLastError());
		unused = getchar();
		return 1;
	}
	printf("\n[+] Retrieved a handle to the device driver. Handle Value: 0x%p", h_driver);

	printf("\n[-] At this point, I realized that the AMDPowerProfiler.sys device driver does not have any easy-to-call wrmsr instructions.\n[-] I want a fun, easy side-project, not a new main project.");
	unused = getchar();

	return 0;
}
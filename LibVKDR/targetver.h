#pragma once

// Durch Einbeziehen von"SDKDDKVer.h" wird die höchste verfügbare Windows-Plattform definiert.

// Wenn Sie die Anwendung für eine frühere Windows-Plattform erstellen möchten, schließen Sie "WinSDKVer.h" ein, und
// legen Sie das _WIN32_WINNT-Makro auf die zu unterstützende Plattform fest, bevor Sie "SDKDDKVer.h" einschließen.

#include <WinSDKVer.h>

#ifdef  _WIN32_WINNT
#undef  _WIN32_WINNT
#endif

#define _WIN32_WINNT _WIN32_WINNT_WIN7

#include <SDKDDKVer.h>

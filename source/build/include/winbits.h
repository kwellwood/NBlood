// Windows layer-independent code

#ifndef winbits_h__
#define winbits_h__

#include "compat.h"

#ifdef APPNAME
# define WindowClass APPNAME
#else
# define WindowClass "buildapp"
#endif

// TODO: actually make the layout switching unnecessary :/

extern int32_t win_priorityclass;
extern char    win_silentvideomodeswitch;

int32_t windowsCheckForUpdates(char *buffer);
int     windowsCheckAlreadyRunning(void);
void    windowsDwmEnableComposition(int compEnable);
int     windowsGetCommandLine(char **argvbuf);
LPTSTR  windowsGetErrorMessage(DWORD code);
HKL     windowsGetSystemKeyboardLayout(void);
char *  windowsGetSystemKeyboardLayoutName(void);
BOOL    windowsGetVersion(void);
void    windowsHandleFocusChange(int const appactive);
void    windowsShowError(const char *m);
void    windowsPlatformCleanup(void);
void    windowsPlatformInit(void);
int     windowsPreInit(void);
void    windowsSetupTimer(int ntDllVoodoo);
void    windowsSetKeyboardLayout(char const *layout, int focusChanged = false);
#endif // winbits_h__

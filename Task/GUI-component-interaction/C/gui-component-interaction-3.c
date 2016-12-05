#include <windows.h>
#include "resource.h"

LANGUAGE LANG_NEUTRAL, SUBLANG_NEUTRAL
IDD_DLG DIALOG 0, 0, 154, 46
STYLE DS_3DLOOK | DS_CENTER | DS_MODALFRAME | DS_SHELLFONT | WS_CAPTION |
WS_VISIBLE | WS_POPUP | WS_SYSMENU
CAPTION "GUI Component Interaction"
FONT 12, "Ms Shell Dlg" {
    EDITTEXT        IDC_INPUT, 7, 7, 140, 12, ES_AUTOHSCROLL | ES_NUMBER
    PUSHBUTTON      "Increment", IDC_INCREMENT, 7, 25, 50, 14
    PUSHBUTTON      "Random", IDC_RANDOM, 62, 25, 50, 14
    PUSHBUTTON      "Quit", IDC_QUIT, 117, 25, 30, 14
}
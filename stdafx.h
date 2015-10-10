#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma warning (disable:4820) //padded structs
#pragma warning (disable:4710) //function selected for inlining
#pragma warning (disable:4711) //function was not inlined
#include <windows.h>
#include <windowsx.h>
#include <richedit.h>
#include <shellapi.h>
#include <commdlg.h>
#include <strsafe.h>

//project
#include "blowfish.h"
#include "sha.h"
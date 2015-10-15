#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma warning (disable:4820) //padded structs
#pragma warning (disable:4710) //function selected for inlining
#pragma warning (disable:4711) //function was not inlined
#pragma warning (disable:4365) //sign conversion
#pragma warning (disable:4191) //FARPROC unsafe conversion
#pragma warning (disable:4987) //nonstandard extension used
#include <windows.h>
#include <windowsx.h>
#include <richedit.h>
#include <shellapi.h>
#include <commdlg.h>
#include <tchar.h>
#include <strsafe.h>
#include <shlwapi.h>
#include <atlpath.h>
#pragma warning (default:4365)
#pragma warning (default:4191)
#pragma warning (default:4987)

//project
#include "blowfish.h"
#include "sha.h"
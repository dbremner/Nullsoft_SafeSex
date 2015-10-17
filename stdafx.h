#pragma once
#define WIN32_LEAN_AND_MEAN
//these are always disabled
#pragma warning (disable:4820) //padded structs
#pragma warning (disable:4710) //function selected for inlining
#pragma warning (disable:4711) //function was not inlined
//these are disabled around noisy headers
#pragma warning (disable:4365) //sign conversion
#pragma warning (disable:4191) //FARPROC unsafe conversion
#pragma warning (disable:4987) //nonstandard extension used
#pragma warning (disable:4302) //truncation
#pragma warning (disable:4625) //copy ctor could not be generated
#pragma warning (disable:4626) //assignment operator could not be generated
#include <windows.h>
#include <windowsx.h>
#include <richedit.h>
#include <shellapi.h>
#include <commdlg.h>
#include <tchar.h>
#include <strsafe.h>
#include <shlwapi.h>
#include <atlpath.h>
#include <atlapp.h>
#include <atlgdi.h>
#include <atlmisc.h>
#pragma warning (default:4365)
#pragma warning (default:4191)
#pragma warning (default:4987)
#pragma warning (default:4302)
#pragma warning (default:4625)
#pragma warning (default:4626)

//project
#include "blowfish.h"
#include "sha.h"
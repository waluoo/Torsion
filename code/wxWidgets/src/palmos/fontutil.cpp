///////////////////////////////////////////////////////////////////////////////
// Name:        src/palmos/fontutil.cpp
// Purpose:     font-related helper functions
// Author:      William Osborne - minimal working wxPalmOS port
// Modified by:
// Created:     10/13/04
// RCS-ID:      $Id: fontutil.cpp,v 1.2 2005/01/21 21:04:01 ABX Exp $
// Copyright:   (c) William Osborne
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

// ============================================================================
// declarations
// ============================================================================

// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "fontutil.h"
#endif

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
    #include "wx/string.h"
    #include "wx/log.h"
    #include "wx/intl.h"
    #include "wx/encinfo.h"
#endif //WX_PRECOMP

#include "wx/fontutil.h"
#include "wx/fontmap.h"

#include "wx/tokenzr.h"

#ifndef HANGUL_CHARSET
#    define HANGUL_CHARSET  129
#endif

// ============================================================================
// implementation
// ============================================================================

// ----------------------------------------------------------------------------
// wxNativeEncodingInfo
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// helper functions
// ----------------------------------------------------------------------------

bool wxGetNativeFontEncoding(wxFontEncoding encoding,
                             wxNativeEncodingInfo *info)
{
    return false;
}

bool wxTestFontEncoding(const wxNativeEncodingInfo& info)
{
    return false;
}

// ----------------------------------------------------------------------------
// wxFontEncoding <-> CHARSET_XXX
// ----------------------------------------------------------------------------

wxFontEncoding wxGetFontEncFromCharSet(int cs)
{
    return wxFONTENCODING_SYSTEM;
}

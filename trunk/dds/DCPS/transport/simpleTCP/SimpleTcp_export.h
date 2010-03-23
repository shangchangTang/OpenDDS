// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl -s SimpleTcp
// ------------------------------
#ifndef SIMPLETCP_EXPORT_H
#define SIMPLETCP_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (SIMPLETCP_HAS_DLL)
#  define SIMPLETCP_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && SIMPLETCP_HAS_DLL */

#if !defined (SIMPLETCP_HAS_DLL)
#  define SIMPLETCP_HAS_DLL 1
#endif /* !SIMPLETCP_HAS_DLL */

#if defined (SIMPLETCP_HAS_DLL) && (SIMPLETCP_HAS_DLL == 1)
#  if defined (SIMPLETCP_BUILD_DLL)
#    define SimpleTcp_Export ACE_Proper_Export_Flag
#    define SIMPLETCP_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define SIMPLETCP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* SIMPLETCP_BUILD_DLL */
#    define SimpleTcp_Export ACE_Proper_Import_Flag
#    define SIMPLETCP_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define SIMPLETCP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* SIMPLETCP_BUILD_DLL */
#else /* SIMPLETCP_HAS_DLL == 1 */
#  define SimpleTcp_Export
#  define SIMPLETCP_SINGLETON_DECLARATION(T)
#  define SIMPLETCP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* SIMPLETCP_HAS_DLL == 1 */

// Set SIMPLETCP_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (SIMPLETCP_NTRACE)
#  if (ACE_NTRACE == 1)
#    define SIMPLETCP_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define SIMPLETCP_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !SIMPLETCP_NTRACE */

#if (SIMPLETCP_NTRACE == 1)
#  define SIMPLETCP_TRACE(X)
#else /* (SIMPLETCP_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define SIMPLETCP_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (SIMPLETCP_NTRACE == 1) */

#endif /* SIMPLETCP_EXPORT_H */

// End of auto generated file.

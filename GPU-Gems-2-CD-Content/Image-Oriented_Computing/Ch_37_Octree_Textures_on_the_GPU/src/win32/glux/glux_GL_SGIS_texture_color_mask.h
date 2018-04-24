
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_SGIS_texture_color_mask__
#define __GLUX_GL_SGIS_texture_color_mask__

GLUX_NEW_PLUGIN(GL_SGIS_texture_color_mask);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_TEXTURE_COLOR_WRITEMASK_SGIS
#  define GL_TEXTURE_COLOR_WRITEMASK_SGIS 0x81EF
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTextureColorMaskSGIS
typedef void (APIENTRYP PFNGLUXTEXTURECOLORMASKSGISPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTextureColorMaskSGIS
extern PFNGLUXTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
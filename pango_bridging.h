struct _PangoAttrIterator {};
struct _PangoAttrList {};
struct _PangoContext {};
struct _PangoContextClass {};
struct _PangoCoverage {};
struct _PangoFontDescription {};
struct _PangoFontsetSimple {};
struct _PangoFontsetSimpleClass {};
struct _PangoLanguage {};
struct _PangoLayout {};
struct _PangoLayoutClass {};
struct _PangoLayoutIter {};
struct _PangoMap {};
struct _PangoMapEntry {};
struct _PangoRendererPrivate {};
struct _PangoScriptForLang {};
struct _PangoScriptIter {};
struct _PangoTabArray {};

struct _PangoCairoCoreTextFont {};
struct _PangoCairoCoreTextFontClass {};
struct _PangoCairoCoreTextFontMap {};
struct _PangoCairoFcFontMap {};
struct _PangoCairoFont {};
struct _PangoCairoFontMap {};

#define PANGO_ENABLE_BACKEND
#define PANGO_ENABLE_ENGINE
#define GLIB_DISABLE_DEPRECATION_WARNINGS
#include <sys/types.h>
#include <pango-1.0/pango/pango.h>
#include <pango-1.0/pango/pango-attributes.h>
#include <pango-1.0/pango/pango-bidi-type.h>
#include <pango-1.0/pango/pango-break.h>
#include <pango-1.0/pango/pango-context.h>
#include <pango-1.0/pango/pango-coverage.h>
#include <pango-1.0/pango/pango-engine.h>
#include <pango-1.0/pango/pango-enum-types.h>
#include <pango-1.0/pango/pango-features.h>
#include <pango-1.0/pango/pango-font.h>
#include <pango-1.0/pango/pango-fontmap.h>
#include <pango-1.0/pango/pango-fontset.h>
#include <pango-1.0/pango/pango-glyph-item.h>
#include <pango-1.0/pango/pango-glyph.h>
#include <pango-1.0/pango/pango-gravity.h>
#include <pango-1.0/pango/pango-item.h>
#include <pango-1.0/pango/pango-language.h>
#include <pango-1.0/pango/pango-layout.h>
#include <pango-1.0/pango/pango-matrix.h>
#include <pango-1.0/pango/pango-modules.h>
#include <pango-1.0/pango/pango-ot.h>
#include <pango-1.0/pango/pango-renderer.h>
#include <pango-1.0/pango/pango-script.h>
#include <pango-1.0/pango/pango-tabs.h>
#include <pango-1.0/pango/pango-types.h>
#include <pango-1.0/pango/pango-utils.h>
#include <pango-1.0/pango/pangocairo.h>
#include <pango-1.0/pango/pangofc-decoder.h>
#include <pango-1.0/pango/pangofc-font.h>
#include <pango-1.0/pango/pangofc-fontmap.h>
#include <pango-1.0/pango/pangoft2.h>
#ifdef __APPLE__
#include <pango-1.0/pango/pangocoretext.h>
#endif

typedef struct {
	const char lang[6];
	PangoScript scripts[3];
} PangoScriptForLang;

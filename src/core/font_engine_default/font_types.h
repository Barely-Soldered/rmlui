#pragma once

#include <rmlui/core/font_glyph.h>
#include <rmlui/core/style_types.h>
#include <rmlui/core/types.h>

namespace Rml {

using FontFaceHandleFreetype = uintptr_t;

struct FaceVariation {
	Style::FontWeight weight;
	uint16_t width;
	int named_instance_index;
};

inline bool operator<(const FaceVariation& a, const FaceVariation& b)
{
	if (a.weight == b.weight)
		return a.width < b.width;
	return a.weight < b.weight;
}

} // namespace Rml

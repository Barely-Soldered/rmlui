#pragma once

#include <rmlui/core/element_document.h>

namespace Rml {
namespace Debugger {

class ElementDebugDocument : public ElementDocument {
public:
	RMLUI_RTTI_DefineWithParent(ElementDebugDocument, ElementDocument)

	ElementDebugDocument(const String& tag);
};

} // namespace Debugger
} // namespace Rml

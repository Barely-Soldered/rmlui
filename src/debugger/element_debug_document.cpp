#include "element_debug_document.h"

namespace Rml {
namespace Debugger {

ElementDebugDocument::ElementDebugDocument(const String& tag) : ElementDocument(tag)
{
	SetFocusableFromModal(true);
}

} // namespace Debugger
} // namespace Rml

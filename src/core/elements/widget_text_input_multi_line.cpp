#include "widget_text_input_multi_line.h"
#include <rmlui/core/dictionary.h>
#include <rmlui/core/element_text.h>
#include <algorithm>

namespace Rml {

WidgetTextInputMultiLine::WidgetTextInputMultiLine(ElementFormControl* parent) : WidgetTextInput(parent) {}

WidgetTextInputMultiLine::~WidgetTextInputMultiLine() {}

void WidgetTextInputMultiLine::SanitizeValue(String& value)
{
	value.erase(std::remove_if(value.begin(), value.end(), [](char c) { return c == '\r' || c == '\t'; }), value.end());
}

void WidgetTextInputMultiLine::LineBreak() {}

} // namespace Rml

#include "element_text_selection.h"
#include <rmlui/core/property_id_set.h>
#include "widget_text_input.h"

namespace Rml {

ElementTextSelection::ElementTextSelection(const String& tag) : Element(tag)
{
	widget = nullptr;
}

ElementTextSelection::~ElementTextSelection() {}

void ElementTextSelection::SetWidget(WidgetTextInput* _widget)
{
	widget = _widget;
}

void ElementTextSelection::OnPropertyChange(const PropertyIdSet& changed_properties)
{
	Element::OnPropertyChange(changed_properties);

	if (widget == nullptr)
		return;

	if (changed_properties.Contains(PropertyId::Color) || changed_properties.Contains(PropertyId::BackgroundColor))
	{
		widget->UpdateSelectionColours();
	}
}

} // namespace Rml

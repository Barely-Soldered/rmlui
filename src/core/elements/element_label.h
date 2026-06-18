#pragma once

#include <rmlui/core/element.h>
#include <rmlui/core/event_listener.h>
#include <rmlui/core/header.h>

namespace Rml {

/**
    A specialisation of the generic Core::Element representing a label element.

 */

class ElementLabel : public Element, public EventListener {
public:
	RMLUI_RTTI_DefineWithParent(ElementLabel, Element)

	ElementLabel(const String& tag);
	virtual ~ElementLabel();

protected:
	void OnPseudoClassChange(const String& pseudo_class, bool activate) override;

	void ProcessEvent(Event& event) override;

private:
	Element* GetTarget();

	bool disable_click = false;
};

} // namespace Rml

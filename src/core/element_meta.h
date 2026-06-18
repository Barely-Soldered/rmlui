#pragma once

#include <rmlui/core/computed_values.h>
#include <rmlui/core/element.h>
#include <rmlui/core/element_scroll.h>
#include <rmlui/core/traits.h>
#include <rmlui/core/types.h>
#include "controlled_lifetime_resource.h"
#include "element_background_border.h"
#include "element_effects.h"
#include "element_style.h"
#include "event_dispatcher.h"
#include "pool.h"

namespace Rml {

// Meta objects for element collected in a single struct to reduce memory allocations
struct ElementMeta {
	explicit ElementMeta(Element* el) : event_dispatcher(el), style(el), background_border(), effects(el), scroll(el), computed_values(el) {}
	SmallUnorderedMap<EventId, EventListener*> attribute_event_listeners;
	EventDispatcher event_dispatcher;
	ElementStyle style;
	ElementBackgroundBorder background_border;
	ElementEffects effects;
	ElementScroll scroll;
	Style::ComputedValues computed_values;
};

struct ElementMetaPool {
	Pool<ElementMeta> pool{50, true};

	static ControlledLifetimeResource<ElementMetaPool> element_meta_pool;
	static void Initialize();
	static void Shutdown();
};

} // namespace Rml

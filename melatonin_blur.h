#pragma once

/*
BEGIN_JUCE_MODULE_DECLARATION

ID:               melatonin_blur
vendor:           Sudara
version:          1.2.0
name:             Optimized CPU vector blurring and JUCE drop shadowing with tests and benchmarks
description:      Blurry Life
license:          MIT
minimumCppStandard: 17
dependencies:     juce_graphics,juce_gui_basics,juce_audio_basics

END_JUCE_MODULE_DECLARATION
*/

#include "juce_graphics/juce_graphics.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wshorten-64-to-32"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "melatonin/cached_blur.h"

#pragma GCC diagnostic pop


#include "melatonin/shadows.h"
#include "melatonin/blur_demo_component.h"

// These are juce::Component ImageEffects
// see https://docs.juce.com/master/classImageEffectFilter.html
//#include "melatonin/image_effects/blur_effect.h"
//#include "melatonin/image_effects/drop_shadow_effect.h"
//#include "melatonin/image_effects/reflection_effect.h"

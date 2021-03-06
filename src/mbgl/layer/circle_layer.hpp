#ifndef MBGL_CIRCLE_LAYER
#define MBGL_CIRCLE_LAYER

#include <mbgl/style/style_layer.hpp>
#include <mbgl/style/style_properties.hpp>
#include <mbgl/style/paint_properties_map.hpp>
#include <mbgl/style/class_properties.hpp>

namespace mbgl {

class CircleLayer : public StyleLayer {
public:
    void parseLayout(const JSVal&) override {};
    void parsePaints(const JSVal&) override;

    void recalculate(const StyleCalculationParameters&) override;

    std::unique_ptr<Bucket> createBucket(StyleBucketParameters&) const override;

    CirclePaintProperties properties;
};

}

#endif

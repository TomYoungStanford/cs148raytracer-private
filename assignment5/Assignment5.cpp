#include "assignment5/Assignment5.h"
#include "common/core.h"

std::shared_ptr<Camera> Assignment5::CreateCamera() const
{
    const glm::vec2 resolution = GetImageOutputResolution();
    std::shared_ptr<Camera> camera = std::make_shared<PerspectiveCamera>(resolution.y / resolution.x, 65.f);
    camera->SetPosition(glm::vec3(0.f, 0.f, 2.f));
    return camera;
}

std::shared_ptr<Scene> Assignment5::CreateScene() const
{
    std::shared_ptr<Scene> newScene = std::make_shared<Scene>();
    return newScene;
}

std::shared_ptr<class Sampler> Assignment5::CreateSampler() const
{
    return std::make_shared<RandomSampler>();
}

std::shared_ptr<class Renderer> Assignment5::CreateRenderer(std::shared_ptr<Scene> scene, std::shared_ptr<Sampler> sampler) const
{
    return std::make_shared<ForwardRenderer>(scene, sampler);
}

int Assignment5::GetSamplesPerPixel() const
{
    return 1;
}

bool Assignment5::NotifyNewPixelSample(glm::vec3 inputSampleColor, int sampleIndex)
{
    return true;
}
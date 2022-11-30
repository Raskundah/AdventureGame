#include "Feature.h++"

Feature::Feature()
{
}

Feature::~Feature()
{
}

void Feature::SetFeatureName(std::string newName)
{
	featureName = newName;
}

void Feature::SetFeatureDescription(std::string newDescription)
{
	featureDescription = newDescription;
}

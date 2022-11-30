#pragma once
#include<string>
class Feature
{
public:

	Feature();
	~Feature();

	void SetFeatureName(std::string newName);
	void SetFeatureDescription(std::string newDescription);

	protected:

	std::string featureDescription;
	std::string featureName;
};


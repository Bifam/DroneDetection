#pragma once

enum DISTANCE_UNIT_TYPE
{
	DISTANCE_KM,
	DISTANCE_M,
	DISTANCE_MILE
};

class DistanceFormula
{
private:
	double mBandwidthMax;
	double mPathLoss;
	double mBandwidthReal;
	double mFrequency;
	double mReceiverSensi;

public:
	DistanceFormula(double bandwidthMax, double pathLoss, 
		double bandwidthReal, double frequency, double receiverSensi);
	~DistanceFormula();

	// calculate distance from current data set in class
	double CalculateDistance(DISTANCE_UNIT_TYPE distanceType);
};


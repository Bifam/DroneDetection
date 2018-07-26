#include "stdafx.h"
#include <math.h>
#include "DistanceFormula.h"


DistanceFormula::DistanceFormula(double bandwidthMax, double pathLoss, 
	double bandwidthReal, double frequency, double receiverSensi) :
	mBandwidthMax(bandwidthMax),
	mPathLoss(pathLoss),
	mBandwidthReal(bandwidthReal),
	mFrequency(frequency),
	mReceiverSensi(receiverSensi)
{
};


DistanceFormula::~DistanceFormula()
{
}

double DistanceFormula::CalculateDistance(DISTANCE_UNIT_TYPE distanceType)
{
	//double distanncePow = (mBandwidthMax - mReceiverSensi - )
	return 0.0;
}

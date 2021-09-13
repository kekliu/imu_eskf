#ifndef IMU_ESKF_SIMPLE_ESTIMATOR_H
#define IMU_ESKF_SIMPLE_ESTIMATOR_H

#include "estimator.h"

class SimpleEstimator : public Estimator {
public:
  SimpleEstimator() {
    this->init_ok = false;
    this->pose = Quaterniond::Identity();
    this->last_timestamp = 0;
  }

  Quaterniond EstimatePose(double timestamp, const Vec3d &ang,
                           const Vec3d &acc) override;
};

#endif // IMU_ESKF_SIMPLE_ESTIMATOR_H
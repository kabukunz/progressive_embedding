#ifndef PROGRESSIVE_EMBEDDING_H
#define PROGRESSIVE_EMBEDDING_H

#include <Eigen/Core>

bool progressive_embedding(
  const Eigen::MatrixXd& V,
  Eigen::MatrixXi& F,
  Eigen::MatrixXd& uv,
  const Eigen::VectorXi& bi,
  const Eigen::MatrixXd& b,
  double eps,
  bool verbose=false
);

#endif

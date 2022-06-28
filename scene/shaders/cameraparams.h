#pragma once

#include "lightparams.h"

namespace sgf {

struct CameraParams {
	Mat4f projMatrix;
	Mat4f invProjMatrix;
	Mat4f cameraMatrix;
	Mat4f viewMatrix;
	Mat4f viewProjMatrix;
	Vec4f directionalLightVector;
	Vec4f lightPositions[maxLights];
	float clipNear = 0;
	float clipFar = 1000;
} SGF_ALIGN16;

} // namespace sgf
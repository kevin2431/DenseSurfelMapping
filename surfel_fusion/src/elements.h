#pragma once
#include <ros/ros.h>
#include <geometry_msgs/Pose.h>

struct Superpixel_seed
{
    float x, y;
    float size;
    float norm_x, norm_y, norm_z;
    float posi_x, posi_y, posi_z;
    float view_cos;
    float mean_depth;
    float mean_intensity;
    bool fused;
    bool stable;
    cv::Vec3b rgb_color;

    // for debug
    float min_eigen_value;
    float max_eigen_value;
};

struct SurfelElement
{
    float px, py, pz;   // position Sp
    float nx, ny, nz;   // normal Sn
    float size; //  Sr 半径
    float color;    // intensity Sc
    float weight;   // >0 Sw
    int update_times;   //St
    int last_update;    // Si  上一个观测到这个面片的关键帧
    cv::Vec3b rgb_color;
};

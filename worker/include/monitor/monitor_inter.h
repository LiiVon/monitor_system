#pragma once

#include <string>

#include "monitor_info.pb.h"

namespace monitor
{
class MonitorInter
{
public:
  MonitorInter() {}
  virtual ~MonitorInter() {}

  // 纯虚函数，不能直接实例化该类，必须由子类实现
  virtual void UpdateOnce(monitor::proto::MonitorInfo *monitor_info) = 0;
  virtual void Stop() = 0;
};
} // namespace monitor
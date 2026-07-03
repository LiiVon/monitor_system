#pragma once

#include <string>

#include "monitor/monitor_inter.h"
#include "monitor_info.pb.h"

// 采集CPU 平均负载
namespace monitor
{
class CpuLoadMonitor : public MonitorInter
{
public:
  CpuLoadMonitor() {}
  void UpdateOnce(monitor::proto::MonitorInfo *monitor_info) override;
  void Stop() override {}

private:
  float load_avg_1_;
  float load_avg_3_;
  float load_avg_15_;
};

} // namespace monitor

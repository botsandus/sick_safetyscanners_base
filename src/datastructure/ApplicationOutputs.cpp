#include <sick_microscan3_ros_driver/datastructure/ApplicationOutputs.h>

namespace sick {
namespace datastructure {

ApplicationOutputs::ApplicationOutputs()
{

}

std::vector<bool> ApplicationOutputs::getEvalOutVector() const
{
  return m_eval_out_vector;
}

void ApplicationOutputs::setEvalOutVector(const std::vector<bool> &eval_out_vector)
{
  m_eval_out_vector = eval_out_vector;
}

std::vector<bool> ApplicationOutputs::getEvalOutIsSafeVector() const
{
  return m_eval_out_is_safe_vector;
}

void ApplicationOutputs::setEvalOutIsSafeVector(const std::vector<bool> &eval_out_is_safe_vector)
{
  m_eval_out_is_safe_vector = eval_out_is_safe_vector;
}

std::vector<bool> ApplicationOutputs::getEvalOutIsValidVector() const
{
  return m_eval_out_is_valid_vector;
}

void ApplicationOutputs::setEvalOutIsValidVector(const std::vector<bool> &eval_out_is_valid_vector)
{
  m_eval_out_is_valid_vector = eval_out_is_valid_vector;
}

std::vector<UINT16> ApplicationOutputs::getMonitoringCaseVector() const
{
  return m_monitoring_case_vector;
}

void ApplicationOutputs::setMonitoringCaseVector(const std::vector<UINT16> &monitoring_case_vector)
{
  m_monitoring_case_vector = monitoring_case_vector;
}

std::vector<bool> ApplicationOutputs::getMonitoringCaseFlagsVector() const
{
  return m_monitoring_case_flags_vector;
}

void ApplicationOutputs::setMonitoringCaseFlagsVector(const std::vector<bool> &monitoring_case_flags_vector)
{
  m_monitoring_case_flags_vector = monitoring_case_flags_vector;
}

INT8 ApplicationOutputs::getSleepModeOutput() const
{
  return m_sleep_mode_output;
}

void ApplicationOutputs::setSleepModeOutput(const INT8 &sleep_mode_output)
{
  m_sleep_mode_output = sleep_mode_output;
}

bool ApplicationOutputs::getHostErrorFlagContaminationWarning() const
{
  return m_host_error_flag_contamination_warning;
}

void ApplicationOutputs::setHostErrorFlagContaminationWarning(bool host_error_flag_contamination_warning)
{
  m_host_error_flag_contamination_warning = host_error_flag_contamination_warning;
}

bool ApplicationOutputs::getHostErrorFlagContaminationError() const
{
  return m_host_error_flag_contamination_error;
}

void ApplicationOutputs::setHostErrorFlagContaminationError(bool host_error_flag_contamination_error)
{
  m_host_error_flag_contamination_error = host_error_flag_contamination_error;
}

bool ApplicationOutputs::getHostErrorFlagManipulationError() const
{
  return m_host_error_flag_manipulation_error;
}

void ApplicationOutputs::setHostErrorFlagManipulationError(bool host_error_flag_manipulation_error)
{
  m_host_error_flag_manipulation_error = host_error_flag_manipulation_error;
}

bool ApplicationOutputs::getHostErrorFlagGlare() const
{
  return m_host_error_flag_glare;
}

void ApplicationOutputs::setHostErrorFlagGlare(bool host_error_flag_glare)
{
  m_host_error_flag_glare = host_error_flag_glare;
}

bool ApplicationOutputs::getHostErrorFlagReferenceContourIntruded() const
{
  return m_host_error_flag_reference_contour_intruded;
}

void ApplicationOutputs::setHostErrorFlagReferenceContourIntruded(bool host_error_flag_reference_contour_intruded)
{
  m_host_error_flag_reference_contour_intruded = host_error_flag_reference_contour_intruded;
}

bool ApplicationOutputs::getHostErrorFlagCriticalError() const
{
  return m_host_error_flag_critical_error;
}

void ApplicationOutputs::setHostErrorFlagCriticalError(bool host_error_flag_critical_error)
{
  m_host_error_flag_critical_error = host_error_flag_critical_error;
}

INT16 ApplicationOutputs::getVelocity0() const
{
  return m_velocity_0;
}

void ApplicationOutputs::setVelocity0(const INT16 &velocity_0)
{
  m_velocity_0 = velocity_0;
}

INT16 ApplicationOutputs::getVelocity1() const
{
  return m_velocity_1;
}

void ApplicationOutputs::setVelocity1(const INT16 &velocity_1)
{
  m_velocity_1 = velocity_1;
}

bool ApplicationOutputs::getVelocity0Valid() const
{
  return m_velocity_0_valid;
}

void ApplicationOutputs::setVelocity0Valid(bool velocity_0_valid)
{
  m_velocity_0_valid = velocity_0_valid;
}

bool ApplicationOutputs::getVelocity1Valid() const
{
  return m_velocity_1_valid;
}

void ApplicationOutputs::setVelocity1Valid(bool velocity_1_valid)
{
  m_velocity_1_valid = velocity_1_valid;
}

bool ApplicationOutputs::getVelocity0TransmittedSafely() const
{
  return m_velocity_0_transmitted_safely;
}

void ApplicationOutputs::setVelocity0TransmittedSafely(bool velocity_0_transmitted_safely)
{
  m_velocity_0_transmitted_safely = velocity_0_transmitted_safely;
}

bool ApplicationOutputs::getVelocity1TransmittedSafely() const
{
  return m_velocity_1_transmitted_safely;
}

void ApplicationOutputs::setVelocity1TransmittedSafely(bool velocity_1_transmitted_safely)
{
  m_velocity_1_transmitted_safely = velocity_1_transmitted_safely;
}

std::vector<INT16> ApplicationOutputs::getResultingVelocityVector() const
{
  return m_resulting_velocity_vector;
}

void ApplicationOutputs::setResultingVelocityVector(const std::vector<INT16> &resulting_velocity_vector)
{
  m_resulting_velocity_vector = resulting_velocity_vector;
}

std::vector<bool> ApplicationOutputs::getResultingVelocityIsValidVector() const
{
  return m_resulting_velocity_is_valid_vector;
}

void ApplicationOutputs::setResultingVelocityIsValidVector(const std::vector<bool> &resulting_velocity_is_valid_vector)
{
  m_resulting_velocity_is_valid_vector = resulting_velocity_is_valid_vector;
}

bool ApplicationOutputs::getFlagsSleepModeOutputIsValid() const
{
  return m_flags_sleep_mode_output_is_valid;
}

void ApplicationOutputs::setFlagsSleepModeOutputIsValid(bool flags_sleep_mode_output_is_valid)
{
  m_flags_sleep_mode_output_is_valid = flags_sleep_mode_output_is_valid;
}

bool ApplicationOutputs::getFlagsHostErrorFlagsAreValid() const
{
  return m_flags_host_error_flags_are_valid;
}

void ApplicationOutputs::setFlagsHostErrorFlagsAreValid(bool flags_host_error_flags_are_valid)
{
  m_flags_host_error_flags_are_valid = flags_host_error_flags_are_valid;
}

}
}

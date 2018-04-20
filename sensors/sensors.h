// +build !minimal

#pragma once

#ifndef GO_QTSENSORS_H
#define GO_QTSENSORS_H

#include <stdint.h>

#ifdef __cplusplus
int QAccelerometer_QAccelerometer_QRegisterMetaType();
int QAccelerometerReading_QAccelerometerReading_QRegisterMetaType();
int QAltimeter_QAltimeter_QRegisterMetaType();
int QAltimeterReading_QAltimeterReading_QRegisterMetaType();
int QAmbientLightReading_QAmbientLightReading_QRegisterMetaType();
int QAmbientLightSensor_QAmbientLightSensor_QRegisterMetaType();
int QAmbientTemperatureReading_QAmbientTemperatureReading_QRegisterMetaType();
int QAmbientTemperatureSensor_QAmbientTemperatureSensor_QRegisterMetaType();
int QCompass_QCompass_QRegisterMetaType();
int QCompassReading_QCompassReading_QRegisterMetaType();
int QDistanceReading_QDistanceReading_QRegisterMetaType();
int QDistanceSensor_QDistanceSensor_QRegisterMetaType();
int QGyroscope_QGyroscope_QRegisterMetaType();
int QGyroscopeReading_QGyroscopeReading_QRegisterMetaType();
int QHolsterReading_QHolsterReading_QRegisterMetaType();
int QHolsterSensor_QHolsterSensor_QRegisterMetaType();
int QHumidityReading_QHumidityReading_QRegisterMetaType();
int QHumiditySensor_QHumiditySensor_QRegisterMetaType();
int QIRProximityReading_QIRProximityReading_QRegisterMetaType();
int QIRProximitySensor_QIRProximitySensor_QRegisterMetaType();
int QLidReading_QLidReading_QRegisterMetaType();
int QLidSensor_QLidSensor_QRegisterMetaType();
int QLightReading_QLightReading_QRegisterMetaType();
int QLightSensor_QLightSensor_QRegisterMetaType();
int QMagnetometer_QMagnetometer_QRegisterMetaType();
int QMagnetometerReading_QMagnetometerReading_QRegisterMetaType();
int QOrientationReading_QOrientationReading_QRegisterMetaType();
int QOrientationSensor_QOrientationSensor_QRegisterMetaType();
int QPressureReading_QPressureReading_QRegisterMetaType();
int QPressureSensor_QPressureSensor_QRegisterMetaType();
int QProximityReading_QProximityReading_QRegisterMetaType();
int QProximitySensor_QProximitySensor_QRegisterMetaType();
int QRotationReading_QRotationReading_QRegisterMetaType();
int QRotationSensor_QRotationSensor_QRegisterMetaType();
int QSensor_QSensor_QRegisterMetaType();
int QSensorBackend_QSensorBackend_QRegisterMetaType();
int QSensorGesture_QSensorGesture_QRegisterMetaType();
int QSensorGestureManager_QSensorGestureManager_QRegisterMetaType();
int QSensorGestureRecognizer_QSensorGestureRecognizer_QRegisterMetaType();
int QSensorReading_QSensorReading_QRegisterMetaType();
int QTapReading_QTapReading_QRegisterMetaType();
int QTapSensor_QTapSensor_QRegisterMetaType();
int QTiltReading_QTiltReading_QRegisterMetaType();
int QTiltSensor_QTiltSensor_QRegisterMetaType();
extern "C" {
#endif

struct QtSensors_PackedString { char* data; long long len; };
struct QtSensors_PackedList { void* data; long long len; };
void QAccelerometer_ConnectAccelerationModeChanged(void* ptr);
void QAccelerometer_DisconnectAccelerationModeChanged(void* ptr);
void QAccelerometer_AccelerationModeChanged(void* ptr, long long accelerationMode);
void QAccelerometer_SetAccelerationMode(void* ptr, long long accelerationMode);
long long QAccelerometer_AccelerationMode(void* ptr);
void* QAccelerometer_NewQAccelerometer(void* parent);
void QAccelerometer_DestroyQAccelerometer(void* ptr);
void QAccelerometer_DestroyQAccelerometerDefault(void* ptr);
void* QAccelerometer_Reading(void* ptr);
struct QtSensors_PackedString QAccelerometer_QAccelerometer_Type();
char QAccelerometerFilter_Filter(void* ptr, void* reading);
void QAccelerometerReading_SetX(void* ptr, double x);
void QAccelerometerReading_SetY(void* ptr, double y);
void QAccelerometerReading_SetZ(void* ptr, double z);
double QAccelerometerReading_X(void* ptr);
double QAccelerometerReading_Y(void* ptr);
double QAccelerometerReading_Z(void* ptr);
void* QAltimeter_NewQAltimeter(void* parent);
void QAltimeter_DestroyQAltimeter(void* ptr);
void* QAltimeter_Reading(void* ptr);
struct QtSensors_PackedString QAltimeter_QAltimeter_Type();
char QAltimeterFilter_Filter(void* ptr, void* reading);
void QAltimeterReading_SetAltitude(void* ptr, double altitude);
double QAltimeterReading_Altitude(void* ptr);
char QAmbientLightFilter_Filter(void* ptr, void* reading);
void QAmbientLightReading_SetLightLevel(void* ptr, long long lightLevel);
long long QAmbientLightReading_LightLevel(void* ptr);
void* QAmbientLightSensor_NewQAmbientLightSensor(void* parent);
void QAmbientLightSensor_DestroyQAmbientLightSensor(void* ptr);
void QAmbientLightSensor_DestroyQAmbientLightSensorDefault(void* ptr);
void* QAmbientLightSensor_Reading(void* ptr);
struct QtSensors_PackedString QAmbientLightSensor_QAmbientLightSensor_Type();
char QAmbientTemperatureFilter_Filter(void* ptr, void* reading);
void QAmbientTemperatureReading_SetTemperature(void* ptr, double temperature);
double QAmbientTemperatureReading_Temperature(void* ptr);
void* QAmbientTemperatureSensor_NewQAmbientTemperatureSensor(void* parent);
void QAmbientTemperatureSensor_DestroyQAmbientTemperatureSensor(void* ptr);
void* QAmbientTemperatureSensor_Reading(void* ptr);
struct QtSensors_PackedString QAmbientTemperatureSensor_QAmbientTemperatureSensor_Type();
void* QCompass_NewQCompass(void* parent);
void QCompass_DestroyQCompass(void* ptr);
void QCompass_DestroyQCompassDefault(void* ptr);
void* QCompass_Reading(void* ptr);
struct QtSensors_PackedString QCompass_QCompass_Type();
char QCompassFilter_Filter(void* ptr, void* reading);
void QCompassReading_SetAzimuth(void* ptr, double azimuth);
void QCompassReading_SetCalibrationLevel(void* ptr, double calibrationLevel);
double QCompassReading_Azimuth(void* ptr);
double QCompassReading_CalibrationLevel(void* ptr);
char QDistanceFilter_Filter(void* ptr, void* reading);
void QDistanceReading_SetDistance(void* ptr, double distance);
double QDistanceReading_Distance(void* ptr);
void* QDistanceSensor_NewQDistanceSensor(void* parent);
void QDistanceSensor_DestroyQDistanceSensor(void* ptr);
void* QDistanceSensor_Reading(void* ptr);
struct QtSensors_PackedString QDistanceSensor_QDistanceSensor_Type();
void* QGyroscope_NewQGyroscope(void* parent);
void QGyroscope_DestroyQGyroscope(void* ptr);
void QGyroscope_DestroyQGyroscopeDefault(void* ptr);
void* QGyroscope_Reading(void* ptr);
struct QtSensors_PackedString QGyroscope_QGyroscope_Type();
char QGyroscopeFilter_Filter(void* ptr, void* reading);
void QGyroscopeReading_SetX(void* ptr, double x);
void QGyroscopeReading_SetY(void* ptr, double y);
void QGyroscopeReading_SetZ(void* ptr, double z);
double QGyroscopeReading_X(void* ptr);
double QGyroscopeReading_Y(void* ptr);
double QGyroscopeReading_Z(void* ptr);
char QHolsterFilter_Filter(void* ptr, void* reading);
void QHolsterReading_SetHolstered(void* ptr, char holstered);
char QHolsterReading_Holstered(void* ptr);
void* QHolsterSensor_NewQHolsterSensor(void* parent);
void QHolsterSensor_DestroyQHolsterSensor(void* ptr);
void* QHolsterSensor_Reading(void* ptr);
struct QtSensors_PackedString QHolsterSensor_QHolsterSensor_Type();
char QHumidityFilter_Filter(void* ptr, void* reading);
void QHumidityReading_SetAbsoluteHumidity(void* ptr, double value);
void QHumidityReading_SetRelativeHumidity(void* ptr, double humidity);
double QHumidityReading_AbsoluteHumidity(void* ptr);
double QHumidityReading_RelativeHumidity(void* ptr);
void* QHumiditySensor_NewQHumiditySensor(void* parent);
void QHumiditySensor_DestroyQHumiditySensor(void* ptr);
void* QHumiditySensor_Reading(void* ptr);
struct QtSensors_PackedString QHumiditySensor_QHumiditySensor_Type();
char QIRProximityFilter_Filter(void* ptr, void* reading);
void QIRProximityReading_SetReflectance(void* ptr, double reflectance);
double QIRProximityReading_Reflectance(void* ptr);
void* QIRProximitySensor_NewQIRProximitySensor(void* parent);
void QIRProximitySensor_DestroyQIRProximitySensor(void* ptr);
void QIRProximitySensor_DestroyQIRProximitySensorDefault(void* ptr);
void* QIRProximitySensor_Reading(void* ptr);
struct QtSensors_PackedString QIRProximitySensor_QIRProximitySensor_Type();
char QLidFilter_Filter(void* ptr, void* reading);
void QLidReading_ConnectBackLidChanged(void* ptr);
void QLidReading_DisconnectBackLidChanged(void* ptr);
void QLidReading_BackLidChanged(void* ptr, char closed);
void QLidReading_ConnectFrontLidChanged(void* ptr);
void QLidReading_DisconnectFrontLidChanged(void* ptr);
void QLidReading_FrontLidChanged(void* ptr, char closed);
void QLidReading_SetBackLidClosed(void* ptr, char closed);
void QLidReading_SetFrontLidClosed(void* ptr, char closed);
char QLidReading_BackLidClosed(void* ptr);
char QLidReading_FrontLidClosed(void* ptr);
void* QLidSensor_NewQLidSensor(void* parent);
void QLidSensor_DestroyQLidSensor(void* ptr);
void* QLidSensor_Reading(void* ptr);
struct QtSensors_PackedString QLidSensor_QLidSensor_Type();
char QLightFilter_Filter(void* ptr, void* reading);
void QLightReading_SetLux(void* ptr, double lux);
double QLightReading_Lux(void* ptr);
void* QLightSensor_NewQLightSensor(void* parent);
void QLightSensor_ConnectFieldOfViewChanged(void* ptr);
void QLightSensor_DisconnectFieldOfViewChanged(void* ptr);
void QLightSensor_FieldOfViewChanged(void* ptr, double fieldOfView);
void QLightSensor_SetFieldOfView(void* ptr, double fieldOfView);
void QLightSensor_DestroyQLightSensor(void* ptr);
void QLightSensor_DestroyQLightSensorDefault(void* ptr);
void* QLightSensor_Reading(void* ptr);
double QLightSensor_FieldOfView(void* ptr);
struct QtSensors_PackedString QLightSensor_QLightSensor_Type();
void* QMagnetometer_NewQMagnetometer(void* parent);
void QMagnetometer_ConnectReturnGeoValuesChanged(void* ptr);
void QMagnetometer_DisconnectReturnGeoValuesChanged(void* ptr);
void QMagnetometer_ReturnGeoValuesChanged(void* ptr, char returnGeoValues);
void QMagnetometer_SetReturnGeoValues(void* ptr, char returnGeoValues);
void QMagnetometer_DestroyQMagnetometer(void* ptr);
void QMagnetometer_DestroyQMagnetometerDefault(void* ptr);
void* QMagnetometer_Reading(void* ptr);
char QMagnetometer_ReturnGeoValues(void* ptr);
struct QtSensors_PackedString QMagnetometer_QMagnetometer_Type();
char QMagnetometerFilter_Filter(void* ptr, void* reading);
void QMagnetometerReading_SetCalibrationLevel(void* ptr, double calibrationLevel);
void QMagnetometerReading_SetX(void* ptr, double x);
void QMagnetometerReading_SetY(void* ptr, double y);
void QMagnetometerReading_SetZ(void* ptr, double z);
double QMagnetometerReading_CalibrationLevel(void* ptr);
double QMagnetometerReading_X(void* ptr);
double QMagnetometerReading_Y(void* ptr);
double QMagnetometerReading_Z(void* ptr);
char QOrientationFilter_Filter(void* ptr, void* reading);
void QOrientationReading_SetOrientation(void* ptr, long long orientation);
long long QOrientationReading_Orientation(void* ptr);
void* QOrientationSensor_NewQOrientationSensor(void* parent);
void QOrientationSensor_DestroyQOrientationSensor(void* ptr);
void QOrientationSensor_DestroyQOrientationSensorDefault(void* ptr);
void* QOrientationSensor_Reading(void* ptr);
struct QtSensors_PackedString QOrientationSensor_QOrientationSensor_Type();
char QPressureFilter_Filter(void* ptr, void* reading);
void QPressureReading_SetPressure(void* ptr, double pressure);
void QPressureReading_SetTemperature(void* ptr, double temperature);
double QPressureReading_Pressure(void* ptr);
double QPressureReading_Temperature(void* ptr);
void* QPressureSensor_NewQPressureSensor(void* parent);
void QPressureSensor_DestroyQPressureSensor(void* ptr);
void* QPressureSensor_Reading(void* ptr);
struct QtSensors_PackedString QPressureSensor_QPressureSensor_Type();
char QProximityFilter_Filter(void* ptr, void* reading);
void QProximityReading_SetClose(void* ptr, char close);
char QProximityReading_Close(void* ptr);
void* QProximitySensor_NewQProximitySensor(void* parent);
void QProximitySensor_DestroyQProximitySensor(void* ptr);
void QProximitySensor_DestroyQProximitySensorDefault(void* ptr);
void* QProximitySensor_Reading(void* ptr);
struct QtSensors_PackedString QProximitySensor_QProximitySensor_Type();
char QRotationFilter_Filter(void* ptr, void* reading);
void QRotationReading_SetFromEuler(void* ptr, double x, double y, double z);
double QRotationReading_X(void* ptr);
double QRotationReading_Y(void* ptr);
double QRotationReading_Z(void* ptr);
void* QRotationSensor_NewQRotationSensor(void* parent);
void QRotationSensor_ConnectHasZChanged(void* ptr);
void QRotationSensor_DisconnectHasZChanged(void* ptr);
void QRotationSensor_HasZChanged(void* ptr, char hasZ);
void QRotationSensor_SetHasZ(void* ptr, char hasZ);
void QRotationSensor_DestroyQRotationSensor(void* ptr);
void QRotationSensor_DestroyQRotationSensorDefault(void* ptr);
void* QRotationSensor_Reading(void* ptr);
char QRotationSensor_HasZ(void* ptr);
struct QtSensors_PackedString QRotationSensor_QRotationSensor_Type();
void* QSensor_QSensor_DefaultSensorForType(void* ty);
struct QtSensors_PackedList QSensor_QSensor_SensorTypes();
struct QtSensors_PackedList QSensor_QSensor_SensorsForType(void* ty);
void* QSensor_NewQSensor(void* ty, void* parent);
char QSensor_ConnectToBackend(void* ptr);
char QSensor_Start(void* ptr);
char QSensor_StartDefault(void* ptr);
void QSensor_ConnectActiveChanged(void* ptr);
void QSensor_DisconnectActiveChanged(void* ptr);
void QSensor_ActiveChanged(void* ptr);
void QSensor_AddFilter(void* ptr, void* filter);
void QSensor_ConnectAlwaysOnChanged(void* ptr);
void QSensor_DisconnectAlwaysOnChanged(void* ptr);
void QSensor_AlwaysOnChanged(void* ptr);
void QSensor_ConnectAvailableSensorsChanged(void* ptr);
void QSensor_DisconnectAvailableSensorsChanged(void* ptr);
void QSensor_AvailableSensorsChanged(void* ptr);
void QSensor_ConnectAxesOrientationModeChanged(void* ptr);
void QSensor_DisconnectAxesOrientationModeChanged(void* ptr);
void QSensor_AxesOrientationModeChanged(void* ptr, long long axesOrientationMode);
void QSensor_ConnectBufferSizeChanged(void* ptr);
void QSensor_DisconnectBufferSizeChanged(void* ptr);
void QSensor_BufferSizeChanged(void* ptr, int bufferSize);
void QSensor_ConnectBusyChanged(void* ptr);
void QSensor_DisconnectBusyChanged(void* ptr);
void QSensor_BusyChanged(void* ptr);
void QSensor_ConnectCurrentOrientationChanged(void* ptr);
void QSensor_DisconnectCurrentOrientationChanged(void* ptr);
void QSensor_CurrentOrientationChanged(void* ptr, int currentOrientation);
void QSensor_ConnectDataRateChanged(void* ptr);
void QSensor_DisconnectDataRateChanged(void* ptr);
void QSensor_DataRateChanged(void* ptr);
void QSensor_ConnectEfficientBufferSizeChanged(void* ptr);
void QSensor_DisconnectEfficientBufferSizeChanged(void* ptr);
void QSensor_EfficientBufferSizeChanged(void* ptr, int efficientBufferSize);
void QSensor_ConnectMaxBufferSizeChanged(void* ptr);
void QSensor_DisconnectMaxBufferSizeChanged(void* ptr);
void QSensor_MaxBufferSizeChanged(void* ptr, int maxBufferSize);
void QSensor_ConnectReadingChanged(void* ptr);
void QSensor_DisconnectReadingChanged(void* ptr);
void QSensor_ReadingChanged(void* ptr);
void QSensor_RemoveFilter(void* ptr, void* filter);
void QSensor_ConnectSensorError(void* ptr);
void QSensor_DisconnectSensorError(void* ptr);
void QSensor_SensorError(void* ptr, int error);
void QSensor_SetActive(void* ptr, char active);
void QSensor_SetAlwaysOn(void* ptr, char alwaysOn);
void QSensor_SetAxesOrientationMode(void* ptr, long long axesOrientationMode);
void QSensor_SetBufferSize(void* ptr, int bufferSize);
void QSensor_SetCurrentOrientation(void* ptr, int currentOrientation);
void QSensor_SetDataRate(void* ptr, int rate);
void QSensor_SetEfficientBufferSize(void* ptr, int efficientBufferSize);
void QSensor_SetIdentifier(void* ptr, void* identifier);
void QSensor_SetMaxBufferSize(void* ptr, int maxBufferSize);
void QSensor_SetOutputRange(void* ptr, int index);
void QSensor_SetSkipDuplicates(void* ptr, char skipDuplicates);
void QSensor_SetUserOrientation(void* ptr, int userOrientation);
void QSensor_ConnectSkipDuplicatesChanged(void* ptr);
void QSensor_DisconnectSkipDuplicatesChanged(void* ptr);
void QSensor_SkipDuplicatesChanged(void* ptr, char skipDuplicates);
void QSensor_Stop(void* ptr);
void QSensor_StopDefault(void* ptr);
void QSensor_ConnectUserOrientationChanged(void* ptr);
void QSensor_DisconnectUserOrientationChanged(void* ptr);
void QSensor_UserOrientationChanged(void* ptr, int userOrientation);
void QSensor_DestroyQSensor(void* ptr);
void QSensor_DestroyQSensorDefault(void* ptr);
long long QSensor_AxesOrientationMode(void* ptr);
void* QSensor_Identifier(void* ptr);
void* QSensor_Type(void* ptr);
struct QtSensors_PackedList QSensor_Filters(void* ptr);
void* QSensor_Reading(void* ptr);
struct QtSensors_PackedString QSensor_Description(void* ptr);
char QSensor_IsActive(void* ptr);
char QSensor_IsAlwaysOn(void* ptr);
char QSensor_IsBusy(void* ptr);
char QSensor_IsConnectedToBackend(void* ptr);
char QSensor_IsFeatureSupported(void* ptr, long long feature);
char QSensor_SkipDuplicates(void* ptr);
int QSensor_BufferSize(void* ptr);
int QSensor_CurrentOrientation(void* ptr);
int QSensor_DataRate(void* ptr);
int QSensor_EfficientBufferSize(void* ptr);
int QSensor_Error(void* ptr);
int QSensor_MaxBufferSize(void* ptr);
int QSensor_OutputRange(void* ptr);
int QSensor_UserOrientation(void* ptr);
void* QSensor___sensorTypes_atList(void* ptr, int i);
void QSensor___sensorTypes_setList(void* ptr, void* i);
void* QSensor___sensorTypes_newList(void* ptr);
void* QSensor___sensorsForType_atList(void* ptr, int i);
void QSensor___sensorsForType_setList(void* ptr, void* i);
void* QSensor___sensorsForType_newList(void* ptr);
void* QSensor___filters_atList(void* ptr, int i);
void QSensor___filters_setList(void* ptr, void* i);
void* QSensor___filters_newList(void* ptr);
void* QSensor___dynamicPropertyNames_atList(void* ptr, int i);
void QSensor___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensor___dynamicPropertyNames_newList(void* ptr);
void* QSensor___findChildren_atList2(void* ptr, int i);
void QSensor___findChildren_setList2(void* ptr, void* i);
void* QSensor___findChildren_newList2(void* ptr);
void* QSensor___findChildren_atList3(void* ptr, int i);
void QSensor___findChildren_setList3(void* ptr, void* i);
void* QSensor___findChildren_newList3(void* ptr);
void* QSensor___findChildren_atList(void* ptr, int i);
void QSensor___findChildren_setList(void* ptr, void* i);
void* QSensor___findChildren_newList(void* ptr);
void* QSensor___children_atList(void* ptr, int i);
void QSensor___children_setList(void* ptr, void* i);
void* QSensor___children_newList(void* ptr);
char QSensor_EventDefault(void* ptr, void* e);
char QSensor_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensor_ChildEventDefault(void* ptr, void* event);
void QSensor_ConnectNotifyDefault(void* ptr, void* sign);
void QSensor_CustomEventDefault(void* ptr, void* event);
void QSensor_DeleteLaterDefault(void* ptr);
void QSensor_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensor_TimerEventDefault(void* ptr, void* event);
void* QSensor_MetaObjectDefault(void* ptr);
void QSensorBackend_AddDataRate(void* ptr, double min, double max);
void QSensorBackend_AddOutputRange(void* ptr, double min, double max, double accuracy);
void QSensorBackend_NewReadingAvailable(void* ptr);
void QSensorBackend_SensorBusy(void* ptr);
void QSensorBackend_SensorError(void* ptr, int error);
void QSensorBackend_SensorStopped(void* ptr);
void QSensorBackend_SetDataRates(void* ptr, void* otherSensor);
void QSensorBackend_SetDescription(void* ptr, struct QtSensors_PackedString description);
void QSensorBackend_Start(void* ptr);
void QSensorBackend_Stop(void* ptr);
void* QSensorBackend_Sensor(void* ptr);
void* QSensorBackend_Reading(void* ptr);
char QSensorBackend_IsFeatureSupported(void* ptr, long long feature);
char QSensorBackend_IsFeatureSupportedDefault(void* ptr, long long feature);
void* QSensorBackend___dynamicPropertyNames_atList(void* ptr, int i);
void QSensorBackend___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensorBackend___dynamicPropertyNames_newList(void* ptr);
void* QSensorBackend___findChildren_atList2(void* ptr, int i);
void QSensorBackend___findChildren_setList2(void* ptr, void* i);
void* QSensorBackend___findChildren_newList2(void* ptr);
void* QSensorBackend___findChildren_atList3(void* ptr, int i);
void QSensorBackend___findChildren_setList3(void* ptr, void* i);
void* QSensorBackend___findChildren_newList3(void* ptr);
void* QSensorBackend___findChildren_atList(void* ptr, int i);
void QSensorBackend___findChildren_setList(void* ptr, void* i);
void* QSensorBackend___findChildren_newList(void* ptr);
void* QSensorBackend___children_atList(void* ptr, int i);
void QSensorBackend___children_setList(void* ptr, void* i);
void* QSensorBackend___children_newList(void* ptr);
char QSensorBackend_EventDefault(void* ptr, void* e);
char QSensorBackend_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensorBackend_ChildEventDefault(void* ptr, void* event);
void QSensorBackend_ConnectNotifyDefault(void* ptr, void* sign);
void QSensorBackend_CustomEventDefault(void* ptr, void* event);
void QSensorBackend_DeleteLaterDefault(void* ptr);
void QSensorBackend_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensorBackend_TimerEventDefault(void* ptr, void* event);
void* QSensorBackend_MetaObjectDefault(void* ptr);
void* QSensorBackendFactory_CreateBackend(void* ptr, void* sensor);
void QSensorChangesInterface_SensorsChanged(void* ptr);
char QSensorFilter_Filter(void* ptr, void* reading);
void QSensorFilter_DestroyQSensorFilter(void* ptr);
void QSensorFilter_DestroyQSensorFilterDefault(void* ptr);
void* QSensorFilter_M_sensor(void* ptr);
void QSensorFilter_SetM_sensor(void* ptr, void* vqs);
void* QSensorGesture_NewQSensorGesture(struct QtSensors_PackedString ids, void* parent);
char QSensorGesture_IsActive(void* ptr);
void QSensorGesture_ConnectDetected(void* ptr);
void QSensorGesture_DisconnectDetected(void* ptr);
void QSensorGesture_Detected(void* ptr, struct QtSensors_PackedString gestureId);
void QSensorGesture_StartDetection(void* ptr);
void QSensorGesture_StopDetection(void* ptr);
void QSensorGesture_DestroyQSensorGesture(void* ptr);
struct QtSensors_PackedString QSensorGesture_GestureSignals(void* ptr);
struct QtSensors_PackedString QSensorGesture_InvalidIds(void* ptr);
struct QtSensors_PackedString QSensorGesture_ValidIds(void* ptr);
void* QSensorGesture___dynamicPropertyNames_atList(void* ptr, int i);
void QSensorGesture___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensorGesture___dynamicPropertyNames_newList(void* ptr);
void* QSensorGesture___findChildren_atList2(void* ptr, int i);
void QSensorGesture___findChildren_setList2(void* ptr, void* i);
void* QSensorGesture___findChildren_newList2(void* ptr);
void* QSensorGesture___findChildren_atList3(void* ptr, int i);
void QSensorGesture___findChildren_setList3(void* ptr, void* i);
void* QSensorGesture___findChildren_newList3(void* ptr);
void* QSensorGesture___findChildren_atList(void* ptr, int i);
void QSensorGesture___findChildren_setList(void* ptr, void* i);
void* QSensorGesture___findChildren_newList(void* ptr);
void* QSensorGesture___children_atList(void* ptr, int i);
void QSensorGesture___children_setList(void* ptr, void* i);
void* QSensorGesture___children_newList(void* ptr);
char QSensorGesture_EventDefault(void* ptr, void* e);
char QSensorGesture_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensorGesture_ChildEventDefault(void* ptr, void* event);
void QSensorGesture_ConnectNotifyDefault(void* ptr, void* sign);
void QSensorGesture_CustomEventDefault(void* ptr, void* event);
void QSensorGesture_DeleteLaterDefault(void* ptr);
void QSensorGesture_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensorGesture_TimerEventDefault(void* ptr, void* event);
void* QSensorGesture_MetaObjectDefault(void* ptr);
void* QSensorGestureManager_NewQSensorGestureManager(void* parent);
void* QSensorGestureManager_QSensorGestureManager_SensorGestureRecognizer(struct QtSensors_PackedString id);
char QSensorGestureManager_RegisterSensorGestureRecognizer(void* ptr, void* recognizer);
void QSensorGestureManager_ConnectNewSensorGestureAvailable(void* ptr);
void QSensorGestureManager_DisconnectNewSensorGestureAvailable(void* ptr);
void QSensorGestureManager_NewSensorGestureAvailable(void* ptr);
void QSensorGestureManager_DestroyQSensorGestureManager(void* ptr);
struct QtSensors_PackedString QSensorGestureManager_GestureIds(void* ptr);
struct QtSensors_PackedString QSensorGestureManager_RecognizerSignals(void* ptr, struct QtSensors_PackedString gestureId);
void* QSensorGestureManager___dynamicPropertyNames_atList(void* ptr, int i);
void QSensorGestureManager___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensorGestureManager___dynamicPropertyNames_newList(void* ptr);
void* QSensorGestureManager___findChildren_atList2(void* ptr, int i);
void QSensorGestureManager___findChildren_setList2(void* ptr, void* i);
void* QSensorGestureManager___findChildren_newList2(void* ptr);
void* QSensorGestureManager___findChildren_atList3(void* ptr, int i);
void QSensorGestureManager___findChildren_setList3(void* ptr, void* i);
void* QSensorGestureManager___findChildren_newList3(void* ptr);
void* QSensorGestureManager___findChildren_atList(void* ptr, int i);
void QSensorGestureManager___findChildren_setList(void* ptr, void* i);
void* QSensorGestureManager___findChildren_newList(void* ptr);
void* QSensorGestureManager___children_atList(void* ptr, int i);
void QSensorGestureManager___children_setList(void* ptr, void* i);
void* QSensorGestureManager___children_newList(void* ptr);
char QSensorGestureManager_EventDefault(void* ptr, void* e);
char QSensorGestureManager_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensorGestureManager_ChildEventDefault(void* ptr, void* event);
void QSensorGestureManager_ConnectNotifyDefault(void* ptr, void* sign);
void QSensorGestureManager_CustomEventDefault(void* ptr, void* event);
void QSensorGestureManager_DeleteLaterDefault(void* ptr);
void QSensorGestureManager_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensorGestureManager_TimerEventDefault(void* ptr, void* event);
void* QSensorGestureManager_MetaObjectDefault(void* ptr);
struct QtSensors_PackedList QSensorGesturePluginInterface_CreateRecognizers(void* ptr);
void* QSensorGesturePluginInterface_NewQSensorGesturePluginInterface();
void QSensorGesturePluginInterface_DestroyQSensorGesturePluginInterface(void* ptr);
void QSensorGesturePluginInterface_DestroyQSensorGesturePluginInterfaceDefault(void* ptr);
struct QtSensors_PackedString QSensorGesturePluginInterface_Name(void* ptr);
struct QtSensors_PackedString QSensorGesturePluginInterface_SupportedIds(void* ptr);
void* QSensorGesturePluginInterface___createRecognizers_atList(void* ptr, int i);
void QSensorGesturePluginInterface___createRecognizers_setList(void* ptr, void* i);
void* QSensorGesturePluginInterface___createRecognizers_newList(void* ptr);
void* QSensorGestureRecognizer_NewQSensorGestureRecognizer(void* parent);
char QSensorGestureRecognizer_IsActive(void* ptr);
char QSensorGestureRecognizer_Start(void* ptr);
char QSensorGestureRecognizer_Stop(void* ptr);
void QSensorGestureRecognizer_Create(void* ptr);
void QSensorGestureRecognizer_CreateBackend(void* ptr);
void QSensorGestureRecognizer_ConnectDetected(void* ptr);
void QSensorGestureRecognizer_DisconnectDetected(void* ptr);
void QSensorGestureRecognizer_Detected(void* ptr, struct QtSensors_PackedString gestureId);
void QSensorGestureRecognizer_StartBackend(void* ptr);
void QSensorGestureRecognizer_StopBackend(void* ptr);
void QSensorGestureRecognizer_DestroyQSensorGestureRecognizer(void* ptr);
void QSensorGestureRecognizer_DestroyQSensorGestureRecognizerDefault(void* ptr);
struct QtSensors_PackedString QSensorGestureRecognizer_Id(void* ptr);
struct QtSensors_PackedString QSensorGestureRecognizer_GestureSignals(void* ptr);
void* QSensorGestureRecognizer___dynamicPropertyNames_atList(void* ptr, int i);
void QSensorGestureRecognizer___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensorGestureRecognizer___dynamicPropertyNames_newList(void* ptr);
void* QSensorGestureRecognizer___findChildren_atList2(void* ptr, int i);
void QSensorGestureRecognizer___findChildren_setList2(void* ptr, void* i);
void* QSensorGestureRecognizer___findChildren_newList2(void* ptr);
void* QSensorGestureRecognizer___findChildren_atList3(void* ptr, int i);
void QSensorGestureRecognizer___findChildren_setList3(void* ptr, void* i);
void* QSensorGestureRecognizer___findChildren_newList3(void* ptr);
void* QSensorGestureRecognizer___findChildren_atList(void* ptr, int i);
void QSensorGestureRecognizer___findChildren_setList(void* ptr, void* i);
void* QSensorGestureRecognizer___findChildren_newList(void* ptr);
void* QSensorGestureRecognizer___children_atList(void* ptr, int i);
void QSensorGestureRecognizer___children_setList(void* ptr, void* i);
void* QSensorGestureRecognizer___children_newList(void* ptr);
char QSensorGestureRecognizer_EventDefault(void* ptr, void* e);
char QSensorGestureRecognizer_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensorGestureRecognizer_ChildEventDefault(void* ptr, void* event);
void QSensorGestureRecognizer_ConnectNotifyDefault(void* ptr, void* sign);
void QSensorGestureRecognizer_CustomEventDefault(void* ptr, void* event);
void QSensorGestureRecognizer_DeleteLaterDefault(void* ptr);
void QSensorGestureRecognizer_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensorGestureRecognizer_TimerEventDefault(void* ptr, void* event);
void* QSensorGestureRecognizer_MetaObjectDefault(void* ptr);
void* QSensorManager_QSensorManager_CreateBackend(void* sensor);
char QSensorManager_QSensorManager_IsBackendRegistered(void* ty, void* identifier);
void QSensorManager_QSensorManager_RegisterBackend(void* ty, void* identifier, void* factory);
void QSensorManager_QSensorManager_SetDefaultBackend(void* ty, void* identifier);
void QSensorManager_QSensorManager_UnregisterBackend(void* ty, void* identifier);
void QSensorPluginInterface_RegisterSensors(void* ptr);
void QSensorReading_SetTimestamp(void* ptr, unsigned long long timestamp);
void* QSensorReading_Value(void* ptr, int index);
int QSensorReading_ValueCount(void* ptr);
unsigned long long QSensorReading_Timestamp(void* ptr);
void* QSensorReading___dynamicPropertyNames_atList(void* ptr, int i);
void QSensorReading___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSensorReading___dynamicPropertyNames_newList(void* ptr);
void* QSensorReading___findChildren_atList2(void* ptr, int i);
void QSensorReading___findChildren_setList2(void* ptr, void* i);
void* QSensorReading___findChildren_newList2(void* ptr);
void* QSensorReading___findChildren_atList3(void* ptr, int i);
void QSensorReading___findChildren_setList3(void* ptr, void* i);
void* QSensorReading___findChildren_newList3(void* ptr);
void* QSensorReading___findChildren_atList(void* ptr, int i);
void QSensorReading___findChildren_setList(void* ptr, void* i);
void* QSensorReading___findChildren_newList(void* ptr);
void* QSensorReading___children_atList(void* ptr, int i);
void QSensorReading___children_setList(void* ptr, void* i);
void* QSensorReading___children_newList(void* ptr);
char QSensorReading_EventDefault(void* ptr, void* e);
char QSensorReading_EventFilterDefault(void* ptr, void* watched, void* event);
void QSensorReading_ChildEventDefault(void* ptr, void* event);
void QSensorReading_ConnectNotifyDefault(void* ptr, void* sign);
void QSensorReading_CustomEventDefault(void* ptr, void* event);
void QSensorReading_DeleteLaterDefault(void* ptr);
void QSensorReading_DisconnectNotifyDefault(void* ptr, void* sign);
void QSensorReading_TimerEventDefault(void* ptr, void* event);
void* QSensorReading_MetaObjectDefault(void* ptr);
char QTapFilter_Filter(void* ptr, void* reading);
void QTapReading_SetDoubleTap(void* ptr, char doubleTap);
void QTapReading_SetTapDirection(void* ptr, long long tapDirection);
long long QTapReading_TapDirection(void* ptr);
char QTapReading_IsDoubleTap(void* ptr);
void* QTapSensor_NewQTapSensor(void* parent);
void QTapSensor_ConnectReturnDoubleTapEventsChanged(void* ptr);
void QTapSensor_DisconnectReturnDoubleTapEventsChanged(void* ptr);
void QTapSensor_ReturnDoubleTapEventsChanged(void* ptr, char returnDoubleTapEvents);
void QTapSensor_SetReturnDoubleTapEvents(void* ptr, char returnDoubleTapEvents);
void QTapSensor_DestroyQTapSensor(void* ptr);
void QTapSensor_DestroyQTapSensorDefault(void* ptr);
void* QTapSensor_Reading(void* ptr);
char QTapSensor_ReturnDoubleTapEvents(void* ptr);
struct QtSensors_PackedString QTapSensor_QTapSensor_Type();
char QTiltFilter_Filter(void* ptr, void* reading);
void QTiltReading_SetXRotation(void* ptr, double x);
void QTiltReading_SetYRotation(void* ptr, double y);
double QTiltReading_XRotation(void* ptr);
double QTiltReading_YRotation(void* ptr);
void* QTiltSensor_NewQTiltSensor(void* parent);
void QTiltSensor_Calibrate(void* ptr);
void QTiltSensor_DestroyQTiltSensor(void* ptr);
void* QTiltSensor_Reading(void* ptr);
struct QtSensors_PackedString QTiltSensor_QTiltSensor_Type();

#ifdef __cplusplus
}
#endif

#endif
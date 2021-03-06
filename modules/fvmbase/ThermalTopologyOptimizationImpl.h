
#if !(defined(USING_ATYPE_TANGENT) || defined(USING_ATYPE_PC) || defined(USING_ATYPE_RAPID))
template<class T>
void
ThermalModel<T>::buildNeighborsList(const T rMin)
{
  _impl->buildNeighborsList(rMin);
}

template<class T>
void
ThermalModel<T>::applyFilter()
{
  _impl->applyFilter();
}

template<class T>
void
ThermalModel<T>::applyFilterConstraintFunction()
{
  _impl->applyFilterConstraintFunction();
}


#endif


////////////////////////////////////////////


template<class T>
void
ThermalModel<T>::initResidualFieldThermal()
{
  _impl->initResidualFieldThermal();
}
  
template<class T>
void
ThermalModel<T>::updateBetaFieldGhostCells()
{
  _impl->updateBetaFieldGhostCells();
}


template<class T>
void
ThermalModel<T>::copyTemperatureField(const Field& tempDoubleField, const MeshList& meshesDouble)
{
  return _impl->copyTemperatureField(tempDoubleField, meshesDouble);
}

template<class T>
void
ThermalModel<T>::copyBetaField(const Field& betaDoubleField, const MeshList& meshesDouble)
{
  return _impl->copyBetaField(betaDoubleField, meshesDouble);
}

template<class T>
void
ThermalModel<T>::updateSourceFieldType1()
{
  _impl->updateSourceFieldType1();
}

template<class T>
void
ThermalModel<T>::updateSourceFieldType2()
{
  _impl->updateSourceFieldType2();
}

template<class T>
void
ThermalModel<T>::updateSourceFieldType3()
{
  _impl->updateSourceFieldType3();
}

template<class T>
void
//ThermalModel<T>::interpolateThermalConductivityFieldSIMP()
ThermalModel<T>::interpolateMaterialThermalPropertiesFieldSIMP()
{
  _impl->interpolateMaterialThermalPropertiesFieldSIMP();
  //_impl->interpolateThermalConductivityFieldSIMP();
}

template<class T>
void
ThermalModel<T>::interpolateThermalConductivityFieldSIMP()
{
  _impl->interpolateThermalConductivityFieldSIMP();
}


template<class T>
void
ThermalModel<T>::interpolateThermalConductivityFieldSIMPReverse()
{
  _impl->interpolateThermalConductivityFieldSIMPReverse();
}

template<class T>
void
ThermalModel<T>::interpolateThermalConductivityFieldSIMPRamp()
{
  _impl->interpolateThermalConductivityFieldSIMPRamp();
}

template<class T>
void
ThermalModel<T>::interpolateHeatTransferCoefficient()
{
  _impl->interpolateHeatTransferCoefficient();
}

template<class T>
void
ThermalModel<T>::interpolateRadiallyVaryingHeatTransferCoefficient()
{
  _impl->interpolateRadiallyVaryingHeatTransferCoefficient();
}

template<class T>
void
ThermalModel<T>::ComputeTemperatureResidual()
{
  return _impl->ComputeTemperatureResidual();
}


template<class T>
T
ThermalModel<T>::getAverageTemperature(const Mesh& mesh)
{
  return _impl->getAverageTemperature(mesh);
}

template<class T>
T
ThermalModel<T>::getCellTemperature(const Mesh& mesh, const int cellId)
{
  return _impl->getCellTemperature(mesh, cellId);
}

template<class T>
void 
ThermalModel<T>::setObjectiveFunctionThermal(const T objFunction)
{
  return _impl->setObjectiveFunctionThermal(objFunction);
}


#if defined(USING_ATYPE_RAPID)

template<class T>
void
ThermalModel<T>::setIndependentStateVariablesThermal()
{
  _impl->setIndependentStateVariablesThermal();
}

template<class T>
void
ThermalModel<T>::setIndependentDesignVariablesThermal()
{
  _impl->setIndependentDesignVariablesThermal();
}


template<class T>
void
ThermalModel<T>::WriteResidualGradientsToPetscThermal()
{
  _impl->WriteResidualGradientsToPetscThermal();
}

template<class T>
void 
ThermalModel<T>::WriteObjectiveFunctionGradientToPetscThermal()
{
  _impl->WriteObjectiveFunctionGradientToPetscThermal();
}

template<class T>
void 
ThermalModel<T>::WritePressureDropGradientToPetscThermoFluidLaminar()
{
  _impl->WritePressureDropGradientToPetscThermoFluidLaminar();
}

template<class T>
void 
ThermalModel<T>::WritePressureDropGradientToMatlabThermoFluidLaminar()
{
  _impl->WritePressureDropGradientToMatlabThermoFluidLaminar();
}


#endif

#if !(defined(USING_ATYPE_TANGENT) || defined(USING_ATYPE_PC) || defined(USING_ATYPE_RAPID))
template<class T>
void 
ThermalModel<T>::dumpBetaSensistivityFields()
{
  return _impl->dumpBetaSensistivityFields();
}

template<class T>
void 
ThermalModel<T>::dumpVolumeField()
{
  return _impl->dumpVolumeField();
}

template<class T>
void 
ThermalModel<T>::dumpSensistivityConstraintFields()
{
  _impl->dumpSensistivityConstraintFields();
}
#endif

//Functions used to developing code

template<class T>
void
ThermalModel<T>::printResidualField()
{
  return _impl->printResidualField();
}

template<class T>
void
ThermalModel<T>::printTemperatureField()
{
  return _impl->printTemperatureField();
}


template<class T>
void
ThermalModel<T>::printBetaField()
{
  return _impl->printBetaField();
}


template<class T>
void 
ThermalModel<T>::initializeBetaField()
{
  _impl->initializeBetaField();
}

template<class T>
void
ThermalModel<T>::printConductivityField()
{
  return _impl->printConductivityField();
}

template<class T>
void
ThermalModel<T>::printBoundaryCellNumbers(const Mesh& mesh, const int faceGroupId)
{
  return _impl->printBoundaryCellNumbers(mesh, faceGroupId);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T
ThermalModel<T>::getDeltaEnthalpyIntegralThermoFluid(const Mesh& mesh, const int faceGroupId1, const int faceGroupId2)
{
  return _impl->getDeltaEnthalpyIntegralThermoFluid(mesh, faceGroupId1, faceGroupId2);
}

template<class T>
T
ThermalModel<T>::getBulkTemperature(const Mesh& mesh, const int faceGroupId)
{
  return _impl->getBulkTemperature(mesh, faceGroupId);
}

template<class T>
T
ThermalModel<T>::getRootMeanSquareTemperatureOutletTemperatureIdeal(const Mesh& mesh, const int faceGroupIdIdeal, const int faceGroupIdOut)
{
  return _impl->getRootMeanSquareTemperatureOutletTemperatureIdeal(mesh, faceGroupIdIdeal, faceGroupIdOut);
}


template<class T>
void
ThermalModel<T>::copyMomentumResidual(const Field& momentumRes)
{
  return _impl->copyMomentumResidual(momentumRes);
}


template<class T>
void
ThermalModel<T>::copyContinuityResidual(const Field& continuityRes)
{
  return _impl->copyContinuityResidual(continuityRes);
}


template<class T>
void
ThermalModel<T>::copyMassFlux(const Field& massFlux)
{
  return _impl->copyMassFlux(massFlux);
}

template<class T>
void
ThermalModel<T>::setObjectiveFunctionFlow(const VectorT3 objFunction, const int direction)
{
  _impl->setObjectiveFunctionFlow(objFunction, direction);
}

template<class T>
void
ThermalModel<T>::setPressureDropComponent(const VectorT3 pDropComp, const int direction)
{
  _impl->setPressureDropComponent(pDropComp, direction);
}

#if ( defined(USING_ATYPE_RAPID) )

template<class T>
void
ThermalModel<T>::setIndependentStateVariablesThermoFluidLaminar()
{
  return _impl->setIndependentStateVariablesThermoFluidLaminar();
}

template<class T>
void
ThermalModel<T>::setIndependentDesignVariablesThermoFluidLaminar()
{
  return _impl->setIndependentDesignVariablesThermoFluidLaminar();
}

template<class T>
void
ThermalModel<T>::WriteResidualGradientsToPetscThermoFluidLaminar()
{
  return _impl->WriteResidualGradientsToPetscThermoFluidLaminar();
}

template<class T>
void
ThermalModel<T>::WriteResidualGradientsToMatlabThermoFluidLaminar()
{
  return _impl->WriteResidualGradientsToMatlabThermoFluidLaminar();
}


template<class T>
void
ThermalModel<T>::WriteObjectiveFunctionGradientToPetscThermoFluidLaminar()
{
  return _impl->WriteObjectiveFunctionGradientToPetscThermoFluidLaminar();
}

#endif
template<class T>
void
ThermalModel<T>::copyBetaField(const Field& betaField)
{
  return _impl->copyBetaField(betaField);
}

template<class T>
void
ThermalModel<T>::copyTemperatureBoundaryFace(const Field& temperatureDoubleField, Field& temperatureField, const StorageSite& facesDouble, const StorageSite& faces)
{
  return _impl->copyTemperatureBoundaryFace(temperatureDoubleField, temperatureField, facesDouble, faces);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////

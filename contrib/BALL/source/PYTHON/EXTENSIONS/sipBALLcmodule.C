/*
 * Module code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"

#include "sipBALLDatasetControl.h"
#include "sipBALLLogView.h"
#include "sipBALLGeometricControl.h"
#include "sipBALLMolecularControl.h"
#include "sipBALLMolecularStructure.h"
#include "sipBALLEditableScene.h"
#include "sipBALLScene.h"
#include "sipBALLPyWidget.h"
#include "sipBALLDockWidget.h"
#include "sipBALLVRMLRenderer.h"
#include "sipBALLPOVRenderer.h"
#include "sipBALLRenderer.h"
#include "sipBALLModifyRepresentationDialog.h"
#include "sipBALLMolecularFileDialog.h"
#include "sipBALLDisplayProperties.h"
#include "sipBALLPreferences.h"
#include "sipBALLTube.h"
#include "sipBALLTwoColoredTube.h"
#include "sipBALLTwoColoredLine.h"
#include "sipBALLSphere.h"
#include "sipBALLSimpleBox.h"
#include "sipBALLMesh.h"
#include "sipBALLLine.h"
#include "sipBALLLabel.h"
#include "sipBALLGridVisualisation.h"
#include "sipBALLDisc.h"
#include "sipBALLBox.h"
#include "sipBALLLabelModel.h"
#include "sipBALLForceModel.h"
#include "sipBALLAddSurfaceModel.h"
#include "sipBALLHBondModelProcessor.h"
#include "sipBALLAddCartoonModel.h"
#include "sipBALLAddBallAndStickModel.h"
#include "sipBALLAddBackboneModel.h"
#include "sipBALLAddVanDerWaalsModel.h"
#include "sipBALLAddLineModel.h"
#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLResidueTypeColorProcessor.h"
#include "sipBALLSecondaryStructureColorProcessor.h"
#include "sipBALLForceColorProcessor.h"
#include "sipBALLOccupancyColorProcessor.h"
#include "sipBALLTemperatureFactorColorProcessor.h"
#include "sipBALLCustomColorProcessor.h"
#include "sipBALLAtomDistanceColorProcessor.h"
#include "sipBALLAtomChargeColorProcessor.h"
#include "sipBALLResidueNameColorProcessor.h"
#include "sipBALLMoleculeColorProcessor.h"
#include "sipBALLChainColorProcessor.h"
#include "sipBALLPositionColorProcessor.h"
#include "sipBALLResidueNumberColorProcessor.h"
#include "sipBALLElementColorProcessor.h"
#include "sipBALLInterpolateColorProcessor.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLTrajectoryController.h"
#include "sipBALLRegularData3DController.h"
#include "sipBALLDatasetController.h"
#include "sipBALLDataset.h"
#include "sipBALLColorMap.h"
#include "sipBALLMultiColorExtension.h"
#include "sipBALLColorExtension2.h"
#include "sipBALLVertex2.h"
#include "sipBALLVertex.h"
#include "sipBALLPyColorRGBAVector.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLNotInHexFormat.h"
#include "sipBALLServerNotCompositeObject.h"
#include "sipBALLModularWidget.h"
#include "sipBALLServer.h"
#include "sipBALLClippingPlane.h"
#include "sipBALLGeometricObject.h"
#include "sipBALLRepresentation.h"
#include "sipBALLRepresentationManager.h"
#include "sipBALLCompositeManager.h"
#include "sipBALLMainControl.h"
#include "sipBALLStage.h"
#include "sipBALLCamera.h"
#include "sipBALLLightSource.h"
#include "sipBALLDeselectControlsMessage.h"
#include "sipBALLCreateRepresentationMessage.h"
#include "sipBALLShowDisplayPropertiesMessage.h"
#include "sipBALLMolecularTaskMessage.h"
#include "sipBALLRepresentationMessage.h"
#include "sipBALLGeometricObjectSelectionMessage.h"
#include "sipBALLNewSelectionMessage.h"
#include "sipBALLControlSelectionMessage.h"
#include "sipBALLGenericSelectionMessage.h"
#include "sipBALLSceneMessage.h"
#include "sipBALLCompositeMessage.h"
#include "sipBALLMessage.h"
#include "sipBALLTimer.h"
#include "sipBALLSysInfo.h"
#include "sipBALLPath.h"
#include "sipBALLOpenMode.h"
#include "sipBALLstd__openmode.h"
#include "sipBALLSurfaceProcessor.h"
#include "sipBALLSecondaryStructureProcessor.h"
#include "sipBALLPeptideBuilder.h"
#include "sipBALLAminoAcidDescriptor.h"
#include "sipBALLResidueChecker.h"
#include "sipBALLTransformationProcessor.h"
#include "sipBALLTranslationProcessor.h"
#include "sipBALLFragmentDistanceCollector.h"
#include "sipBALLGeometricCenterProcessor.h"
#include "sipBALLBoundingBoxProcessor.h"
#include "sipBALLReconstructFragmentProcessor.h"
#include "sipBALLBuildBondsProcessor.h"
#include "sipBALLNormalizeNamesProcessor.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLAssignChargeProcessor.h"
#include "sipBALLAssignRadiusProcessor.h"
#include "sipBALLClearRadiusProcessor.h"
#include "sipBALLClearChargeProcessor.h"
#include "sipBALLFDPBFastAtomStruct.h"
#include "sipBALLFDPBDefault.h"
#include "sipBALLFDPBDielectricSmoothing.h"
#include "sipBALLFDPBChargeDistribution.h"
#include "sipBALLFDPBBoundary.h"
#include "sipBALLFDPBOption.h"
#include "sipBALLFDPB.h"
#include "sipBALLRegularData3DList.h"
#include "sipBALLRepresentationList.h"
#include "sipBALLGeometricObjectList.h"
#include "sipBALLNucleicAcidList.h"
#include "sipBALLNucleotideList.h"
#include "sipBALLProteinList.h"
#include "sipBALLChainList.h"
#include "sipBALLSecondaryStructureList.h"
#include "sipBALLResidueList.h"
#include "sipBALLMoleculeList.h"
#include "sipBALLFragmentList.h"
#include "sipBALLAtomContainerList.h"
#include "sipBALLBondList.h"
#include "sipBALLPDBAtomList.h"
#include "sipBALLAtomList.h"
#include "sipBALLPyDatasetVector.h"
#include "sipBALLResidueProcessor.h"
#include "sipBALLFragmentProcessor.h"
#include "sipBALLBondProcessor.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLPyAtomDict.h"
#include "sipBALLPyIndexList.h"
#include "sipBALLShiftedLVMMMinimizer.h"
#include "sipBALLStrangLBFGSMinimizer.h"
#include "sipBALLSteepestDescentMinimizer.h"
#include "sipBALLLineSearch.h"
#include "sipBALLEnergyMinimizer.h"
#include "sipBALLConjugateGradientMinimizer.h"
#include "sipBALLMicroCanonicalMD.h"
#include "sipBALLMolecularDynamics.h"
#include "sipBALLCanonicalMD.h"
#include "sipBALLTypeRuleProcessor.h"
#include "sipBALLSnapShotManagerDefault.h"
#include "sipBALLSnapShotManagerOption.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLSnapShot.h"
#include "sipBALLAtomProcessor.h"
#include "sipBALLRuleEvaluator.h"
#include "sipBALLRadiusRuleProcessor.h"
#include "sipBALLPeriodicBoundary.h"
#include "sipBALLGradient.h"
#include "sipBALLRuleProcessor.h"
#include "sipBALLChargeRuleProcessor.h"
#include "sipBALLAtomVector.h"
#include "sipBALLCharmmTorsion.h"
#include "sipBALLCharmmStretch.h"
#include "sipBALLCharmmNonBonded.h"
#include "sipBALLCharmmImproperTorsion.h"
#include "sipBALLCharmmBend.h"
#include "sipBALLCharmmFF.h"
#include "sipBALLAmberTorsion.h"
#include "sipBALLAmberStretch.h"
#include "sipBALLAmberNonBonded.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLAmberBend.h"
#include "sipBALLAmberFF.h"
#include "sipBALLForceField.h"
#include "sipBALLMMFF94.h"
#include "sipBALLVector4.h"
#include "sipBALLVector3.h"
#include "sipBALLVector2.h"
#include "sipBALLSurfaceTriangle.h"
#include "sipBALLSurface.h"
#include "sipBALLSphere3.h"
#include "sipBALLQuaternion.h"
#include "sipBALLPlane3.h"
#include "sipBALLMatrix4x4.h"
#include "sipBALLLine3.h"
#include "sipBALLCircle3.h"
#include "sipBALLSimpleBox3.h"
#include "sipBALLBox3.h"
#include "sipBALLAngle.h"
#include "sipBALLSystem.h"
#include "sipBALLCompositeProcessor.h"
#include "sipBALLSelector.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLResidue.h"
#include "sipBALLProtein.h"
#include "sipBALLNucleotide.h"
#include "sipBALLNucleicAcid.h"
#include "sipBALLMolecule.h"
#include "sipBALLFragment.h"
#include "sipBALLExpression.h"
#include "sipBALLExpressionPredicate.h"
#include "sipBALLChain.h"
#include "sipBALLBond.h"
#include "sipBALLPTE_.h"
#include "sipBALLElement.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLAtomContainer.h"
#include "sipBALLAtom.h"
#include "sipBALLAtomType.h"
#include "sipBALLResourceFile.h"
#include "sipBALLResourceEntry.h"
#include "sipBALLParameters.h"
#include "sipBALLParameterSection.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLXYZFile.h"
#include "sipBALLTRRFileTRRHeader.h"
#include "sipBALLTRRFile.h"
#include "sipBALLSDFile.h"
#include "sipBALLPDB.h"
#include "sipBALLPDBRecords.h"
#include "sipBALLPDBInfo.h"
#include "sipBALLPDBFile.h"
#include "sipBALLMOLFile.h"
#include "sipBALLFile.h"
#include "sipBALLMOL2File.h"
#include "sipBALLKCFFile.h"
#include "sipBALLINIFile.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLGenericMolFile.h"
#include "sipBALLHINFile.h"
#include "sipBALLTrajectoryFile.h"
#include "sipBALLDCDFile.h"
#include "sipBALLString.h"
#include "sipBALLSubstring.h"
#include "sipBALLRegularExpression.h"
#include "sipBALLRegularData3DIndexType.h"
#include "sipBALLRegularData3D.h"
#include "sipBALLRegularData2DIndexType.h"
#include "sipBALLRegularData2D.h"
#include "sipBALLRegularData1D.h"
#include "sipBALLOptions.h"
#include "sipBALLIllegalKey.h"
#include "sipBALLBitVector.h"
#include "sipBALLBit.h"
#include "sipBALLTimeStamp.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLProcessor.h"
#include "sipBALLUnaryAtomPredicate.h"
#include "sipBALLUnaryCompositePredicate.h"
#include "sipBALLMolecularInformation.h"
#include "sipBALLClientNoPersistentObject.h"
#include "sipBALLClientInvalidClient.h"
#include "sipBALLClient.h"
#include "sipBALLEmbeddable.h"
#include "sipBALLSelectable.h"
#include "sipBALLObject.h"
#include "sipBALLPersistentObject.h"
#include "sipBALLComposite.h"
#include "sipBALLVersionInfo.h"
#include "sipBALLTime.h"
#include "sipBALLLongIndex.h"
#include "sipBALLPosition.h"
#include "sipBALLIndex.h"
#include "sipBALLGlobalExceptionHandler.h"
#include "sipBALLTooManyBonds.h"
#include "sipBALLParseError.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLDivisionByZero.h"
#include "sipBALLBufferOverflow.h"
#include "sipBALLOutOfGrid.h"
#include "sipBALLOutOfMemory.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLNotImplemented.h"
#include "sipBALLIncompatibleIterators.h"
#include "sipBALLInvalidIterator.h"
#include "sipBALLNullPointer.h"
#include "sipBALLIllegalSelfOperation.h"
#include "sipBALLInvalidFormat.h"
#include "sipBALLInvalidRange.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLSizeUnderflow.h"
#include "sipBALLIndexUnderflow.h"
#include "sipBALLGeneralException.h"
#include "sipBALLConstant.h"

#include "sipBALLPTE_.h"
#include "sipBALLGlobalExceptionHandler.h"



/* Define the strings used by this module. */
char sipNm_BALL_getController[] = "getController";
char sipNm_BALL_getSelectionSize[] = "getSelectionSize";
char sipNm_BALL_DatasetControl[] = "DatasetControl";
char sipNm_BALL_LogView[] = "LogView";
char sipNm_BALL_getModifySurfaceDialog[] = "getModifySurfaceDialog";
char sipNm_BALL_renameRepresentation[] = "renameRepresentation";
char sipNm_BALL_duplicate[] = "duplicate";
char sipNm_BALL_createNewClippingPlane[] = "createNewClippingPlane";
char sipNm_BALL_selectClipRepresentations[] = "selectClipRepresentations";
char sipNm_BALL_hideShowClippingPlane[] = "hideShowClippingPlane";
char sipNm_BALL_setClippingPlaneZ[] = "setClippingPlaneZ";
char sipNm_BALL_setClippingPlaneY[] = "setClippingPlaneY";
char sipNm_BALL_setClippingPlaneX[] = "setClippingPlaneX";
char sipNm_BALL_flipClippingPlane[] = "flipClippingPlane";
char sipNm_BALL_enterMoveMode[] = "enterMoveMode";
char sipNm_BALL_focus[] = "focus";
char sipNm_BALL_selectAtoms[] = "selectAtoms";
char sipNm_BALL_getHighlightedRepresentations[] = "getHighlightedRepresentations";
char sipNm_BALL_GeometricControl[] = "GeometricControl";
char sipNm_BALL_switchShowSecondaryStructure[] = "switchShowSecondaryStructure";
char sipNm_BALL_clearSelector[] = "clearSelector";
char sipNm_BALL_showSelectorHelp[] = "showSelectorHelp";
char sipNm_BALL_expandAll[] = "expandAll";
char sipNm_BALL_collapseAll[] = "collapseAll";
char sipNm_BALL_moveItems[] = "moveItems";
char sipNm_BALL_clearClipboard[] = "clearClipboard";
char sipNm_BALL_paste[] = "paste";
char sipNm_BALL_copy[] = "copy";
char sipNm_BALL_cut[] = "cut";
char sipNm_BALL_highlight[] = "highlight";
char sipNm_BALL_highlightSelection[] = "highlightSelection";
char sipNm_BALL_updateSelection[] = "updateSelection";
char sipNm_BALL_showFilename[] = "showFilename";
char sipNm_BALL_countItems[] = "countItems";
char sipNm_BALL_bondProperties[] = "bondProperties";
char sipNm_BALL_compositeProperties[] = "compositeProperties";
char sipNm_BALL_showDistance[] = "showDistance";
char sipNm_BALL_applySelector[] = "applySelector";
char sipNm_BALL_updateContextMenu[] = "updateContextMenu";
char sipNm_BALL_removeComposite[] = "removeComposite";
char sipNm_BALL_MolecularControl[] = "MolecularControl";
char sipNm_BALL_calculateFDPB[] = "calculateFDPB";
char sipNm_BALL_showCharmmForceFieldOptions[] = "showCharmmForceFieldOptions";
char sipNm_BALL_showAmberForceFieldOptions[] = "showAmberForceFieldOptions";
char sipNm_BALL_setupForceField[] = "setupForceField";
char sipNm_BALL_runMinimization[] = "runMinimization";
char sipNm_BALL_mapProteins[] = "mapProteins";
char sipNm_BALL_createGridFromDistance[] = "createGridFromDistance";
char sipNm_BALL_chooseCharmmFF[] = "chooseCharmmFF";
char sipNm_BALL_chooseAmberFF[] = "chooseAmberFF";
char sipNm_BALL_calculateSecondaryStructure[] = "calculateSecondaryStructure";
char sipNm_BALL_calculateRMSD[] = "calculateRMSD";
char sipNm_BALL_calculateHBonds[] = "calculateHBonds";
char sipNm_BALL_calculateForceFieldEnergy[] = "calculateForceFieldEnergy";
char sipNm_BALL_buildPeptide[] = "buildPeptide";
char sipNm_BALL_buildBonds[] = "buildBonds";
char sipNm_BALL_MDSimulation[] = "MDSimulation";
char sipNm_BALL_addHydrogens[] = "addHydrogens";
char sipNm_BALL_centerCamera[] = "centerCamera";
char sipNm_BALL_checkResidue[] = "checkResidue";
char sipNm_BALL_getCharmmFF[] = "getCharmmFF";
char sipNm_BALL_getAmberFF[] = "getAmberFF";
char sipNm_BALL_MolecularStructure[] = "MolecularStructure";
char sipNm_BALL_getEditElementType[] = "getEditElementType";
char sipNm_BALL_setEditElementType[] = "setEditElementType";
char sipNm_BALL_optimizeStructure[] = "optimizeStructure";
char sipNm_BALL_saturateWithHydrogens[] = "saturateWithHydrogens";
char sipNm_BALL_createNewMolecule[] = "createNewMolecule";
char sipNm_BALL_setElementCursor[] = "setElementCursor";
char sipNm_BALL_setCursor[] = "setCursor";
char sipNm_BALL_addStructure[] = "addStructure";
char sipNm_BALL_EditableScene[] = "EditableScene";
char sipNm_BALL_disableViewVolumeRestriction[] = "disableViewVolumeRestriction";
char sipNm_BALL_setupViewVolume[] = "setupViewVolume";
char sipNm_BALL_showInfos[] = "showInfos";
char sipNm_BALL_switchShowGrid[] = "switchShowGrid";
char sipNm_BALL_switchToLastMode[] = "switchToLastMode";
char sipNm_BALL_stopAnimation[] = "stopAnimation";
char sipNm_BALL_startAnimation[] = "startAnimation";
char sipNm_BALL_clearRecordedAnimation[] = "clearRecordedAnimation";
char sipNm_BALL_enterDualStereo[] = "enterDualStereo";
char sipNm_BALL_enterActiveStereo[] = "enterActiveStereo";
char sipNm_BALL_exitStereo[] = "exitStereo";
char sipNm_BALL_switchShowWidget[] = "switchShowWidget";
char sipNm_BALL_showExportVRMLDialog[] = "showExportVRMLDialog";
char sipNm_BALL_showExportPNGDialog[] = "showExportPNGDialog";
char sipNm_BALL_printScene[] = "printScene";
char sipNm_BALL_exportNextPOVRay[] = "exportNextPOVRay";
char sipNm_BALL_exportPOVRay[] = "exportPOVRay";
char sipNm_BALL_createCoordinateSystemAtOrigin[] = "createCoordinateSystemAtOrigin";
char sipNm_BALL_createCoordinateSystem[] = "createCoordinateSystem";
char sipNm_BALL_showText[] = "showText";
char sipNm_BALL_setFPSEnabled[] = "setFPSEnabled";
char sipNm_BALL_setFullScreen[] = "setFullScreen";
char sipNm_BALL_getTurnPoint[] = "getTurnPoint";
char sipNm_BALL_setTurnPoint[] = "setTurnPoint";
char sipNm_BALL_isAnimationRunning[] = "isAnimationRunning";
char sipNm_BALL_rotateComposites[] = "rotateComposites";
char sipNm_BALL_moveComposites[] = "moveComposites";
char sipNm_BALL_move[] = "move";
char sipNm_BALL_rotateClockwise[] = "rotateClockwise";
char sipNm_BALL_setOffScreenRendering[] = "setOffScreenRendering";
char sipNm_BALL_exportPNG[] = "exportPNG";
char sipNm_BALL_getMousePositionY[] = "getMousePositionY";
char sipNm_BALL_getMousePositionX[] = "getMousePositionX";
char sipNm_BALL_setDefaultLighting[] = "setDefaultLighting";
char sipNm_BALL_getAnimationSmoothness[] = "getAnimationSmoothness";
char sipNm_BALL_setAnimationSmoothness[] = "setAnimationSmoothness";
char sipNm_BALL_exportScene[] = "exportScene";
char sipNm_BALL_onNotify[] = "onNotify";
char sipNm_BALL_Scene[] = "Scene";
char sipNm_BALL_unmap[] = "unmap";
char sipNm_BALL_clearScript[] = "clearScript";
char sipNm_BALL_saveScript[] = "saveScript";
char sipNm_BALL_execScript[] = "execScript";
char sipNm_BALL_loadScript[] = "loadScript";
char sipNm_BALL_abortScript[] = "abortScript";
char sipNm_BALL_runCurrentScript[] = "runCurrentScript";
char sipNm_BALL_toAbortScript[] = "toAbortScript";
char sipNm_BALL_PyWidget[] = "PyWidget";
char sipNm_BALL_setWidgetVisible[] = "setWidgetVisible";
char sipNm_BALL_DockWidget[] = "DockWidget";
char sipNm_BALL_canHandle[] = "canHandle";
char sipNm_BALL_setWorkingDirFromFilename_[] = "setWorkingDirFromFilename_";
char sipNm_BALL_setMenuHelp[] = "setMenuHelp";
char sipNm_BALL_setMenuHint[] = "setMenuHint";
char sipNm_BALL_unlockComposites[] = "unlockComposites";
char sipNm_BALL_lockComposites[] = "lockComposites";
char sipNm_BALL_registerWidget[] = "registerWidget";
char sipNm_BALL_outfinish_[] = "outfinish_";
char sipNm_BALL_outheader_[] = "outheader_";
char sipNm_BALL_out_[] = "out_";
char sipNm_BALL_renderTwoColoredTube_[] = "renderTwoColoredTube_";
char sipNm_BALL_renderTube_[] = "renderTube_";
char sipNm_BALL_renderMesh_[] = "renderMesh_";
char sipNm_BALL_renderSphere_[] = "renderSphere_";
char sipNm_BALL_VRMLColor[] = "VRMLColor";
char sipNm_BALL_VRMLVector3[] = "VRMLVector3";
char sipNm_BALL_VRMLColorRGBA[] = "VRMLColorRGBA";
char sipNm_BALL_VRMLRenderer[] = "VRMLRenderer";
char sipNm_BALL_setFileName[] = "setFileName";
char sipNm_BALL_POVRenderer[] = "POVRenderer";
char sipNm_BALL_render[] = "render";
char sipNm_BALL_hasStage[] = "hasStage";
char sipNm_BALL_Renderer[] = "Renderer";
char sipNm_BALL_applySplit[] = "applySplit";
char sipNm_BALL_gridSelected[] = "gridSelected";
char sipNm_BALL_choosePressed[] = "choosePressed";
char sipNm_BALL_autoScale[] = "autoScale";
char sipNm_BALL_tabChanged[] = "tabChanged";
char sipNm_BALL_maxMaxPressed[] = "maxMaxPressed";
char sipNm_BALL_minMinPressed[] = "minMinPressed";
char sipNm_BALL_minPressed[] = "minPressed";
char sipNm_BALL_midPressed[] = "midPressed";
char sipNm_BALL_maxPressed[] = "maxPressed";
char sipNm_BALL_cancelPressed[] = "cancelPressed";
char sipNm_BALL_applyPressed[] = "applyPressed";
char sipNm_BALL_setSplitRadius[] = "setSplitRadius";
char sipNm_BALL_setMidValue[] = "setMidValue";
char sipNm_BALL_ModifyRepresentationDialog[] = "ModifyRepresentationDialog";
char sipNm_BALL_writeSDFile[] = "writeSDFile";
char sipNm_BALL_writeMOL2File[] = "writeMOL2File";
char sipNm_BALL_writeMOLFile[] = "writeMOLFile";
char sipNm_BALL_writeHINFile[] = "writeHINFile";
char sipNm_BALL_writePDBFile[] = "writePDBFile";
char sipNm_BALL_readSDFile[] = "readSDFile";
char sipNm_BALL_readMOLFile[] = "readMOLFile";
char sipNm_BALL_readMOL2File[] = "readMOL2File";
char sipNm_BALL_readHINFile[] = "readHINFile";
char sipNm_BALL_readPDBFile[] = "readPDBFile";
char sipNm_BALL_writeFile[] = "writeFile";
char sipNm_BALL_openMolecularFile[] = "openMolecularFile";
char sipNm_BALL_readFiles[] = "readFiles";
char sipNm_BALL_MolecularFileDialog[] = "MolecularFileDialog";
char sipNm_BALL_modelUpdatesChanged[] = "modelUpdatesChanged";
char sipNm_BALL_coloringUpdatesChanged[] = "coloringUpdatesChanged";
char sipNm_BALL_precisionSliderChanged[] = "precisionSliderChanged";
char sipNm_BALL_precisionBoxChanged[] = "precisionBoxChanged";
char sipNm_BALL_modelOptionsPressed[] = "modelOptionsPressed";
char sipNm_BALL_coloringOptionsPressed[] = "coloringOptionsPressed";
char sipNm_BALL_editSelectionColor[] = "editSelectionColor";
char sipNm_BALL_editColor[] = "editColor";
char sipNm_BALL_setCustomColor[] = "setCustomColor";
char sipNm_BALL_selectColoringMethod[] = "selectColoringMethod";
char sipNm_BALL_selectMode[] = "selectMode";
char sipNm_BALL_selectModel[] = "selectModel";
char sipNm_BALL_enableCreationForNewMolecules[] = "enableCreationForNewMolecules";
char sipNm_BALL_getSettingsFromString[] = "getSettingsFromString";
char sipNm_BALL_modifyRepresentationMode[] = "modifyRepresentationMode";
char sipNm_BALL_createRepresentationMode[] = "createRepresentationMode";
char sipNm_BALL_DisplayProperties[] = "DisplayProperties";
char sipNm_BALL_showHelp[] = "showHelp";
char sipNm_BALL_cancelPreferences[] = "cancelPreferences";
char sipNm_BALL_setDefaultValues[] = "setDefaultValues";
char sipNm_BALL_Preferences[] = "Preferences";
char sipNm_BALL_Tube[] = "Tube";
char sipNm_BALL_TwoColoredTube[] = "TwoColoredTube";
char sipNm_BALL_getMiddleVertex[] = "getMiddleVertex";
char sipNm_BALL_TwoColoredLine[] = "TwoColoredLine";
char sipNm_BALL_setPositionAddress[] = "setPositionAddress";
char sipNm_BALL_isDefaultPositionAddress[] = "isDefaultPositionAddress";
char sipNm_BALL_getPositionAddress[] = "getPositionAddress";
char sipNm_BALL_Sphere[] = "Sphere";
char sipNm_BALL_SimpleBox[] = "SimpleBox";
char sipNm_BALL_Mesh[] = "Mesh";
char sipNm_BALL_Line[] = "Line";
char sipNm_BALL_setFontSize[] = "setFontSize";
char sipNm_BALL_Label[] = "Label";
char sipNm_BALL_draw_box[] = "draw_box";
char sipNm_BALL_slices[] = "slices";
char sipNm_BALL_max_dim[] = "max_dim";
char sipNm_BALL_origin[] = "origin";
char sipNm_BALL_getDotSize[] = "getDotSize";
char sipNm_BALL_setDotSize[] = "setDotSize";
char sipNm_BALL_setTexture[] = "setTexture";
char sipNm_BALL_getTexture[] = "getTexture";
char sipNm_BALL_getGrid[] = "getGrid";
char sipNm_BALL_setGrid[] = "setGrid";
char sipNm_BALL_DOTS[] = "DOTS";
char sipNm_BALL_SLICES[] = "SLICES";
char sipNm_BALL_PLANE[] = "PLANE";
char sipNm_BALL_GridVisualisation[] = "GridVisualisation";
char sipNm_BALL_setCircle[] = "setCircle";
char sipNm_BALL_getCircle[] = "getCircle";
char sipNm_BALL_Disc[] = "Disc";
char sipNm_BALL_Box[] = "Box";
char sipNm_BALL_getText[] = "getText";
char sipNm_BALL_setText[] = "setText";
char sipNm_BALL_ONE_LABEL[] = "ONE_LABEL";
char sipNm_BALL_ALL_RESIDUES[] = "ALL_RESIDUES";
char sipNm_BALL_ALL_ATOMS[] = "ALL_ATOMS";
char sipNm_BALL_ALL_ITEMS[] = "ALL_ITEMS";
char sipNm_BALL_LabelModel[] = "LabelModel";
char sipNm_BALL_getMaxLength[] = "getMaxLength";
char sipNm_BALL_getScaling[] = "getScaling";
char sipNm_BALL_setMaxLength[] = "setMaxLength";
char sipNm_BALL_setScaling[] = "setScaling";
char sipNm_BALL_ForceModel[] = "ForceModel";
char sipNm_BALL_AddSurfaceModel[] = "AddSurfaceModel";
char sipNm_BALL_HBondModelProcessor[] = "HBondModelProcessor";
char sipNm_BALL_ribbonsEnabled[] = "ribbonsEnabled";
char sipNm_BALL_enableRibbons[] = "enableRibbons";
char sipNm_BALL_drawDNAAsLadderModel[] = "drawDNAAsLadderModel";
char sipNm_BALL_setDrawDNAAsLadderModel[] = "setDrawDNAAsLadderModel";
char sipNm_BALL_getDNALadderRadius[] = "getDNALadderRadius";
char sipNm_BALL_setDNALadderRadius[] = "setDNALadderRadius";
char sipNm_BALL_getDNAHelixRadius[] = "getDNAHelixRadius";
char sipNm_BALL_setDNAHelixRadius[] = "setDNAHelixRadius";
char sipNm_BALL_getDNABaseRadius[] = "getDNABaseRadius";
char sipNm_BALL_setDNABaseRadius[] = "setDNABaseRadius";
char sipNm_BALL_getStrandWidth[] = "getStrandWidth";
char sipNm_BALL_setStrandWidth[] = "setStrandWidth";
char sipNm_BALL_getStrandHeight[] = "getStrandHeight";
char sipNm_BALL_setStrandHeight[] = "setStrandHeight";
char sipNm_BALL_getArrowWidth[] = "getArrowWidth";
char sipNm_BALL_setArrowWidth[] = "setArrowWidth";
char sipNm_BALL_getHelixRadius[] = "getHelixRadius";
char sipNm_BALL_setHelixRadius[] = "setHelixRadius";
char sipNm_BALL_AddCartoonModel[] = "AddCartoonModel";
char sipNm_BALL_enableDashedBonds[] = "enableDashedBonds";
char sipNm_BALL_dashedBondsEnabled[] = "dashedBondsEnabled";
char sipNm_BALL_isStickModel[] = "isStickModel";
char sipNm_BALL_isBallAndStickModel[] = "isBallAndStickModel";
char sipNm_BALL_enableStickModel[] = "enableStickModel";
char sipNm_BALL_enableBallAndStickModel[] = "enableBallAndStickModel";
char sipNm_BALL_getStickRadius[] = "getStickRadius";
char sipNm_BALL_setStickRadius[] = "setStickRadius";
char sipNm_BALL_getBallRadius[] = "getBallRadius";
char sipNm_BALL_setBallRadius[] = "setBallRadius";
char sipNm_BALL_AddBallAndStickModel[] = "AddBallAndStickModel";
char sipNm_BALL_getTubeRadius[] = "getTubeRadius";
char sipNm_BALL_setTubeRadius[] = "setTubeRadius";
char sipNm_BALL_AddBackboneModel[] = "AddBackboneModel";
char sipNm_BALL_getVDWRadiusFactor[] = "getVDWRadiusFactor";
char sipNm_BALL_setVDWRadiusFactor[] = "setVDWRadiusFactor";
char sipNm_BALL_AddVanDerWaalsModel[] = "AddVanDerWaalsModel";
char sipNm_BALL_AddLineModel[] = "AddLineModel";
char sipNm_BALL_AtomBondModelBaseProcessor[] = "AtomBondModelBaseProcessor";
char sipNm_BALL_createGeometricObjects[] = "createGeometricObjects";
char sipNm_BALL_clearComposites[] = "clearComposites";
char sipNm_BALL_ModelProcessor[] = "ModelProcessor";
char sipNm_BALL_getOtherColor[] = "getOtherColor";
char sipNm_BALL_getAromaticColor[] = "getAromaticColor";
char sipNm_BALL_getHydrophobicColor[] = "getHydrophobicColor";
char sipNm_BALL_getPolarColor[] = "getPolarColor";
char sipNm_BALL_getAcidicColor[] = "getAcidicColor";
char sipNm_BALL_getBasicColor[] = "getBasicColor";
char sipNm_BALL_setOtherColor[] = "setOtherColor";
char sipNm_BALL_setAromaticColor[] = "setAromaticColor";
char sipNm_BALL_setHydrophobicColor[] = "setHydrophobicColor";
char sipNm_BALL_setPolarColor[] = "setPolarColor";
char sipNm_BALL_setAcidicColor[] = "setAcidicColor";
char sipNm_BALL_setBasicColor[] = "setBasicColor";
char sipNm_BALL_ResidueTypeColorProcessor[] = "ResidueTypeColorProcessor";
char sipNm_BALL_setTurnColor[] = "setTurnColor";
char sipNm_BALL_setStrandColor[] = "setStrandColor";
char sipNm_BALL_setHelixColor[] = "setHelixColor";
char sipNm_BALL_setCoilColor[] = "setCoilColor";
char sipNm_BALL_getTurnColor[] = "getTurnColor";
char sipNm_BALL_getStrandColor[] = "getStrandColor";
char sipNm_BALL_getHelixColor[] = "getHelixColor";
char sipNm_BALL_getCoilColor[] = "getCoilColor";
char sipNm_BALL_SecondaryStructureColorProcessor[] = "SecondaryStructureColorProcessor";
char sipNm_BALL_ForceColorProcessor[] = "ForceColorProcessor";
char sipNm_BALL_OccupancyColorProcessor[] = "OccupancyColorProcessor";
char sipNm_BALL_TemperatureFactorColorProcessor[] = "TemperatureFactorColorProcessor";
char sipNm_BALL_CustomColorProcessor[] = "CustomColorProcessor";
char sipNm_BALL_setShowSelected[] = "setShowSelected";
char sipNm_BALL_showSelected[] = "showSelected";
char sipNm_BALL_addAtom[] = "addAtom";
char sipNm_BALL_calculateDistances[] = "calculateDistances";
char sipNm_BALL_getMaxDistanceColor[] = "getMaxDistanceColor";
char sipNm_BALL_setMaxDistanceColor[] = "setMaxDistanceColor";
char sipNm_BALL_getNullDistanceColor[] = "getNullDistanceColor";
char sipNm_BALL_setNullDistanceColor[] = "setNullDistanceColor";
char sipNm_BALL_AtomDistanceColorProcessor[] = "AtomDistanceColorProcessor";
char sipNm_BALL_AtomChargeColorProcessor[] = "AtomChargeColorProcessor";
char sipNm_BALL_ResidueNameColorProcessor[] = "ResidueNameColorProcessor";
char sipNm_BALL_MoleculeColorProcessor[] = "MoleculeColorProcessor";
char sipNm_BALL_ChainColorProcessor[] = "ChainColorProcessor";
char sipNm_BALL_PositionColorProcessor[] = "PositionColorProcessor";
char sipNm_BALL_getLastColor[] = "getLastColor";
char sipNm_BALL_getMiddleColor[] = "getMiddleColor";
char sipNm_BALL_getFirstColor[] = "getFirstColor";
char sipNm_BALL_setMiddleColor[] = "setMiddleColor";
char sipNm_BALL_setLastColor[] = "setLastColor";
char sipNm_BALL_setFirstColor[] = "setFirstColor";
char sipNm_BALL_ResidueNumberColorProcessor[] = "ResidueNumberColorProcessor";
char sipNm_BALL_ElementColorProcessor[] = "ElementColorProcessor";
char sipNm_BALL_interpolateColor[] = "interpolateColor";
char sipNm_BALL_getMinValue[] = "getMinValue";
char sipNm_BALL_setMinValue[] = "setMinValue";
char sipNm_BALL_getMaxValue[] = "getMaxValue";
char sipNm_BALL_setMaxValue[] = "setMaxValue";
char sipNm_BALL_getMaxColor[] = "getMaxColor";
char sipNm_BALL_getMinColor[] = "getMinColor";
char sipNm_BALL_setMaxColor[] = "setMaxColor";
char sipNm_BALL_setMinColor[] = "setMinColor";
char sipNm_BALL_getMode[] = "getMode";
char sipNm_BALL_setMode[] = "setMode";
char sipNm_BALL_NO_OUTSIDE_COLORS[] = "NO_OUTSIDE_COLORS";
char sipNm_BALL_DEFAULT_COLOR_FOR_OUTSIDE_COLORS[] = "DEFAULT_COLOR_FOR_OUTSIDE_COLORS";
char sipNm_BALL_USE_OUTSIDE_COLOR[] = "USE_OUTSIDE_COLOR";
char sipNm_BALL_InterpolateColorProcessor[] = "InterpolateColorProcessor";
char sipNm_BALL_getClosestItem[] = "getClosestItem";
char sipNm_BALL_getAdditionalGridDistance[] = "getAdditionalGridDistance";
char sipNm_BALL_setAdditionalGridDistance[] = "setAdditionalGridDistance";
char sipNm_BALL_getDefaultColor[] = "getDefaultColor";
char sipNm_BALL_setDefaultColor[] = "setDefaultColor";
char sipNm_BALL_updateAlwaysNeeded[] = "updateAlwaysNeeded";
char sipNm_BALL_ColorProcessor[] = "ColorProcessor";
char sipNm_BALL_bufferTrajectory[] = "bufferTrajectory";
char sipNm_BALL_visualizeTrajectory[] = "visualizeTrajectory";
char sipNm_BALL_TrajectoryController[] = "TrajectoryController";
char sipNm_BALL_createSphere[] = "createSphere";
char sipNm_BALL_visualizeGrid[] = "visualizeGrid";
char sipNm_BALL_createVectorGrid[] = "createVectorGrid";
char sipNm_BALL_createHistogramGrid[] = "createHistogramGrid";
char sipNm_BALL_resizeGrid[] = "resizeGrid";
char sipNm_BALL_isGridSizePowerOfTwo[] = "isGridSizePowerOfTwo";
char sipNm_BALL_computeIsoContourSurface[] = "computeIsoContourSurface";
char sipNm_BALL_RegularData3DController[] = "RegularData3DController";
char sipNm_BALL_deleteDatasets[] = "deleteDatasets";
char sipNm_BALL_checkMenu[] = "checkMenu";
char sipNm_BALL_hasDataset[] = "hasDataset";
char sipNm_BALL_getSelectedDataset[] = "getSelectedDataset";
char sipNm_BALL_getSelectedDatasets[] = "getSelectedDatasets";
char sipNm_BALL_getDatasets[] = "getDatasets";
char sipNm_BALL_createMenuEntries[] = "createMenuEntries";
char sipNm_BALL_deleteDataset[] = "deleteDataset";
char sipNm_BALL_insertDataset[] = "insertDataset";
char sipNm_BALL_getDatasetControl[] = "getDatasetControl";
char sipNm_BALL_setDatasetControl[] = "setDatasetControl";
char sipNm_BALL_DatasetController[] = "DatasetController";
char sipNm_BALL_Dataset[] = "Dataset";
char sipNm_BALL_map[] = "map";
char sipNm_BALL_setRange[] = "setRange";
char sipNm_BALL_setMinMaxColors[] = "setMinMaxColors";
char sipNm_BALL_createMap[] = "createMap";
char sipNm_BALL_getAlphaBlending[] = "getAlphaBlending";
char sipNm_BALL_setAlphaBlending[] = "setAlphaBlending";
char sipNm_BALL_getNumberOfColors[] = "getNumberOfColors";
char sipNm_BALL_setNumberOfColors[] = "setNumberOfColors";
char sipNm_BALL_setBaseColors[] = "setBaseColors";
char sipNm_BALL_ColorMap[] = "ColorMap";
char sipNm_BALL_MultiColorExtension[] = "MultiColorExtension";
char sipNm_BALL_getColor2[] = "getColor2";
char sipNm_BALL_setColor2[] = "setColor2";
char sipNm_BALL_ColorExtension2[] = "ColorExtension2";
char sipNm_BALL_isDefaultVertexAddresses[] = "isDefaultVertexAddresses";
char sipNm_BALL_isDefaultVertex2Address[] = "isDefaultVertex2Address";
char sipNm_BALL_isDefaultVertex1Address[] = "isDefaultVertex1Address";
char sipNm_BALL_setDefaultVertexAddresses[] = "setDefaultVertexAddresses";
char sipNm_BALL_getVertices[] = "getVertices";
char sipNm_BALL_setVertexAddresses[] = "setVertexAddresses";
char sipNm_BALL_setVertices[] = "setVertices";
char sipNm_BALL_getVertex2Address[] = "getVertex2Address";
char sipNm_BALL_setDefaultVertex2Address[] = "setDefaultVertex2Address";
char sipNm_BALL_setVertex2Address[] = "setVertex2Address";
char sipNm_BALL_getVertex2[] = "getVertex2";
char sipNm_BALL_setVertex2[] = "setVertex2";
char sipNm_BALL_getVertex1Address[] = "getVertex1Address";
char sipNm_BALL_setDefaultVertex1Address[] = "setDefaultVertex1Address";
char sipNm_BALL_setVertex1Address[] = "setVertex1Address";
char sipNm_BALL_getVertex1[] = "getVertex1";
char sipNm_BALL_setVertex1[] = "setVertex1";
char sipNm_BALL_Vertex2[] = "Vertex2";
char sipNm_BALL_isDefaultVertexAddress[] = "isDefaultVertexAddress";
char sipNm_BALL_getVertexAddress[] = "getVertexAddress";
char sipNm_BALL_setDefaultVertexAddress[] = "setDefaultVertexAddress";
char sipNm_BALL_setVertexAddress[] = "setVertexAddress";
char sipNm_BALL_setVertex[] = "setVertex";
char sipNm_BALL_Vertex[] = "Vertex";
char sipNm_BALL_PyColorRGBAVector[] = "PyColorRGBAVector";
char sipNm_BALL_getBlue[] = "getBlue";
char sipNm_BALL_setBlue[] = "setBlue";
char sipNm_BALL_getGreen[] = "getGreen";
char sipNm_BALL_setGreen[] = "setGreen";
char sipNm_BALL_getRed[] = "getRed";
char sipNm_BALL_setRed[] = "setRed";
char sipNm_BALL_ColorRGBA[] = "ColorRGBA";
char sipNm_BALL_ColorUnit[] = "ColorUnit";
char sipNm_BALL_NotInHexFormat[] = "NotInHexFormat";
char sipNm_BALL_finalizePreferencesTab[] = "finalizePreferencesTab";
char sipNm_BALL_initializePreferencesTab[] = "initializePreferencesTab";
char sipNm_BALL_finalizeWidget[] = "finalizeWidget";
char sipNm_BALL_initializeWidget[] = "initializeWidget";
char sipNm_BALL_getPort[] = "getPort";
char sipNm_BALL_setPort[] = "setPort";
char sipNm_BALL_deactivate[] = "deactivate";
char sipNm_BALL_activate[] = "activate";
char sipNm_BALL_NotCompositeObject[] = "NotCompositeObject";
char sipNm_BALL_ModularWidget[] = "ModularWidget";
char sipNm_BALL_Server[] = "Server";
char sipNm_BALL_flip[] = "flip";
char sipNm_BALL_setPoint[] = "setPoint";
char sipNm_BALL_getPoint[] = "getPoint";
char sipNm_BALL_setActive[] = "setActive";
char sipNm_BALL_isActive[] = "isActive";
char sipNm_BALL_setNormal[] = "setNormal";
char sipNm_BALL_ClippingPlane[] = "ClippingPlane";
char sipNm_BALL_focusCamera[] = "focusCamera";
char sipNm_BALL_logString[] = "logString";
char sipNm_BALL_createTemporaryFilename[] = "createTemporaryFilename";
char sipNm_BALL_getMainControl[] = "getMainControl";
char sipNm_BALL_createFloatString[] = "createFloatString";
char sipNm_BALL_stringToVector3[] = "stringToVector3";
char sipNm_BALL_vector3ToString[] = "vector3ToString";
char sipNm_BALL_COLORING_UNKNOWN[] = "COLORING_UNKNOWN";
char sipNm_BALL_COLORING_CUSTOM[] = "COLORING_CUSTOM";
char sipNm_BALL_COLORING_MOLECULE[] = "COLORING_MOLECULE";
char sipNm_BALL_COLORING_CHAIN[] = "COLORING_CHAIN";
char sipNm_BALL_COLORING_RESIDUE_TYPE[] = "COLORING_RESIDUE_TYPE";
char sipNm_BALL_COLORING_FORCES[] = "COLORING_FORCES";
char sipNm_BALL_COLORING_OCCUPANCY[] = "COLORING_OCCUPANCY";
char sipNm_BALL_COLORING_TEMPERATURE_FACTOR[] = "COLORING_TEMPERATURE_FACTOR";
char sipNm_BALL_COLORING_DISTANCE[] = "COLORING_DISTANCE";
char sipNm_BALL_COLORING_ATOM_CHARGE[] = "COLORING_ATOM_CHARGE";
char sipNm_BALL_COLORING_SECONDARY_STRUCTURE[] = "COLORING_SECONDARY_STRUCTURE";
char sipNm_BALL_COLORING_RESIDUE_NAME[] = "COLORING_RESIDUE_NAME";
char sipNm_BALL_COLORING_RESIDUE_INDEX[] = "COLORING_RESIDUE_INDEX";
char sipNm_BALL_COLORING_ELEMENT[] = "COLORING_ELEMENT";
char sipNm_BALL_MODEL_FIELD_LINES[] = "MODEL_FIELD_LINES";
char sipNm_BALL_MODEL_GRID_VOLUME[] = "MODEL_GRID_VOLUME";
char sipNm_BALL_MODEL_GRID_SLICE[] = "MODEL_GRID_SLICE";
char sipNm_BALL_MODEL_CONTOUR_SURFACE[] = "MODEL_CONTOUR_SURFACE";
char sipNm_BALL_MODEL_LABEL[] = "MODEL_LABEL";
char sipNm_BALL_MODEL_FORCES[] = "MODEL_FORCES";
char sipNm_BALL_MODEL_HBONDS[] = "MODEL_HBONDS";
char sipNm_BALL_MODEL_CARTOON[] = "MODEL_CARTOON";
char sipNm_BALL_MODEL_BACKBONE[] = "MODEL_BACKBONE";
char sipNm_BALL_MODEL_SA_SURFACE[] = "MODEL_SA_SURFACE";
char sipNm_BALL_MODEL_SE_SURFACE[] = "MODEL_SE_SURFACE";
char sipNm_BALL_MODEL_VDW[] = "MODEL_VDW";
char sipNm_BALL_MODEL_BALL_AND_STICK[] = "MODEL_BALL_AND_STICK";
char sipNm_BALL_MODEL_STICK[] = "MODEL_STICK";
char sipNm_BALL_MODEL_LINES[] = "MODEL_LINES";
char sipNm_BALL_MODEL_UNKNOWN[] = "MODEL_UNKNOWN";
char sipNm_BALL_DRAWING_PRECISION_ULTRA[] = "DRAWING_PRECISION_ULTRA";
char sipNm_BALL_DRAWING_PRECISION_HIGH[] = "DRAWING_PRECISION_HIGH";
char sipNm_BALL_DRAWING_PRECISION_MEDIUM[] = "DRAWING_PRECISION_MEDIUM";
char sipNm_BALL_DRAWING_PRECISION_LOW[] = "DRAWING_PRECISION_LOW";
char sipNm_BALL_DRAWING_MODE_TOON[] = "DRAWING_MODE_TOON";
char sipNm_BALL_DRAWING_MODE_SOLID[] = "DRAWING_MODE_SOLID";
char sipNm_BALL_DRAWING_MODE_WIREFRAME[] = "DRAWING_MODE_WIREFRAME";
char sipNm_BALL_DRAWING_MODE_DOTS[] = "DRAWING_MODE_DOTS";
char sipNm_BALL_LOG_EVENT[] = "LOG_EVENT";
char sipNm_BALL_MESSAGE_EVENT[] = "MESSAGE_EVENT";
char sipNm_BALL_GeometricObject[] = "GeometricObject";
char sipNm_BALL_setNeedsUpdate[] = "setNeedsUpdate";
char sipNm_BALL_needsUpdate[] = "needsUpdate";
char sipNm_BALL_getModelBuildTime[] = "getModelBuildTime";
char sipNm_BALL_clearGeometricObjects[] = "clearGeometricObjects";
char sipNm_BALL_getProperties[] = "getProperties";
char sipNm_BALL_coloringUpdateEnabled[] = "coloringUpdateEnabled";
char sipNm_BALL_modelUpdateEnabled[] = "modelUpdateEnabled";
char sipNm_BALL_enableColoringUpdate[] = "enableColoringUpdate";
char sipNm_BALL_enableModelUpdate[] = "enableModelUpdate";
char sipNm_BALL_setColoringMethod[] = "setColoringMethod";
char sipNm_BALL_setModelType[] = "setModelType";
char sipNm_BALL_setColorProcessor[] = "setColorProcessor";
char sipNm_BALL_getColorProcessor[] = "getColorProcessor";
char sipNm_BALL_setModelProcessor[] = "setModelProcessor";
char sipNm_BALL_getModelProcessor[] = "getModelProcessor";
char sipNm_BALL_setComposites[] = "setComposites";
char sipNm_BALL_setGeometricObjects[] = "setGeometricObjects";
char sipNm_BALL_getGeometricObjects[] = "getGeometricObjects";
char sipNm_BALL_setTransparency[] = "setTransparency";
char sipNm_BALL_getTransparency[] = "getTransparency";
char sipNm_BALL_setDrawingMode[] = "setDrawingMode";
char sipNm_BALL_getDrawingMode[] = "getDrawingMode";
char sipNm_BALL_getSurfaceDrawingPrecision[] = "getSurfaceDrawingPrecision";
char sipNm_BALL_setSurfaceDrawingPrecision[] = "setSurfaceDrawingPrecision";
char sipNm_BALL_getDrawingPrecision[] = "getDrawingPrecision";
char sipNm_BALL_setDrawingPrecision[] = "setDrawingPrecision";
char sipNm_BALL_isHidden[] = "isHidden";
char sipNm_BALL_setHidden[] = "setHidden";
char sipNm_BALL_PROPERTY__IS_COORDINATE_SYSTEM[] = "PROPERTY__IS_COORDINATE_SYSTEM";
char sipNm_BALL_PROPERTY__ALWAYS_FRONT[] = "PROPERTY__ALWAYS_FRONT";
char sipNm_BALL_Representation[] = "Representation";
char sipNm_BALL_finishedRendering[] = "finishedRendering";
char sipNm_BALL_startRendering[] = "startRendering";
char sipNm_BALL_isBeeingRendered[] = "isBeeingRendered";
char sipNm_BALL_updateRunning[] = "updateRunning";
char sipNm_BALL_willBeUpdated[] = "willBeUpdated";
char sipNm_BALL_focusRepresentation[] = "focusRepresentation";
char sipNm_BALL_storeRepresentations[] = "storeRepresentations";
char sipNm_BALL_insertClippingPlane[] = "insertClippingPlane";
char sipNm_BALL_removeClippingPlane[] = "removeClippingPlane";
char sipNm_BALL_rebuildAllRepresentations[] = "rebuildAllRepresentations";
char sipNm_BALL_getRepresentationsOf[] = "getRepresentationsOf";
char sipNm_BALL_removedComposite[] = "removedComposite";
char sipNm_BALL_createRepresentation[] = "createRepresentation";
char sipNm_BALL_getNumberOfRepresentations[] = "getNumberOfRepresentations";
char sipNm_BALL_getRepresentations[] = "getRepresentations";
char sipNm_BALL_RepresentationManager[] = "RepresentationManager";
char sipNm_BALL_getComposites[] = "getComposites";
char sipNm_BALL_getNumberOfComposites[] = "getNumberOfComposites";
char sipNm_BALL_hasRoot[] = "hasRoot";
char sipNm_BALL_CompositeManager[] = "CompositeManager";
char sipNm_BALL_processEvents[] = "processEvents";
char sipNm_BALL_quickLoad[] = "quickLoad";
char sipNm_BALL_quickSave[] = "quickSave";
char sipNm_BALL_loadBALLViewProjectFile[] = "loadBALLViewProjectFile";
char sipNm_BALL_saveBALLViewProjectFile[] = "saveBALLViewProjectFile";
char sipNm_BALL_openFile[] = "openFile";
char sipNm_BALL_setMultithreading[] = "setMultithreading";
char sipNm_BALL_useMultithreading[] = "useMultithreading";
char sipNm_BALL_getProxyPort[] = "getProxyPort";
char sipNm_BALL_getProxy[] = "getProxy";
char sipNm_BALL_setProxy[] = "setProxy";
char sipNm_BALL_getLoggingFilename[] = "getLoggingFilename";
char sipNm_BALL_setLoggingFilename[] = "setLoggingFilename";
char sipNm_BALL_disableLoggingToFile[] = "disableLoggingToFile";
char sipNm_BALL_enableLoggingToFile[] = "enableLoggingToFile";
char sipNm_BALL_setWorkingDir[] = "setWorkingDir";
char sipNm_BALL_getWorkingDir[] = "getWorkingDir";
char sipNm_BALL_insertDeleteEntry[] = "insertDeleteEntry";
char sipNm_BALL_setDeleteEntryEnabled[] = "setDeleteEntryEnabled";
char sipNm_BALL_wait[] = "wait";
char sipNm_BALL_isBusy[] = "isBusy";
char sipNm_BALL_stopedSimulation[] = "stopedSimulation";
char sipNm_BALL_updateOfRepresentationRunning[] = "updateOfRepresentationRunning";
char sipNm_BALL_getLockingWidget[] = "getLockingWidget";
char sipNm_BALL_unlockCompositesFor[] = "unlockCompositesFor";
char sipNm_BALL_lockCompositesFor[] = "lockCompositesFor";
char sipNm_BALL_compositesAreLocked[] = "compositesAreLocked";
char sipNm_BALL_getStatusbarText[] = "getStatusbarText";
char sipNm_BALL_setStatusbarText[] = "setStatusbarText";
char sipNm_BALL_printSelectionInfos[] = "printSelectionInfos";
char sipNm_BALL_clearSelection[] = "clearSelection";
char sipNm_BALL_deselectCompositeRecursive[] = "deselectCompositeRecursive";
char sipNm_BALL_selectCompositeRecursive[] = "selectCompositeRecursive";
char sipNm_BALL_getSelectedSystem[] = "getSelectedSystem";
char sipNm_BALL_getMolecularControlSelection[] = "getMolecularControlSelection";
char sipNm_BALL_removeModularWidget[] = "removeModularWidget";
char sipNm_BALL_addModularWidget[] = "addModularWidget";
char sipNm_BALL_restoreWindows[] = "restoreWindows";
char sipNm_BALL_writePreferences[] = "writePreferences";
char sipNm_BALL_fetchPreferences[] = "fetchPreferences";
char sipNm_BALL_applyPreferences[] = "applyPreferences";
char sipNm_BALL_insertPopupMenuSeparator[] = "insertPopupMenuSeparator";
char sipNm_BALL_setContentSize[] = "setContentSize";
char sipNm_BALL_isAboutToQuit[] = "isAboutToQuit";
char sipNm_BALL_quit[] = "quit";
char sipNm_BALL_aboutToExit[] = "aboutToExit";
char sipNm_BALL_complementSelection[] = "complementSelection";
char sipNm_BALL_stopSimulation[] = "stopSimulation";
char sipNm_BALL_checkMenus[] = "checkMenus";
char sipNm_BALL_show[] = "show";
char sipNm_BALL_sendMessage[] = "sendMessage";
char sipNm_BALL_getINIFile[] = "getINIFile";
char sipNm_BALL_getPreferences[] = "getPreferences";
char sipNm_BALL_redrawAllRepresentations[] = "redrawAllRepresentations";
char sipNm_BALL_updateRepresentationsOf[] = "updateRepresentationsOf";
char sipNm_BALL_getCompositeManager[] = "getCompositeManager";
char sipNm_BALL_getRepresentationManager[] = "getRepresentationManager";
char sipNm_BALL_getInstance[] = "getInstance";
char sipNm_BALL_countInstances[] = "countInstances";
char sipNm_BALL_clearData[] = "clearData";
char sipNm_BALL_MainControl[] = "MainControl";
char sipNm_BALL_calculateAbsoluteCoordinates[] = "calculateAbsoluteCoordinates";
char sipNm_BALL_calculateRelativeCoordinates[] = "calculateRelativeCoordinates";
char sipNm_BALL_setShininess[] = "setShininess";
char sipNm_BALL_getShininess[] = "getShininess";
char sipNm_BALL_setAmbientIntensity[] = "setAmbientIntensity";
char sipNm_BALL_getAmbientIntensity[] = "getAmbientIntensity";
char sipNm_BALL_setDiffuseIntensity[] = "setDiffuseIntensity";
char sipNm_BALL_getDiffuseIntensity[] = "getDiffuseIntensity";
char sipNm_BALL_setSpecularIntensity[] = "setSpecularIntensity";
char sipNm_BALL_getSpecularIntensity[] = "getSpecularIntensity";
char sipNm_BALL_setFogIntensity[] = "setFogIntensity";
char sipNm_BALL_getFogIntensity[] = "getFogIntensity";
char sipNm_BALL_swapSideBySideStereo[] = "swapSideBySideStereo";
char sipNm_BALL_setSwapSideBySideStereo[] = "setSwapSideBySideStereo";
char sipNm_BALL_getFocalDistance[] = "getFocalDistance";
char sipNm_BALL_setFocalDistance[] = "setFocalDistance";
char sipNm_BALL_getEyeDistance[] = "getEyeDistance";
char sipNm_BALL_setEyeDistance[] = "setEyeDistance";
char sipNm_BALL_coordinateSystemEnabled[] = "coordinateSystemEnabled";
char sipNm_BALL_showCoordinateSystem[] = "showCoordinateSystem";
char sipNm_BALL_setBackgroundColor[] = "setBackgroundColor";
char sipNm_BALL_getBackgroundColor[] = "getBackgroundColor";
char sipNm_BALL_setCamera[] = "setCamera";
char sipNm_BALL_getCamera[] = "getCamera";
char sipNm_BALL_clearLightSources[] = "clearLightSources";
char sipNm_BALL_removeLightSource[] = "removeLightSource";
char sipNm_BALL_addLightSource[] = "addLightSource";
char sipNm_BALL_Stage[] = "Stage";
char sipNm_BALL_readFromString[] = "readFromString";
char sipNm_BALL_getRightVector[] = "getRightVector";
char sipNm_BALL_getViewVector[] = "getViewVector";
char sipNm_BALL_setLookUpVector[] = "setLookUpVector";
char sipNm_BALL_getLookUpVector[] = "getLookUpVector";
char sipNm_BALL_setLookAtPosition[] = "setLookAtPosition";
char sipNm_BALL_getLookAtPosition[] = "getLookAtPosition";
char sipNm_BALL_setViewPoint[] = "setViewPoint";
char sipNm_BALL_getViewPoint[] = "getViewPoint";
char sipNm_BALL_Camera[] = "Camera";
char sipNm_BALL_isRelativeToCamera[] = "isRelativeToCamera";
char sipNm_BALL_setRelativeToCamera[] = "setRelativeToCamera";
char sipNm_BALL_setColor[] = "setColor";
char sipNm_BALL_getColor[] = "getColor";
char sipNm_BALL_setIntensity[] = "setIntensity";
char sipNm_BALL_getIntensity[] = "getIntensity";
char sipNm_BALL_setAngle[] = "setAngle";
char sipNm_BALL_setDirection[] = "setDirection";
char sipNm_BALL_DIRECTIONAL[] = "DIRECTIONAL";
char sipNm_BALL_POSITIONAL[] = "POSITIONAL";
char sipNm_BALL_AMBIENT[] = "AMBIENT";
char sipNm_BALL_LightSource[] = "LightSource";
char sipNm_BALL_DeselectControlsMessage[] = "DeselectControlsMessage";
char sipNm_BALL_getColoringMethod[] = "getColoringMethod";
char sipNm_BALL_getModelType[] = "getModelType";
char sipNm_BALL_CreateRepresentationMessage[] = "CreateRepresentationMessage";
char sipNm_BALL_ShowDisplayPropertiesMessage[] = "ShowDisplayPropertiesMessage";
char sipNm_BALL_CREATE_DISTANCE_GRID[] = "CREATE_DISTANCE_GRID";
char sipNm_BALL_ADD_HYDROGENS[] = "ADD_HYDROGENS";
char sipNm_BALL_CHECK_RESIDUE[] = "CHECK_RESIDUE";
char sipNm_BALL_BUILD_BONDS[] = "BUILD_BONDS";
char sipNm_BALL_MolecularTaskMessage[] = "MolecularTaskMessage";
char sipNm_BALL_getRepresentation[] = "getRepresentation";
char sipNm_BALL_setRepresentation[] = "setRepresentation";
char sipNm_BALL_ADD_TO_GEOMETRIC_CONTROL[] = "ADD_TO_GEOMETRIC_CONTROL";
char sipNm_BALL_FINISHED_UPDATE[] = "FINISHED_UPDATE";
char sipNm_BALL_STARTED_UPDATE[] = "STARTED_UPDATE";
char sipNm_BALL_SELECTED[] = "SELECTED";
char sipNm_BALL_UPDATE[] = "UPDATE";
char sipNm_BALL_REMOVE[] = "REMOVE";
char sipNm_BALL_ADD[] = "ADD";
char sipNm_BALL_RepresentationMessage[] = "RepresentationMessage";
char sipNm_BALL_setSelected[] = "setSelected";
char sipNm_BALL_GeometricObjectSelectionMessage[] = "GeometricObjectSelectionMessage";
char sipNm_BALL_setOpenItems[] = "setOpenItems";
char sipNm_BALL_openItems[] = "openItems";
char sipNm_BALL_NewSelectionMessage[] = "NewSelectionMessage";
char sipNm_BALL_ControlSelectionMessage[] = "ControlSelectionMessage";
char sipNm_BALL_getSelection[] = "getSelection";
char sipNm_BALL_setSelection[] = "setSelection";
char sipNm_BALL_GenericSelectionMessage[] = "GenericSelectionMessage";
char sipNm_BALL_getStage[] = "getStage";
char sipNm_BALL_setStage[] = "setStage";
char sipNm_BALL_ENTER_MOVE_MODE[] = "ENTER_MOVE_MODE";
char sipNm_BALL_ENTER_PICKING_MODE[] = "ENTER_PICKING_MODE";
char sipNm_BALL_ENTER_ROTATE_MODE[] = "ENTER_ROTATE_MODE";
char sipNm_BALL_EXPORT_POVRAY[] = "EXPORT_POVRAY";
char sipNm_BALL_EXPORT_PNG[] = "EXPORT_PNG";
char sipNm_BALL_REMOVE_COORDINATE_SYSTEM[] = "REMOVE_COORDINATE_SYSTEM";
char sipNm_BALL_UPDATE_CAMERA[] = "UPDATE_CAMERA";
char sipNm_BALL_REDRAW[] = "REDRAW";
char sipNm_BALL_REBUILD_DISPLAY_LISTS[] = "REBUILD_DISPLAY_LISTS";
char sipNm_BALL_SceneMessage[] = "SceneMessage";
char sipNm_BALL_showSelectionInfos[] = "showSelectionInfos";
char sipNm_BALL_setShowSelectionInfos[] = "setShowSelectionInfos";
char sipNm_BALL_updateRepresentations[] = "updateRepresentations";
char sipNm_BALL_setUpdateRepresentations[] = "setUpdateRepresentations";
char sipNm_BALL_getCompositeName[] = "getCompositeName";
char sipNm_BALL_setCompositeName[] = "setCompositeName";
char sipNm_BALL_NEW_MOLECULE[] = "NEW_MOLECULE";
char sipNm_BALL_CENTER_CAMERA[] = "CENTER_CAMERA";
char sipNm_BALL_DESELECTED_COMPOSITE[] = "DESELECTED_COMPOSITE";
char sipNm_BALL_SELECTED_COMPOSITE[] = "SELECTED_COMPOSITE";
char sipNm_BALL_CHANGED_COMPOSITE_HIERARCHY[] = "CHANGED_COMPOSITE_HIERARCHY";
char sipNm_BALL_CHANGED_COMPOSITE[] = "CHANGED_COMPOSITE";
char sipNm_BALL_REMOVED_COMPOSITE[] = "REMOVED_COMPOSITE";
char sipNm_BALL_NEW_COMPOSITE[] = "NEW_COMPOSITE";
char sipNm_BALL_CompositeMessage[] = "CompositeMessage";
char sipNm_BALL_Message[] = "Message";
char sipNm_BALL_reset[] = "reset";
char sipNm_BALL_getUserTime[] = "getUserTime";
char sipNm_BALL_getSystemTime[] = "getSystemTime";
char sipNm_BALL_getClockTime[] = "getClockTime";
char sipNm_BALL_getCPUTime[] = "getCPUTime";
char sipNm_BALL_stop[] = "stop";
char sipNm_BALL_isRunning[] = "isRunning";
char sipNm_BALL_Timer[] = "Timer";
char sipNm_BALL_getNumberOfProcessors[] = "getNumberOfProcessors";
char sipNm_BALL_getUptime[] = "getUptime";
char sipNm_BALL_getFreeSwapSpace[] = "getFreeSwapSpace";
char sipNm_BALL_getBufferedMemory[] = "getBufferedMemory";
char sipNm_BALL_getTotalMemory[] = "getTotalMemory";
char sipNm_BALL_getFreeMemory[] = "getFreeMemory";
char sipNm_BALL_getAvailableMemory[] = "getAvailableMemory";
char sipNm_BALL_findStrict[] = "findStrict";
char sipNm_BALL_getDefaultDataPath[] = "getDefaultDataPath";
char sipNm_BALL_addDataPath[] = "addDataPath";
char sipNm_BALL_setDataPath[] = "setDataPath";
char sipNm_BALL_getDataPath[] = "getDataPath";
char sipNm_BALL_Path[] = "Path";
char sipNm_BALL_OpenMode[] = "OpenMode";
char sipNm_BALL_isExecutable[] = "isExecutable";
char sipNm_BALL_isWritable[] = "isWritable";
char sipNm_BALL_isReadable[] = "isReadable";
char sipNm_BALL_isCanonized[] = "isCanonized";
char sipNm_BALL_isAccessible[] = "isAccessible";
char sipNm_BALL_isClosed[] = "isClosed";
char sipNm_BALL_isOpen[] = "isOpen";
char sipNm_BALL_renameTo[] = "renameTo";
char sipNm_BALL_copyTo[] = "copyTo";
char sipNm_BALL_getOpenMode[] = "getOpenMode";
char sipNm_BALL_reopen[] = "reopen";
char sipNm_BALL_MODE_TRUNC[] = "MODE_TRUNC";
char sipNm_BALL_MODE_ATE[] = "MODE_ATE";
char sipNm_BALL_MODE_BINARY[] = "MODE_BINARY";
char sipNm_BALL_MODE_APP[] = "MODE_APP";
char sipNm_BALL_MODE_OUT[] = "MODE_OUT";
char sipNm_BALL_MODE_IN[] = "MODE_IN";
char sipNm_BALL_std__openmode[] = "std__openmode";
char sipNm_BALL_getDensity[] = "getDensity";
char sipNm_BALL_setDensity[] = "setDensity";
char sipNm_BALL_getProbeRadius[] = "getProbeRadius";
char sipNm_BALL_setProbeRadius[] = "setProbeRadius";
char sipNm_BALL_SOLVENT_ACCESSIBLE_SURFACE[] = "SOLVENT_ACCESSIBLE_SURFACE";
char sipNm_BALL_SOLVENT_EXCLUDED_SURFACE[] = "SOLVENT_EXCLUDED_SURFACE";
char sipNm_BALL_SurfaceProcessor[] = "SurfaceProcessor";
char sipNm_BALL_SecondaryStructureProcessor[] = "SecondaryStructureProcessor";
char sipNm_BALL_construct[] = "construct";
char sipNm_BALL_getProteinName[] = "getProteinName";
char sipNm_BALL_setProteinName[] = "setProteinName";
char sipNm_BALL_getChainName[] = "getChainName";
char sipNm_BALL_setChainName[] = "setChainName";
char sipNm_BALL_addAminoAcid[] = "addAminoAcid";
char sipNm_BALL_PeptideBuilder[] = "PeptideBuilder";
char sipNm_BALL_getOmega[] = "getOmega";
char sipNm_BALL_getPsi[] = "getPsi";
char sipNm_BALL_getPhi[] = "getPhi";
char sipNm_BALL_setOmega[] = "setOmega";
char sipNm_BALL_setPsi[] = "setPsi";
char sipNm_BALL_setPhi[] = "setPhi";
char sipNm_BALL_setAminoAcidType[] = "setAminoAcidType";
char sipNm_BALL_AminoAcidDescriptor[] = "AminoAcidDescriptor";
char sipNm_BALL_getStatus[] = "getStatus";
char sipNm_BALL_NUMBER_OF_TESTS[] = "NUMBER_OF_TESTS";
char sipNm_BALL_UNKNOWN_RESIDUES[] = "UNKNOWN_RESIDUES";
char sipNm_BALL_DUPLICATE_ATOM_NAMES[] = "DUPLICATE_ATOM_NAMES";
char sipNm_BALL_OVERLAPPING_ATOMS[] = "OVERLAPPING_ATOMS";
char sipNm_BALL_NAN_POSITIONS[] = "NAN_POSITIONS";
char sipNm_BALL_LARGE_NET_CHARGE[] = "LARGE_NET_CHARGE";
char sipNm_BALL_LARGE_CHARGES[] = "LARGE_CHARGES";
char sipNm_BALL_NON_INTEGRAL_NET_CHARGE[] = "NON_INTEGRAL_NET_CHARGE";
char sipNm_BALL_SUSPECT_BOND_LENGTHS[] = "SUSPECT_BOND_LENGTHS";
char sipNm_BALL_ELEMENTS[] = "ELEMENTS";
char sipNm_BALL_EXTRA_ATOMS[] = "EXTRA_ATOMS";
char sipNm_BALL_MISSING_ATOMS[] = "MISSING_ATOMS";
char sipNm_BALL_ResidueChecker[] = "ResidueChecker";
char sipNm_BALL_calculateSASPoints[] = "calculateSASPoints";
char sipNm_BALL_calculateSASAtomAreas[] = "calculateSASAtomAreas";
char sipNm_BALL_calculateSASVolume[] = "calculateSASVolume";
char sipNm_BALL_calculateSASArea[] = "calculateSASArea";
char sipNm_BALL_getTransformation[] = "getTransformation";
char sipNm_BALL_setTransformation[] = "setTransformation";
char sipNm_BALL_TransformationProcessor[] = "TransformationProcessor";
char sipNm_BALL_getTranslation[] = "getTranslation";
char sipNm_BALL_TranslationProcessor[] = "TranslationProcessor";
char sipNm_BALL_calculateBondAngle[] = "calculateBondAngle";
char sipNm_BALL_calculateTorsionAngle[] = "calculateTorsionAngle";
char sipNm_BALL_setDistance[] = "setDistance";
char sipNm_BALL_getComposite[] = "getComposite";
char sipNm_BALL_setComposite[] = "setComposite";
char sipNm_BALL_getNumberOfFragments[] = "getNumberOfFragments";
char sipNm_BALL_FragmentDistanceCollector[] = "FragmentDistanceCollector";
char sipNm_BALL_getCenter[] = "getCenter";
char sipNm_BALL_GeometricCenterProcessor[] = "GeometricCenterProcessor";
char sipNm_BALL_getUpper[] = "getUpper";
char sipNm_BALL_getLower[] = "getLower";
char sipNm_BALL_BoundingBoxProcessor[] = "BoundingBoxProcessor";
char sipNm_BALL_getFragmentDB[] = "getFragmentDB";
char sipNm_BALL_getNumberOfInsertedAtoms[] = "getNumberOfInsertedAtoms";
char sipNm_BALL_ReconstructFragmentProcessor[] = "ReconstructFragmentProcessor";
char sipNm_BALL_buildInterFragmentBonds[] = "buildInterFragmentBonds";
char sipNm_BALL_buildFragmentBonds[] = "buildFragmentBonds";
char sipNm_BALL_getNumberOfBondsBuilt[] = "getNumberOfBondsBuilt";
char sipNm_BALL_BuildBondsProcessor[] = "BuildBondsProcessor";
char sipNm_BALL_getNamingStandard[] = "getNamingStandard";
char sipNm_BALL_setNamingStandard[] = "setNamingStandard";
char sipNm_BALL_setFragmentDB[] = "setFragmentDB";
char sipNm_BALL_NormalizeNamesProcessor[] = "NormalizeNamesProcessor";
char sipNm_BALL_tree[] = "tree";
char sipNm_BALL_build_bonds[] = "build_bonds";
char sipNm_BALL_add_hydrogens[] = "add_hydrogens";
char sipNm_BALL_normalize_names[] = "normalize_names";
char sipNm_BALL_getDefaultNamingStandard[] = "getDefaultNamingStandard";
char sipNm_BALL_getResidueCopy[] = "getResidueCopy";
char sipNm_BALL_getMoleculeCopy[] = "getMoleculeCopy";
char sipNm_BALL_getFragmentCopy[] = "getFragmentCopy";
char sipNm_BALL_getReferenceFragment[] = "getReferenceFragment";
char sipNm_BALL_getFragmentType[] = "getFragmentType";
char sipNm_BALL_FragmentDB[] = "FragmentDB";
char sipNm_BALL_getTotalCharge[] = "getTotalCharge";
char sipNm_BALL_AssignChargeProcessor[] = "AssignChargeProcessor";
char sipNm_BALL_getNumberOfErrors[] = "getNumberOfErrors";
char sipNm_BALL_getNumberOfAssignments[] = "getNumberOfAssignments";
char sipNm_BALL_AssignRadiusProcessor[] = "AssignRadiusProcessor";
char sipNm_BALL_ClearRadiusProcessor[] = "ClearRadiusProcessor";
char sipNm_BALL_ClearChargeProcessor[] = "ClearChargeProcessor";
char sipNm_BALL_phi_grid[] = "phi_grid";
char sipNm_BALL_q_grid[] = "q_grid";
char sipNm_BALL_kappa_grid[] = "kappa_grid";
char sipNm_BALL_results[] = "results";
char sipNm_BALL_getErrorMessage[] = "getErrorMessage";
char sipNm_BALL_getErrorCode[] = "getErrorCode";
char sipNm_BALL_calculateReactionFieldEnergy[] = "calculateReactionFieldEnergy";
char sipNm_BALL_getReactionFieldEnergy[] = "getReactionFieldEnergy";
char sipNm_BALL_solve[] = "solve";
char sipNm_BALL_setupBoundary[] = "setupBoundary";
char sipNm_BALL_setupPhiGrid[] = "setupPhiGrid";
char sipNm_BALL_setupQGrid[] = "setupQGrid";
char sipNm_BALL_setupKappaGrid[] = "setupKappaGrid";
char sipNm_BALL_setupAtomArray[] = "setupAtomArray";
char sipNm_BALL_setupSASGrid[] = "setupSASGrid";
char sipNm_BALL_setupEpsGrid[] = "setupEpsGrid";
char sipNm_BALL_destroyGrids[] = "destroyGrids";
char sipNm_BALL_index[] = "index";
char sipNm_BALL_r[] = "r";
char sipNm_BALL_q[] = "q";
char sipNm_BALL_FastAtomStruct[] = "FastAtomStruct";
char sipNm_BALL_HARMONIC[] = "HARMONIC";
char sipNm_BALL_NONE[] = "NONE";
char sipNm_BALL_DielectricSmoothing[] = "DielectricSmoothing";
char sipNm_BALL_UNIFORM[] = "UNIFORM";
char sipNm_BALL_TRILINEAR[] = "TRILINEAR";
char sipNm_BALL_ChargeDistribution[] = "ChargeDistribution";
char sipNm_BALL_FOCUSING[] = "FOCUSING";
char sipNm_BALL_DIPOLE[] = "DIPOLE";
char sipNm_BALL_COULOMB[] = "COULOMB";
char sipNm_BALL_DEBYE[] = "DEBYE";
char sipNm_BALL_Boundary[] = "Boundary";
char sipNm_BALL_BOUNDING_BOX_UPPER[] = "BOUNDING_BOX_UPPER";
char sipNm_BALL_BOUNDING_BOX_LOWER[] = "BOUNDING_BOX_LOWER";
char sipNm_BALL_UPPER[] = "UPPER";
char sipNm_BALL_LOWER[] = "LOWER";
char sipNm_BALL_MAX_ITERATIONS[] = "MAX_ITERATIONS";
char sipNm_BALL_CHECK_AFTER_ITERATIONS[] = "CHECK_AFTER_ITERATIONS";
char sipNm_BALL_MAX_CRITERION[] = "MAX_CRITERION";
char sipNm_BALL_RMS_CRITERION[] = "RMS_CRITERION";
char sipNm_BALL_OFFSET[] = "OFFSET";
char sipNm_BALL_DIELECTRIC_SMOOTHING[] = "DIELECTRIC_SMOOTHING";
char sipNm_BALL_CHARGE_DISTRIBUTION[] = "CHARGE_DISTRIBUTION";
char sipNm_BALL_BOUNDARY[] = "BOUNDARY";
char sipNm_BALL_TEMPERATURE[] = "TEMPERATURE";
char sipNm_BALL_ION_RADIUS[] = "ION_RADIUS";
char sipNm_BALL_PROBE_RADIUS[] = "PROBE_RADIUS";
char sipNm_BALL_SOLVENT_DC[] = "SOLVENT_DC";
char sipNm_BALL_SOLUTE_DC[] = "SOLUTE_DC";
char sipNm_BALL_IONIC_STRENGTH[] = "IONIC_STRENGTH";
char sipNm_BALL_BORDER[] = "BORDER";
char sipNm_BALL_SPACING[] = "SPACING";
char sipNm_BALL_PRINT_TIMING[] = "PRINT_TIMING";
char sipNm_BALL_VERBOSITY[] = "VERBOSITY";
char sipNm_BALL_NUMBER_OF_ERRORS[] = "NUMBER_OF_ERRORS";
char sipNm_BALL_ERROR__SETUP_REQUIRED[] = "ERROR__SETUP_REQUIRED";
char sipNm_BALL_ERROR__ILLEGAL_VALUE_FOR_LOWER_UPPER[] = "ERROR__ILLEGAL_VALUE_FOR_LOWER_UPPER";
char sipNm_BALL_ERROR__NOT_A_VECTOR_IN_UPPER_LOWER[] = "ERROR__NOT_A_VECTOR_IN_UPPER_LOWER";
char sipNm_BALL_ERROR__UNKNOWN_BOUNDARY_CONDITION_TYPE[] = "ERROR__UNKNOWN_BOUNDARY_CONDITION_TYPE";
char sipNm_BALL_ERROR__UNKNOWN_CHARGE_DISTRIBUTION_METHOD[] = "ERROR__UNKNOWN_CHARGE_DISTRIBUTION_METHOD";
char sipNm_BALL_ERROR__UNKNOWN_DIELECTRIC_SMOOTHING_METHOD[] = "ERROR__UNKNOWN_DIELECTRIC_SMOOTHING_METHOD";
char sipNm_BALL_ERROR__OUT_OF_MEMORY[] = "ERROR__OUT_OF_MEMORY";
char sipNm_BALL_ERROR__PHI_GRID_REQUIRED[] = "ERROR__PHI_GRID_REQUIRED";
char sipNm_BALL_ERROR__ATOM_ARRAY_REQUIRED[] = "ERROR__ATOM_ARRAY_REQUIRED";
char sipNm_BALL_ERROR__EPSILON_GRID_REQUIRED[] = "ERROR__EPSILON_GRID_REQUIRED";
char sipNm_BALL_ERROR__SAS_GRID_REQUIRED[] = "ERROR__SAS_GRID_REQUIRED";
char sipNm_BALL_ERROR__CANNOT_CREATE_PHI_GRID[] = "ERROR__CANNOT_CREATE_PHI_GRID";
char sipNm_BALL_ERROR__CANNOT_CREATE_CHARGE_GRID[] = "ERROR__CANNOT_CREATE_CHARGE_GRID";
char sipNm_BALL_ERROR__CANNOT_CREATE_KAPPA_GRID[] = "ERROR__CANNOT_CREATE_KAPPA_GRID";
char sipNm_BALL_ERROR__CANNOT_CREATE_EPSILON_GRID[] = "ERROR__CANNOT_CREATE_EPSILON_GRID";
char sipNm_BALL_ERROR__CANNOT_CREATE_SAS_GRID[] = "ERROR__CANNOT_CREATE_SAS_GRID";
char sipNm_BALL_ERROR__CANNOT_CREATE_ATOM_ARRAY[] = "ERROR__CANNOT_CREATE_ATOM_ARRAY";
char sipNm_BALL_ERROR__NOT_IMPLEMENTED[] = "ERROR__NOT_IMPLEMENTED";
char sipNm_BALL_ERROR__UNKNOWN[] = "ERROR__UNKNOWN";
char sipNm_BALL_ERROR__NONE[] = "ERROR__NONE";
char sipNm_BALL_FDPB[] = "FDPB";
char sipNm_BALL_RegularData3DList[] = "RegularData3DList";
char sipNm_BALL_RepresentationList[] = "RepresentationList";
char sipNm_BALL_GeometricObjectList[] = "GeometricObjectList";
char sipNm_BALL_NucleicAcidList[] = "NucleicAcidList";
char sipNm_BALL_NucleotideList[] = "NucleotideList";
char sipNm_BALL_ProteinList[] = "ProteinList";
char sipNm_BALL_ChainList[] = "ChainList";
char sipNm_BALL_SecondaryStructureList[] = "SecondaryStructureList";
char sipNm_BALL_ResidueList[] = "ResidueList";
char sipNm_BALL_MoleculeList[] = "MoleculeList";
char sipNm_BALL_FragmentList[] = "FragmentList";
char sipNm_BALL_AtomContainerList[] = "AtomContainerList";
char sipNm_BALL_BondList[] = "BondList";
char sipNm_BALL_PDBAtomList[] = "PDBAtomList";
char sipNm_BALL_AtomList[] = "AtomList";
char sipNm_BALL_PyDatasetVector[] = "PyDatasetVector";
char sipNm_BALL_ResidueProcessor[] = "ResidueProcessor";
char sipNm_BALL_FragmentProcessor[] = "FragmentProcessor";
char sipNm_BALL_BondProcessor[] = "BondProcessor";
char sipNm_BALL_PyCompositeList[] = "PyCompositeList";
char sipNm_BALL_PyAtomDict[] = "PyAtomDict";
char sipNm_BALL_PyIndexList[] = "PyIndexList";
char sipNm_BALL_nucleicAcids[] = "nucleicAcids";
char sipNm_BALL_nucleotides[] = "nucleotides";
char sipNm_BALL_proteins[] = "proteins";
char sipNm_BALL_chains[] = "chains";
char sipNm_BALL_secondaryStructures[] = "secondaryStructures";
char sipNm_BALL_residues[] = "residues";
char sipNm_BALL_molecules[] = "molecules";
char sipNm_BALL_fragments[] = "fragments";
char sipNm_BALL_atomContainers[] = "atomContainers";
char sipNm_BALL_bonds[] = "bonds";
char sipNm_BALL_PDBAtoms[] = "PDBAtoms";
char sipNm_BALL_atoms[] = "atoms";
char sipNm_BALL_getMaxNumOfColumns[] = "getMaxNumOfColumns";
char sipNm_BALL_setMaxNumOfColumns[] = "setMaxNumOfColumns";
char sipNm_BALL_getCorrectionParameter[] = "getCorrectionParameter";
char sipNm_BALL_setCorrectionParameter[] = "setCorrectionParameter";
char sipNm_BALL_RATIO_OF_SHIFT_PARAMS[] = "RATIO_OF_SHIFT_PARAMS";
char sipNm_BALL_GEOMETRIC_MEAN[] = "GEOMETRIC_MEAN";
char sipNm_BALL_SQUARE_ROOT[] = "SQUARE_ROOT";
char sipNm_BALL_BALANCING_VALUE[] = "BALANCING_VALUE";
char sipNm_BALL_UNIT_VALUE[] = "UNIT_VALUE";
char sipNm_BALL_RANK_2[] = "RANK_2";
char sipNm_BALL_RANK_1[] = "RANK_1";
char sipNm_BALL_ShiftedLVMMMinimizer[] = "ShiftedLVMMMinimizer";
char sipNm_BALL_getImprovedFlag[] = "getImprovedFlag";
char sipNm_BALL_setImprovedFlag[] = "setImprovedFlag";
char sipNm_BALL_getMaxNumOfStoredVectPairs[] = "getMaxNumOfStoredVectPairs";
char sipNm_BALL_setMaxNumOfStoredVectPairs[] = "setMaxNumOfStoredVectPairs";
char sipNm_BALL_StrangLBFGSMinimizer[] = "StrangLBFGSMinimizer";
char sipNm_BALL_SteepestDescentMinimizer[] = "SteepestDescentMinimizer";
char sipNm_BALL_takeStep[] = "takeStep";
char sipNm_BALL_setMinimizer[] = "setMinimizer";
char sipNm_BALL_isBracketed[] = "isBracketed";
char sipNm_BALL_setBracketedFlag[] = "setBracketedFlag";
char sipNm_BALL_getXTol[] = "getXTol";
char sipNm_BALL_setXTol[] = "setXTol";
char sipNm_BALL_getLowerBound[] = "getLowerBound";
char sipNm_BALL_setLowerBound[] = "setLowerBound";
char sipNm_BALL_setMaxSteps[] = "setMaxSteps";
char sipNm_BALL_getMaxSteps[] = "getMaxSteps";
char sipNm_BALL_getBeta[] = "getBeta";
char sipNm_BALL_getAlpha[] = "getAlpha";
char sipNm_BALL_setBeta[] = "setBeta";
char sipNm_BALL_setAlpha[] = "setAlpha";
char sipNm_BALL_LineSearch[] = "LineSearch";
char sipNm_BALL_getMaximumDisplacement[] = "getMaximumDisplacement";
char sipNm_BALL_setMaximumDisplacement[] = "setMaximumDisplacement";
char sipNm_BALL_getMaxGradient[] = "getMaxGradient";
char sipNm_BALL_setMaxGradient[] = "setMaxGradient";
char sipNm_BALL_getEnergyDifferenceBound[] = "getEnergyDifferenceBound";
char sipNm_BALL_setEnergyDifferenceBound[] = "setEnergyDifferenceBound";
char sipNm_BALL_getMaxSameEnergy[] = "getMaxSameEnergy";
char sipNm_BALL_setMaxSameEnergy[] = "setMaxSameEnergy";
char sipNm_BALL_setMaxNumberOfIterations[] = "setMaxNumberOfIterations";
char sipNm_BALL_getMaxNumberOfIterations[] = "getMaxNumberOfIterations";
char sipNm_BALL_setNumberOfIterations[] = "setNumberOfIterations";
char sipNm_BALL_getInitialEnergy[] = "getInitialEnergy";
char sipNm_BALL_getInitialGradient[] = "getInitialGradient";
char sipNm_BALL_getGradient[] = "getGradient";
char sipNm_BALL_getDirection[] = "getDirection";
char sipNm_BALL_finishIteration[] = "finishIteration";
char sipNm_BALL_printEnergy[] = "printEnergy";
char sipNm_BALL_isConverged[] = "isConverged";
char sipNm_BALL_minimize[] = "minimize";
char sipNm_BALL_updateDirection[] = "updateDirection";
char sipNm_BALL_findStep[] = "findStep";
char sipNm_BALL_getUpdateMethod[] = "getUpdateMethod";
char sipNm_BALL_setUpdateMethod[] = "setUpdateMethod";
char sipNm_BALL_SHANNO[] = "SHANNO";
char sipNm_BALL_FLETCHER_REEVES[] = "FLETCHER_REEVES";
char sipNm_BALL_POLAK_RIBIERE[] = "POLAK_RIBIERE";
char sipNm_BALL_EnergyMinimizer[] = "EnergyMinimizer";
char sipNm_BALL_ConjugateGradientMinimizer[] = "ConjugateGradientMinimizer";
char sipNm_BALL_getTotalEnergy[] = "getTotalEnergy";
char sipNm_BALL_getSnapShotFrequency[] = "getSnapShotFrequency";
char sipNm_BALL_getTimeStep[] = "getTimeStep";
char sipNm_BALL_getMaximalSimulationTime[] = "getMaximalSimulationTime";
char sipNm_BALL_getMaximalNumberOfIterations[] = "getMaximalNumberOfIterations";
char sipNm_BALL_getNumberOfIterations[] = "getNumberOfIterations";
char sipNm_BALL_getEnergyOutputFrequency[] = "getEnergyOutputFrequency";
char sipNm_BALL_setSnapShotFrequency[] = "setSnapShotFrequency";
char sipNm_BALL_setEnergyOutputFrequency[] = "setEnergyOutputFrequency";
char sipNm_BALL_setCurrentTime[] = "setCurrentTime";
char sipNm_BALL_setReferenceTemperature[] = "setReferenceTemperature";
char sipNm_BALL_setMaximalSimulationTime[] = "setMaximalSimulationTime";
char sipNm_BALL_setMaximalNumberOfIterations[] = "setMaximalNumberOfIterations";
char sipNm_BALL_setNumberOfIteration[] = "setNumberOfIteration";
char sipNm_BALL_MicroCanonicalMD[] = "MicroCanonicalMD";
char sipNm_BALL_simulateTime[] = "simulateTime";
char sipNm_BALL_simulateIterations[] = "simulateIterations";
char sipNm_BALL_simulate[] = "simulate";
char sipNm_BALL_setTimeStep[] = "setTimeStep";
char sipNm_BALL_getBathRelaxationTime[] = "getBathRelaxationTime";
char sipNm_BALL_setBathRelaxationTime[] = "setBathRelaxationTime";
char sipNm_BALL_MolecularDynamics[] = "MolecularDynamics";
char sipNm_BALL_CanonicalMD[] = "CanonicalMD";
char sipNm_BALL_TypeRuleProcessor[] = "TypeRuleProcessor";
char sipNm_BALL_clearBuffer[] = "clearBuffer";
char sipNm_BALL_readFromFile[] = "readFromFile";
char sipNm_BALL_getNumberOfSnapShotsInBuffer[] = "getNumberOfSnapShotsInBuffer";
char sipNm_BALL_flushToDisk[] = "flushToDisk";
char sipNm_BALL_applyLastSnapShot[] = "applyLastSnapShot";
char sipNm_BALL_applyNextSnapShot[] = "applyNextSnapShot";
char sipNm_BALL_applyFirstSnapShot[] = "applyFirstSnapShot";
char sipNm_BALL_getFlushToDiskFrequency[] = "getFlushToDiskFrequency";
char sipNm_BALL_setFlushToDiskFrequency[] = "setFlushToDiskFrequency";
char sipNm_BALL_getTrajectoryFile[] = "getTrajectoryFile";
char sipNm_BALL_setTrajectoryFile[] = "setTrajectoryFile";
char sipNm_BALL_setSystem[] = "setSystem";
char sipNm_BALL_Default[] = "Default";
char sipNm_BALL_FLUSH_TO_DISK_FREQUENCY[] = "FLUSH_TO_DISK_FREQUENCY";
char sipNm_BALL_Option[] = "Option";
char sipNm_BALL_SnapShotManager[] = "SnapShotManager";
char sipNm_BALL_setAtomForces[] = "setAtomForces";
char sipNm_BALL_getAtomForces[] = "getAtomForces";
char sipNm_BALL_setAtomVelocitites[] = "setAtomVelocitites";
char sipNm_BALL_getAtomVelocities[] = "getAtomVelocities";
char sipNm_BALL_setAtomPositions[] = "setAtomPositions";
char sipNm_BALL_getAtomPositions[] = "getAtomPositions";
char sipNm_BALL_applySnapShot[] = "applySnapShot";
char sipNm_BALL_takeSnapShot[] = "takeSnapShot";
char sipNm_BALL_getKineticEnergy[] = "getKineticEnergy";
char sipNm_BALL_setKineticEnergy[] = "setKineticEnergy";
char sipNm_BALL_getPotentialEnergy[] = "getPotentialEnergy";
char sipNm_BALL_setPotentialEnergy[] = "setPotentialEnergy";
char sipNm_BALL_setNumberOfAtoms[] = "setNumberOfAtoms";
char sipNm_BALL_getIndex[] = "getIndex";
char sipNm_BALL_setIndex[] = "setIndex";
char sipNm_BALL_SnapShot[] = "SnapShot";
char sipNm_BALL_evaluate[] = "evaluate";
char sipNm_BALL_finish[] = "finish";
char sipNm_BALL_AtomProcessor[] = "AtomProcessor";
char sipNm_BALL_setPrefix[] = "setPrefix";
char sipNm_BALL_getPrefix[] = "getPrefix";
char sipNm_BALL_initialize[] = "initialize";
char sipNm_BALL_RuleEvaluator[] = "RuleEvaluator";
char sipNm_BALL_RadiusRuleProcessor[] = "RadiusRuleProcessor";
char sipNm_BALL_updateMolecules[] = "updateMolecules";
char sipNm_BALL_isEnabled[] = "isEnabled";
char sipNm_BALL_removeSolvent[] = "removeSolvent";
char sipNm_BALL_addSolvent[] = "addSolvent";
char sipNm_BALL_setBox[] = "setBox";
char sipNm_BALL_getBox[] = "getBox";
char sipNm_BALL_disable[] = "disable";
char sipNm_BALL_enable[] = "enable";
char sipNm_BALL_generateMoleculesVector[] = "generateMoleculesVector";
char sipNm_BALL_PeriodicBoundary[] = "PeriodicBoundary";
char sipNm_BALL_rms[] = "rms";
char sipNm_BALL_inv_norm[] = "inv_norm";
char sipNm_BALL_norm[] = "norm";
char sipNm_BALL_invalidate[] = "invalidate";
char sipNm_BALL_Gradient[] = "Gradient";
char sipNm_BALL_setForceField[] = "setForceField";
char sipNm_BALL_getForceField[] = "getForceField";
char sipNm_BALL_periodic_boundary[] = "periodic_boundary";
char sipNm_BALL_update[] = "update";
char sipNm_BALL_getRMSGradient[] = "getRMSGradient";
char sipNm_BALL_getEnergy[] = "getEnergy";
char sipNm_BALL_getComponent[] = "getComponent";
char sipNm_BALL_removeComponent[] = "removeComponent";
char sipNm_BALL_insertComponent[] = "insertComponent";
char sipNm_BALL_countComponents[] = "countComponents";
char sipNm_BALL_enableSelection[] = "enableSelection";
char sipNm_BALL_disableSelection[] = "disableSelection";
char sipNm_BALL_getUseSelection[] = "getUseSelection";
char sipNm_BALL_getAtoms[] = "getAtoms";
char sipNm_BALL_getNumberOfMovableAtoms[] = "getNumberOfMovableAtoms";
char sipNm_BALL_RuleProcessor[] = "RuleProcessor";
char sipNm_BALL_ChargeRuleProcessor[] = "ChargeRuleProcessor";
char sipNm_BALL_moveTo[] = "moveTo";
char sipNm_BALL_resetPositions[] = "resetPositions";
char sipNm_BALL_savePositions[] = "savePositions";
char sipNm_BALL_AtomVector[] = "AtomVector";
char sipNm_BALL_CharmmTorsion[] = "CharmmTorsion";
char sipNm_BALL_CharmmStretch[] = "CharmmStretch";
char sipNm_BALL_CharmmNonBonded[] = "CharmmNonBonded";
char sipNm_BALL_CharmmImproperTorsion[] = "CharmmImproperTorsion";
char sipNm_BALL_CharmmBend[] = "CharmmBend";
char sipNm_BALL_getSolvationEnergy[] = "getSolvationEnergy";
char sipNm_BALL_getProperTorsionEnergy[] = "getProperTorsionEnergy";
char sipNm_BALL_getImproperTorsionEnergy[] = "getImproperTorsionEnergy";
char sipNm_BALL_CharmmFF[] = "CharmmFF";
char sipNm_BALL_AmberTorsion[] = "AmberTorsion";
char sipNm_BALL_AmberStretch[] = "AmberStretch";
char sipNm_BALL_getVdwEnergy[] = "getVdwEnergy";
char sipNm_BALL_getElectrostaticEnergy[] = "getElectrostaticEnergy";
char sipNm_BALL_AmberNonBonded[] = "AmberNonBonded";
char sipNm_BALL_updateForces[] = "updateForces";
char sipNm_BALL_updateEnergy[] = "updateEnergy";
char sipNm_BALL_setup[] = "setup";
char sipNm_BALL_ForceFieldComponent[] = "ForceFieldComponent";
char sipNm_BALL_AmberBend[] = "AmberBend";
char sipNm_BALL_AmberFF[] = "AmberFF";
char sipNm_BALL_checkAtomType[] = "checkAtomType";
char sipNm_BALL_isInOneAromaticRing[] = "isInOneAromaticRing";
char sipNm_BALL_getResults[] = "getResults";
char sipNm_BALL_getUpdateFrequency[] = "getUpdateFrequency";
char sipNm_BALL_hasInitializedParameters[] = "hasInitializedParameters";
char sipNm_BALL_getPlaneEnergy[] = "getPlaneEnergy";
char sipNm_BALL_getVdWEnergy[] = "getVdWEnergy";
char sipNm_BALL_getESEnergy[] = "getESEnergy";
char sipNm_BALL_getNonbondedEnergy[] = "getNonbondedEnergy";
char sipNm_BALL_getTorsionEnergy[] = "getTorsionEnergy";
char sipNm_BALL_getStretchBendEnergy[] = "getStretchBendEnergy";
char sipNm_BALL_getBendEnergy[] = "getBendEnergy";
char sipNm_BALL_getStretchEnergy[] = "getStretchEnergy";
char sipNm_BALL_specificSetup[] = "specificSetup";
char sipNm_BALL_ForceField[] = "ForceField";
char sipNm_BALL_MMFF94[] = "MMFF94";
char sipNm_BALL_Vector4[] = "Vector4";
char sipNm_BALL_getTripleProduct[] = "getTripleProduct";
char sipNm_BALL_getPerpendicularNormalization[] = "getPerpendicularNormalization";
char sipNm_BALL_getOrthogonalProjection[] = "getOrthogonalProjection";
char sipNm_BALL___mod__[] = "__mod__";
char sipNm_BALL_Vector3[] = "Vector3";
char sipNm_BALL_isOrthogonalTo[] = "isOrthogonalTo";
char sipNm_BALL_isZero[] = "isZero";
char sipNm_BALL_getSquareDistance[] = "getSquareDistance";
char sipNm_BALL_getDistance[] = "getDistance";
char sipNm_BALL_getUnit[] = "getUnit";
char sipNm_BALL_getSquareLength[] = "getSquareLength";
char sipNm_BALL_Vector2[] = "Vector2";
char sipNm_BALL_resizeVertices[] = "resizeVertices";
char sipNm_BALL_resizeNormals[] = "resizeNormals";
char sipNm_BALL_resizeTriangles[] = "resizeTriangles";
char sipNm_BALL_pushBackNormal[] = "pushBackNormal";
char sipNm_BALL_pushBackVertex[] = "pushBackVertex";
char sipNm_BALL_pushBackTriangle[] = "pushBackTriangle";
char sipNm_BALL_clearNormals[] = "clearNormals";
char sipNm_BALL_clearTriangles[] = "clearTriangles";
char sipNm_BALL_clearVertices[] = "clearVertices";
char sipNm_BALL_getNormal[] = "getNormal";
char sipNm_BALL_getVertex[] = "getVertex";
char sipNm_BALL_getTriangle[] = "getTriangle";
char sipNm_BALL_getNumberOfNormals[] = "getNumberOfNormals";
char sipNm_BALL_getNumberOfVertices[] = "getNumberOfVertices";
char sipNm_BALL_getNumberOfTriangles[] = "getNumberOfTriangles";
char sipNm_BALL_getArea[] = "getArea";
char sipNm_BALL_readMSMSFile[] = "readMSMSFile";
char sipNm_BALL_v3[] = "v3";
char sipNm_BALL_v2[] = "v2";
char sipNm_BALL_v1[] = "v1";
char sipNm_BALL_Triangle[] = "Triangle";
char sipNm_BALL_Surface[] = "Surface";
char sipNm_BALL_radius[] = "radius";
char sipNm_BALL_Sphere3[] = "Sphere3";
char sipNm_BALL_angle[] = "angle";
char sipNm_BALL_j[] = "j";
char sipNm_BALL_i[] = "i";
char sipNm_BALL_getConjugate[] = "getConjugate";
char sipNm_BALL_getInverse[] = "getInverse";
char sipNm_BALL_getRotationMatrix[] = "getRotationMatrix";
char sipNm_BALL_getAxis[] = "getAxis";
char sipNm_BALL_getAngle[] = "getAngle";
char sipNm_BALL_Quaternion[] = "Quaternion";
char sipNm_BALL_hessify[] = "hessify";
char sipNm_BALL_Plane3[] = "Plane3";
char sipNm_BALL_m44[] = "m44";
char sipNm_BALL_m43[] = "m43";
char sipNm_BALL_m42[] = "m42";
char sipNm_BALL_m41[] = "m41";
char sipNm_BALL_m34[] = "m34";
char sipNm_BALL_m33[] = "m33";
char sipNm_BALL_m32[] = "m32";
char sipNm_BALL_m31[] = "m31";
char sipNm_BALL_m24[] = "m24";
char sipNm_BALL_m23[] = "m23";
char sipNm_BALL_m22[] = "m22";
char sipNm_BALL_m21[] = "m21";
char sipNm_BALL_m14[] = "m14";
char sipNm_BALL_m13[] = "m13";
char sipNm_BALL_m12[] = "m12";
char sipNm_BALL_m11[] = "m11";
char sipNm_BALL_isDiagonal[] = "isDiagonal";
char sipNm_BALL_isUpperTriangular[] = "isUpperTriangular";
char sipNm_BALL_isLowerTriangular[] = "isLowerTriangular";
char sipNm_BALL_isSymmetric[] = "isSymmetric";
char sipNm_BALL_isSingular[] = "isSingular";
char sipNm_BALL_isRegular[] = "isRegular";
char sipNm_BALL_isIdentity[] = "isIdentity";
char sipNm_BALL_setRotation[] = "setRotation";
char sipNm_BALL_rotate[] = "rotate";
char sipNm_BALL_setRotationZ[] = "setRotationZ";
char sipNm_BALL_rotateZ[] = "rotateZ";
char sipNm_BALL_setRotationY[] = "setRotationY";
char sipNm_BALL_rotateY[] = "rotateY";
char sipNm_BALL_setRotationX[] = "setRotationX";
char sipNm_BALL_rotateX[] = "rotateX";
char sipNm_BALL_setScale[] = "setScale";
char sipNm_BALL_scale[] = "scale";
char sipNm_BALL_setTranslation[] = "setTranslation";
char sipNm_BALL_translate[] = "translate";
char sipNm_BALL_getDeterminant[] = "getDeterminant";
char sipNm_BALL_invert[] = "invert";
char sipNm_BALL___mul__[] = "__mul__";
char sipNm_BALL___len__[] = "__len__";
char sipNm_BALL_getDiagonal[] = "getDiagonal";
char sipNm_BALL_isEqual[] = "isEqual";
char sipNm_BALL_setColumn[] = "setColumn";
char sipNm_BALL_setRow[] = "setRow";
char sipNm_BALL_getColumn[] = "getColumn";
char sipNm_BALL_getRow[] = "getRow";
char sipNm_BALL_transpose[] = "transpose";
char sipNm_BALL_setIdentity[] = "setIdentity";
char sipNm_BALL_getIdentity[] = "getIdentity";
char sipNm_BALL_getZero[] = "getZero";
char sipNm_BALL_getTrace[] = "getTrace";
char sipNm_BALL_Matrix4x4[] = "Matrix4x4";
char sipNm_BALL_d[] = "d";
char sipNm_BALL_p[] = "p";
char sipNm_BALL_FORM__TWO_POINTS[] = "FORM__TWO_POINTS";
char sipNm_BALL_FORM__PARAMETER[] = "FORM__PARAMETER";
char sipNm_BALL_Line3[] = "Line3";
char sipNm_BALL_Circle3[] = "Circle3";
char sipNm_BALL_b[] = "b";
char sipNm_BALL_a[] = "a";
char sipNm_BALL_join[] = "join";
char sipNm_BALL_SimpleBox3[] = "SimpleBox3";
char sipNm_BALL_getWidth[] = "getWidth";
char sipNm_BALL_getVolume[] = "getVolume";
char sipNm_BALL_getSurface[] = "getSurface";
char sipNm_BALL_Box3[] = "Box3";
char sipNm_BALL_isEquivalent[] = "isEquivalent";
char sipNm_BALL___div__[] = "__div__";
char sipNm_BALL___idiv__[] = "__idiv__";
char sipNm_BALL___imul__[] = "__imul__";
char sipNm_BALL___sub__[] = "__sub__";
char sipNm_BALL___isub__[] = "__isub__";
char sipNm_BALL___iadd__[] = "__iadd__";
char sipNm_BALL_negate[] = "negate";
char sipNm_BALL_normalize[] = "normalize";
char sipNm_BALL_toDegree[] = "toDegree";
char sipNm_BALL_toRadian[] = "toRadian";
char sipNm_BALL_RANGE__SIGNED[] = "RANGE__SIGNED";
char sipNm_BALL_RANGE__UNSIGNED[] = "RANGE__UNSIGNED";
char sipNm_BALL_RANGE__UNLIMITED[] = "RANGE__UNLIMITED";
char sipNm_BALL_Angle[] = "Angle";
char sipNm_BALL_getTorsionAngle[] = "getTorsionAngle";
char sipNm_BALL_isParallel[] = "isParallel";
char sipNm_BALL_isIntersecting[] = "isIntersecting";
char sipNm_BALL_isOrthogonal[] = "isOrthogonal";
char sipNm_BALL_isComplanar[] = "isComplanar";
char sipNm_BALL_isCollinear[] = "isCollinear";
char sipNm_BALL_GetIntersection[] = "GetIntersection";
char sipNm_BALL_GetAngle[] = "GetAngle";
char sipNm_BALL_GetDistance[] = "GetDistance";
char sipNm_BALL_countFragments[] = "countFragments";
char sipNm_BALL_countMolecules[] = "countMolecules";
char sipNm_BALL_System[] = "System";
char sipNm_BALL_getNumberOfSelectedAtoms[] = "getNumberOfSelectedAtoms";
char sipNm_BALL_start[] = "start";
char sipNm_BALL_CompositeProcessor[] = "CompositeProcessor";
char sipNm_BALL_Selector[] = "Selector";
char sipNm_BALL_NUMBER_OF_TYPES[] = "NUMBER_OF_TYPES";
char sipNm_BALL_TURN[] = "TURN";
char sipNm_BALL_STRAND[] = "STRAND";
char sipNm_BALL_COIL[] = "COIL";
char sipNm_BALL_HELIX[] = "HELIX";
char sipNm_BALL_SecondaryStructure[] = "SecondaryStructure";
char sipNm_BALL_isCTerminal[] = "isCTerminal";
char sipNm_BALL_isNTerminal[] = "isNTerminal";
char sipNm_BALL_isAminoAcid[] = "isAminoAcid";
char sipNm_BALL_getTorsionPsi[] = "getTorsionPsi";
char sipNm_BALL_hasTorsionPsi[] = "hasTorsionPsi";
char sipNm_BALL_getTorsionPhi[] = "getTorsionPhi";
char sipNm_BALL_hasTorsionPhi[] = "hasTorsionPhi";
char sipNm_BALL_PROPERTY__CYCLIC[] = "PROPERTY__CYCLIC";
char sipNm_BALL_PROPERTY__N_TERMINAL[] = "PROPERTY__N_TERMINAL";
char sipNm_BALL_PROPERTY__C_TERMINAL[] = "PROPERTY__C_TERMINAL";
char sipNm_BALL_PROPERTY__HAS_SSBOND[] = "PROPERTY__HAS_SSBOND";
char sipNm_BALL_PROPERTY__WATER[] = "PROPERTY__WATER";
char sipNm_BALL_PROPERTY__AMINO_ACID[] = "PROPERTY__AMINO_ACID";
char sipNm_BALL_PROPERTY__NON_STANDARD[] = "PROPERTY__NON_STANDARD";
char sipNm_BALL_Residue[] = "Residue";
char sipNm_BALL_countChains[] = "countChains";
char sipNm_BALL_Protein[] = "Protein";
char sipNm_BALL_is5Prime[] = "is5Prime";
char sipNm_BALL_is3Prime[] = "is3Prime";
char sipNm_BALL_isTerminal[] = "isTerminal";
char sipNm_BALL_getInsertionCode[] = "getInsertionCode";
char sipNm_BALL_setInsertionCode[] = "setInsertionCode";
char sipNm_BALL_getNucleicAcid[] = "getNucleicAcid";
char sipNm_BALL_Nucleotide[] = "Nucleotide";
char sipNm_BALL_countNucleotides[] = "countNucleotides";
char sipNm_BALL_get5Prime[] = "get5Prime";
char sipNm_BALL_get3Prime[] = "get3Prime";
char sipNm_BALL_getNucleotide[] = "getNucleotide";
char sipNm_BALL_NucleicAcid[] = "NucleicAcid";
char sipNm_BALL_getSystem[] = "getSystem";
char sipNm_BALL_Molecule[] = "Molecule";
char sipNm_BALL_Fragment[] = "Fragment";
char sipNm_BALL_getExpressionString[] = "getExpressionString";
char sipNm_BALL_setExpression[] = "setExpression";
char sipNm_BALL_getPredicate[] = "getPredicate";
char sipNm_BALL_hasPredicate[] = "hasPredicate";
char sipNm_BALL_Expression[] = "Expression";
char sipNm_BALL_setArgument[] = "setArgument";
char sipNm_BALL_ExpressionPredicate[] = "ExpressionPredicate";
char sipNm_BALL_countPDBAtoms[] = "countPDBAtoms";
char sipNm_BALL_countResidues[] = "countResidues";
char sipNm_BALL_countSecondaryStructures[] = "countSecondaryStructures";
char sipNm_BALL_getPDBAtom[] = "getPDBAtom";
char sipNm_BALL_getCTerminal[] = "getCTerminal";
char sipNm_BALL_getNTerminal[] = "getNTerminal";
char sipNm_BALL_Chain[] = "Chain";
char sipNm_BALL_isIntraBondOf[] = "isIntraBondOf";
char sipNm_BALL_isIntraBond[] = "isIntraBond";
char sipNm_BALL_isInterBondOf[] = "isInterBondOf";
char sipNm_BALL_isInterBond[] = "isInterBond";
char sipNm_BALL_isBondOf[] = "isBondOf";
char sipNm_BALL_getBoundAtom[] = "getBoundAtom";
char sipNm_BALL_getLength[] = "getLength";
char sipNm_BALL_getOrder[] = "getOrder";
char sipNm_BALL_setOrder[] = "setOrder";
char sipNm_BALL_getSecondAtom[] = "getSecondAtom";
char sipNm_BALL_setSecondAtom[] = "setSecondAtom";
char sipNm_BALL_getPartner[] = "getPartner";
char sipNm_BALL_getFirstAtom[] = "getFirstAtom";
char sipNm_BALL_setFirstAtom[] = "setFirstAtom";
char sipNm_BALL_finalize[] = "finalize";
char sipNm_BALL_NUMBER_OF_BOND_TYPES[] = "NUMBER_OF_BOND_TYPES";
char sipNm_BALL_TYPE__PEPTIDE[] = "TYPE__PEPTIDE";
char sipNm_BALL_TYPE__SALT_BRIDGE[] = "TYPE__SALT_BRIDGE";
char sipNm_BALL_TYPE__DISULPHIDE_BRIDGE[] = "TYPE__DISULPHIDE_BRIDGE";
char sipNm_BALL_TYPE__HYDROGEN[] = "TYPE__HYDROGEN";
char sipNm_BALL_TYPE__COVALENT[] = "TYPE__COVALENT";
char sipNm_BALL_NUMBER_OF_BOND_ORDERS[] = "NUMBER_OF_BOND_ORDERS";
char sipNm_BALL_ORDER__AROMATIC[] = "ORDER__AROMATIC";
char sipNm_BALL_ORDER__QUADRUPLE[] = "ORDER__QUADRUPLE";
char sipNm_BALL_ORDER__TRIPLE[] = "ORDER__TRIPLE";
char sipNm_BALL_ORDER__DOUBLE[] = "ORDER__DOUBLE";
char sipNm_BALL_ORDER__SINGLE[] = "ORDER__SINGLE";
char sipNm_BALL_ORDER__UNKNOWN[] = "ORDER__UNKNOWN";
char sipNm_BALL_Bond[] = "Bond";
char sipNm_BALL_PTE[] = "PTE";
char sipNm_BALL_PTE_[] = "PTE_";
char sipNm_BALL_isUnknown[] = "isUnknown";
char sipNm_BALL_getElectronegativity[] = "getElectronegativity";
char sipNm_BALL_setElectronegativity[] = "setElectronegativity";
char sipNm_BALL_getVanDerWaalsRadius[] = "getVanDerWaalsRadius";
char sipNm_BALL_setVanDerWaalsRadius[] = "setVanDerWaalsRadius";
char sipNm_BALL_getCovalentRadius[] = "getCovalentRadius";
char sipNm_BALL_setCovalentRadius[] = "setCovalentRadius";
char sipNm_BALL_getAtomicRadius[] = "getAtomicRadius";
char sipNm_BALL_setAtomicRadius[] = "setAtomicRadius";
char sipNm_BALL_getAtomicWeight[] = "getAtomicWeight";
char sipNm_BALL_setAtomicWeight[] = "setAtomicWeight";
char sipNm_BALL_getAtomicNumber[] = "getAtomicNumber";
char sipNm_BALL_setAtomicNumber[] = "setAtomicNumber";
char sipNm_BALL_getPeriod[] = "getPeriod";
char sipNm_BALL_setPeriod[] = "setPeriod";
char sipNm_BALL_getGroup[] = "getGroup";
char sipNm_BALL_setGroup[] = "setGroup";
char sipNm_BALL_getSymbol[] = "getSymbol";
char sipNm_BALL_setSymbol[] = "setSymbol";
char sipNm_BALL_Element[] = "Element";
char sipNm_BALL_getTemperatureFactor[] = "getTemperatureFactor";
char sipNm_BALL_setTemperatureFactor[] = "setTemperatureFactor";
char sipNm_BALL_getOccupancy[] = "getOccupancy";
char sipNm_BALL_setOccupancy[] = "setOccupancy";
char sipNm_BALL_getAlternateLocationIndicator[] = "getAlternateLocationIndicator";
char sipNm_BALL_setAlternateLocationIndicator[] = "setAlternateLocationIndicator";
char sipNm_BALL_getRemotenessIndicator[] = "getRemotenessIndicator";
char sipNm_BALL_setRemotenessIndicator[] = "setRemotenessIndicator";
char sipNm_BALL_getBranchDesignator[] = "getBranchDesignator";
char sipNm_BALL_setBranchDesignator[] = "setBranchDesignator";
char sipNm_BALL_getProtein[] = "getProtein";
char sipNm_BALL_PDBAtom[] = "PDBAtom";
char sipNm_BALL_apply[] = "apply";
char sipNm_BALL_isSuperAtomContainerOf[] = "isSuperAtomContainerOf";
char sipNm_BALL_isSubAtomContainerOf[] = "isSubAtomContainerOf";
char sipNm_BALL_remove[] = "remove";
char sipNm_BALL_prepend[] = "prepend";
char sipNm_BALL_countIntraBonds[] = "countIntraBonds";
char sipNm_BALL_countInterBonds[] = "countInterBonds";
char sipNm_BALL_countAtoms[] = "countAtoms";
char sipNm_BALL_countAtomContainers[] = "countAtomContainers";
char sipNm_BALL_getAtom[] = "getAtom";
char sipNm_BALL_getAtomContainer[] = "getAtomContainer";
char sipNm_BALL_getSuperAtomContainer[] = "getSuperAtomContainer";
char sipNm_BALL_AtomContainer[] = "AtomContainer";
char sipNm_BALL_applyBonds[] = "applyBonds";
char sipNm_BALL_isVicinal[] = "isVicinal";
char sipNm_BALL_isGeminal[] = "isGeminal";
char sipNm_BALL_isBoundTo[] = "isBoundTo";
char sipNm_BALL_hasBond[] = "hasBond";
char sipNm_BALL_destroyBonds[] = "destroyBonds";
char sipNm_BALL_destroyBond[] = "destroyBond";
char sipNm_BALL_cloneBond[] = "cloneBond";
char sipNm_BALL_createBond[] = "createBond";
char sipNm_BALL_getBond[] = "getBond";
char sipNm_BALL_countBonds[] = "countBonds";
char sipNm_BALL_getForce[] = "getForce";
char sipNm_BALL_setForce[] = "setForce";
char sipNm_BALL_getVelocity[] = "getVelocity";
char sipNm_BALL_setVelocity[] = "setVelocity";
char sipNm_BALL_setTypeName[] = "setTypeName";
char sipNm_BALL_setType[] = "setType";
char sipNm_BALL_getRadius[] = "getRadius";
char sipNm_BALL_setRadius[] = "setRadius";
char sipNm_BALL_getPosition[] = "getPosition";
char sipNm_BALL_setPosition[] = "setPosition";
char sipNm_BALL_getFullName[] = "getFullName";
char sipNm_BALL_getMolecule[] = "getMolecule";
char sipNm_BALL_getSecondaryStructure[] = "getSecondaryStructure";
char sipNm_BALL_getChain[] = "getChain";
char sipNm_BALL_getResidue[] = "getResidue";
char sipNm_BALL_getFragment[] = "getFragment";
char sipNm_BALL_getFormalCharge[] = "getFormalCharge";
char sipNm_BALL_setFormalCharge[] = "setFormalCharge";
char sipNm_BALL_getCharge[] = "getCharge";
char sipNm_BALL_setCharge[] = "setCharge";
char sipNm_BALL_getElement[] = "getElement";
char sipNm_BALL_setElement[] = "setElement";
char sipNm_BALL_ADD_VARIANT_EXTENSIONS_AND_ID[] = "ADD_VARIANT_EXTENSIONS_AND_ID";
char sipNm_BALL_ADD_RESIDUE_ID[] = "ADD_RESIDUE_ID";
char sipNm_BALL_ADD_VARIANT_EXTENSIONS[] = "ADD_VARIANT_EXTENSIONS";
char sipNm_BALL_NO_VARIANT_EXTENSIONS[] = "NO_VARIANT_EXTENSIONS";
char sipNm_BALL_NUMBER_OF_PROPERTIES[] = "NUMBER_OF_PROPERTIES";
char sipNm_BALL_MAX_NUMBER_OF_BONDS[] = "MAX_NUMBER_OF_BONDS";
char sipNm_BALL_ANY_TYPE[] = "ANY_TYPE";
char sipNm_BALL_UNKNOWN_TYPE[] = "UNKNOWN_TYPE";
char sipNm_BALL_Atom[] = "Atom";
char sipNm_BALL_AtomType[] = "AtomType";
char sipNm_BALL_getNumberOfAtoms[] = "getNumberOfAtoms";
char sipNm_BALL_getNumberOfSnapShots[] = "getNumberOfSnapShots";
char sipNm_BALL_hasKey[] = "hasKey";
char sipNm_BALL_save[] = "save";
char sipNm_BALL_saveAs[] = "saveAs";
char sipNm_BALL_open[] = "open";
char sipNm_BALL_SEPARATOR[] = "SEPARATOR";
char sipNm_BALL_ENTRY_END[] = "ENTRY_END";
char sipNm_BALL_ENTRY_BEGIN[] = "ENTRY_BEGIN";
char sipNm_BALL_ResourceFile[] = "ResourceFile";
char sipNm_BALL_findEntry[] = "findEntry";
char sipNm_BALL_findDescendant[] = "findDescendant";
char sipNm_BALL_findChild[] = "findChild";
char sipNm_BALL_removeKey[] = "removeKey";
char sipNm_BALL_mergeChildrenOf[] = "mergeChildrenOf";
char sipNm_BALL_insertSibling[] = "insertSibling";
char sipNm_BALL_insertChild[] = "insertChild";
char sipNm_BALL_countChildren[] = "countChildren";
char sipNm_BALL_getPath[] = "getPath";
char sipNm_BALL_getEntry[] = "getEntry";
char sipNm_BALL_ResourceEntry[] = "ResourceEntry";
char sipNm_BALL_getParameterFile[] = "getParameterFile";
char sipNm_BALL_Parameters[] = "Parameters";
char sipNm_BALL_options[] = "options";
char sipNm_BALL_getKey[] = "getKey";
char sipNm_BALL_getNumberOfKeys[] = "getNumberOfKeys";
char sipNm_BALL_getNumberOfVariables[] = "getNumberOfVariables";
char sipNm_BALL_getColumnIndex[] = "getColumnIndex";
char sipNm_BALL_hasVariable[] = "hasVariable";
char sipNm_BALL_getSectionName[] = "getSectionName";
char sipNm_BALL_extractSection[] = "extractSection";
char sipNm_BALL_MAX_FIELDS[] = "MAX_FIELDS";
char sipNm_BALL_ParameterSection[] = "ParameterSection";
char sipNm_BALL_startsWith[] = "startsWith";
char sipNm_BALL_test[] = "test";
char sipNm_BALL_rewind[] = "rewind";
char sipNm_BALL_gotoLine[] = "gotoLine";
char sipNm_BALL_search[] = "search";
char sipNm_BALL_skipLines[] = "skipLines";
char sipNm_BALL_readLine[] = "readLine";
char sipNm_BALL_getLineNumber[] = "getLineNumber";
char sipNm_BALL_LineBasedFile[] = "LineBasedFile";
char sipNm_BALL_XYZFile[] = "XYZFile";
char sipNm_BALL_setBoundingBox[] = "setBoundingBox";
char sipNm_BALL_getBoundingBoxZ[] = "getBoundingBoxZ";
char sipNm_BALL_getBoundingBoxY[] = "getBoundingBoxY";
char sipNm_BALL_getBoundingBoxX[] = "getBoundingBoxX";
char sipNm_BALL_setTimestep[] = "setTimestep";
char sipNm_BALL_getTimestep[] = "getTimestep";
char sipNm_BALL_setPrecision[] = "setPrecision";
char sipNm_BALL_getPrecision[] = "getPrecision";
char sipNm_BALL_setForceStorage[] = "setForceStorage";
char sipNm_BALL_hasForces[] = "hasForces";
char sipNm_BALL_setVelocityStorage[] = "setVelocityStorage";
char sipNm_BALL_readNextHeader[] = "readNextHeader";
char sipNm_BALL_writeNextHeader[] = "writeNextHeader";
char sipNm_BALL_lambda[] = "lambda";
char sipNm_BALL_timestep_time[] = "timestep_time";
char sipNm_BALL_nre[] = "nre";
char sipNm_BALL_timestep_index[] = "timestep_index";
char sipNm_BALL_number_of_atoms[] = "number_of_atoms";
char sipNm_BALL_force_data_size[] = "force_data_size";
char sipNm_BALL_velocity_data_size[] = "velocity_data_size";
char sipNm_BALL_position_data_size[] = "position_data_size";
char sipNm_BALL_sym_size[] = "sym_size";
char sipNm_BALL_top_size[] = "top_size";
char sipNm_BALL_pres_size[] = "pres_size";
char sipNm_BALL_vir_size[] = "vir_size";
char sipNm_BALL_bounding_box_data_size[] = "bounding_box_data_size";
char sipNm_BALL_e_size[] = "e_size";
char sipNm_BALL_ir_size[] = "ir_size";
char sipNm_BALL_title_string[] = "title_string";
char sipNm_BALL_title_string_length[] = "title_string_length";
char sipNm_BALL_VERSION[] = "VERSION";
char sipNm_BALL_MAGIC[] = "MAGIC";
char sipNm_BALL_TRRHeader[] = "TRRHeader";
char sipNm_BALL_TRRFile[] = "TRRFile";
char sipNm_BALL_enableAtoms[] = "enableAtoms";
char sipNm_BALL_disableAtoms[] = "disableAtoms";
char sipNm_BALL_SDFile[] = "SDFile";
char sipNm_BALL_ALL_RECORD_TYPES[] = "ALL_RECORD_TYPES";
char sipNm_BALL_NUMBER_OF_REGISTERED_RECORD_TYPES[] = "NUMBER_OF_REGISTERED_RECORD_TYPES";
char sipNm_BALL_RECORD_TYPE__TVECT[] = "RECORD_TYPE__TVECT";
char sipNm_BALL_RECORD_TYPE__TURN[] = "RECORD_TYPE__TURN";
char sipNm_BALL_RECORD_TYPE__TITLE[] = "RECORD_TYPE__TITLE";
char sipNm_BALL_RECORD_TYPE__TER[] = "RECORD_TYPE__TER";
char sipNm_BALL_RECORD_TYPE__SSBOND[] = "RECORD_TYPE__SSBOND";
char sipNm_BALL_RECORD_TYPE__SPRSDE[] = "RECORD_TYPE__SPRSDE";
char sipNm_BALL_RECORD_TYPE__SOURCE[] = "RECORD_TYPE__SOURCE";
char sipNm_BALL_RECORD_TYPE__SLTBRG[] = "RECORD_TYPE__SLTBRG";
char sipNm_BALL_RECORD_TYPE__SITE[] = "RECORD_TYPE__SITE";
char sipNm_BALL_RECORD_TYPE__SIGUIJ[] = "RECORD_TYPE__SIGUIJ";
char sipNm_BALL_RECORD_TYPE__SIGATM[] = "RECORD_TYPE__SIGATM";
char sipNm_BALL_RECORD_TYPE__SHEET[] = "RECORD_TYPE__SHEET";
char sipNm_BALL_RECORD_TYPE__SEQRES[] = "RECORD_TYPE__SEQRES";
char sipNm_BALL_RECORD_TYPE__SEQADV[] = "RECORD_TYPE__SEQADV";
char sipNm_BALL_RECORD_TYPE__SCALE3[] = "RECORD_TYPE__SCALE3";
char sipNm_BALL_RECORD_TYPE__SCALE2[] = "RECORD_TYPE__SCALE2";
char sipNm_BALL_RECORD_TYPE__SCALE1[] = "RECORD_TYPE__SCALE1";
char sipNm_BALL_RECORD_TYPE__REVDAT[] = "RECORD_TYPE__REVDAT";
char sipNm_BALL_RECORD_TYPE__REMARK[] = "RECORD_TYPE__REMARK";
char sipNm_BALL_RECORD_TYPE__ORIGX3[] = "RECORD_TYPE__ORIGX3";
char sipNm_BALL_RECORD_TYPE__ORIGX2[] = "RECORD_TYPE__ORIGX2";
char sipNm_BALL_RECORD_TYPE__ORIGX1[] = "RECORD_TYPE__ORIGX1";
char sipNm_BALL_RECORD_TYPE__OBSLTE[] = "RECORD_TYPE__OBSLTE";
char sipNm_BALL_RECORD_TYPE__MTRIX3[] = "RECORD_TYPE__MTRIX3";
char sipNm_BALL_RECORD_TYPE__MTRIX2[] = "RECORD_TYPE__MTRIX2";
char sipNm_BALL_RECORD_TYPE__MTRIX1[] = "RECORD_TYPE__MTRIX1";
char sipNm_BALL_RECORD_TYPE__MODRES[] = "RECORD_TYPE__MODRES";
char sipNm_BALL_RECORD_TYPE__MODEL[] = "RECORD_TYPE__MODEL";
char sipNm_BALL_RECORD_TYPE__MASTER[] = "RECORD_TYPE__MASTER";
char sipNm_BALL_RECORD_TYPE__LINK[] = "RECORD_TYPE__LINK";
char sipNm_BALL_RECORD_TYPE__KEYWDS[] = "RECORD_TYPE__KEYWDS";
char sipNm_BALL_RECORD_TYPE__JRNL[] = "RECORD_TYPE__JRNL";
char sipNm_BALL_RECORD_TYPE__HYDBND[] = "RECORD_TYPE__HYDBND";
char sipNm_BALL_RECORD_TYPE__HETSYN[] = "RECORD_TYPE__HETSYN";
char sipNm_BALL_RECORD_TYPE__HETNAM[] = "RECORD_TYPE__HETNAM";
char sipNm_BALL_RECORD_TYPE__HETATM[] = "RECORD_TYPE__HETATM";
char sipNm_BALL_RECORD_TYPE__HET[] = "RECORD_TYPE__HET";
char sipNm_BALL_RECORD_TYPE__HELIX[] = "RECORD_TYPE__HELIX";
char sipNm_BALL_RECORD_TYPE__HEADER[] = "RECORD_TYPE__HEADER";
char sipNm_BALL_RECORD_TYPE__FTNOTE[] = "RECORD_TYPE__FTNOTE";
char sipNm_BALL_RECORD_TYPE__FORMUL[] = "RECORD_TYPE__FORMUL";
char sipNm_BALL_RECORD_TYPE__EXPDTA[] = "RECORD_TYPE__EXPDTA";
char sipNm_BALL_RECORD_TYPE__ENDMDL[] = "RECORD_TYPE__ENDMDL";
char sipNm_BALL_RECORD_TYPE__END[] = "RECORD_TYPE__END";
char sipNm_BALL_RECORD_TYPE__DBREF[] = "RECORD_TYPE__DBREF";
char sipNm_BALL_RECORD_TYPE__CRYST1[] = "RECORD_TYPE__CRYST1";
char sipNm_BALL_RECORD_TYPE__CONECT[] = "RECORD_TYPE__CONECT";
char sipNm_BALL_RECORD_TYPE__COMPND[] = "RECORD_TYPE__COMPND";
char sipNm_BALL_RECORD_TYPE__CISPEP[] = "RECORD_TYPE__CISPEP";
char sipNm_BALL_RECORD_TYPE__CAVEAT[] = "RECORD_TYPE__CAVEAT";
char sipNm_BALL_RECORD_TYPE__AUTHOR[] = "RECORD_TYPE__AUTHOR";
char sipNm_BALL_RECORD_TYPE__ATOM[] = "RECORD_TYPE__ATOM";
char sipNm_BALL_RECORD_TYPE__ANISOU[] = "RECORD_TYPE__ANISOU";
char sipNm_BALL_RECORD_TYPE__UNKNOWN[] = "RECORD_TYPE__UNKNOWN";
char sipNm_BALL_SIZE_OF_FORMAT_STRING_BUFFER[] = "SIZE_OF_FORMAT_STRING_BUFFER";
char sipNm_BALL_SIZE_OF_PDB_LINE_BUFFER[] = "SIZE_OF_PDB_LINE_BUFFER";
char sipNm_BALL_SIZE_OF_PDB_RECORD_LINE[] = "SIZE_OF_PDB_RECORD_LINE";
char sipNm_BALL_pop_back[] = "pop_back";
char sipNm_BALL_push_back[] = "push_back";
char sipNm_BALL_back[] = "back";
char sipNm_BALL_front[] = "front";
char sipNm_BALL_capacity[] = "capacity";
char sipNm_BALL_max_size[] = "max_size";
char sipNm_BALL_PDBRecords[] = "PDBRecords";
char sipNm_BALL_getRecordIndices[] = "getRecordIndices";
char sipNm_BALL_setNumberOfHETATMRecords[] = "setNumberOfHETATMRecords";
char sipNm_BALL_getNumberOfHETATMRecords[] = "getNumberOfHETATMRecords";
char sipNm_BALL_setNumberOfATOMRecords[] = "setNumberOfATOMRecords";
char sipNm_BALL_getNumberOfATOMRecords[] = "getNumberOfATOMRecords";
char sipNm_BALL_setCurrentModel[] = "setCurrentModel";
char sipNm_BALL_getCurrentModel[] = "getCurrentModel";
char sipNm_BALL_setNumberOfModels[] = "setNumberOfModels";
char sipNm_BALL_getNumberOfModels[] = "getNumberOfModels";
char sipNm_BALL_setNumberOfRecords[] = "setNumberOfRecords";
char sipNm_BALL_getNumberOfRecords[] = "getNumberOfRecords";
char sipNm_BALL_setID[] = "setID";
char sipNm_BALL_getID[] = "getID";
char sipNm_BALL_getInvalidRecords[] = "getInvalidRecords";
char sipNm_BALL_getSkippedRecords[] = "getSkippedRecords";
char sipNm_BALL_PDBInfo[] = "PDBInfo";
char sipNm_BALL___lshift__[] = "__lshift__";
char sipNm_BALL___rshift__[] = "__rshift__";
char sipNm_BALL_PDBFile[] = "PDBFile";
char sipNm_BALL_MOLFile[] = "MOLFile";
char sipNm_BALL_File[] = "File";
char sipNm_BALL_MOL2File[] = "MOL2File";
char sipNm_BALL_CONTINUED_LINE[] = "CONTINUED_LINE";
char sipNm_BALL_DELIMITER_TAG[] = "DELIMITER_TAG";
char sipNm_BALL_EDGE_TAG[] = "EDGE_TAG";
char sipNm_BALL_NODE_TAG[] = "NODE_TAG";
char sipNm_BALL_ENTRY_TAG[] = "ENTRY_TAG";
char sipNm_BALL_KCFFile[] = "KCFFile";
char sipNm_BALL_setDuplicateKeyCheck[] = "setDuplicateKeyCheck";
char sipNm_BALL_setValue[] = "setValue";
char sipNm_BALL_insertValue[] = "insertValue";
char sipNm_BALL_getValue[] = "getValue";
char sipNm_BALL_hasEntry[] = "hasEntry";
char sipNm_BALL_appendSection[] = "appendSection";
char sipNm_BALL_deleteSection[] = "deleteSection";
char sipNm_BALL_getSectionLength[] = "getSectionLength";
char sipNm_BALL_getNumberOfSections[] = "getNumberOfSections";
char sipNm_BALL_hasSection[] = "hasSection";
char sipNm_BALL_getNumberOfLines[] = "getNumberOfLines";
char sipNm_BALL_setFilename[] = "setFilename";
char sipNm_BALL_HEADER[] = "HEADER";
char sipNm_BALL_UNDEFINED[] = "UNDEFINED";
char sipNm_BALL_MAX_LINE_LENGTH[] = "MAX_LINE_LENGTH";
char sipNm_BALL_INIFile[] = "INIFile";
char sipNm_BALL_getTemperature[] = "getTemperature";
char sipNm_BALL_getPeriodicBoundary[] = "getPeriodicBoundary";
char sipNm_BALL_hasPeriodicBoundary[] = "hasPeriodicBoundary";
char sipNm_BALL_write[] = "write";
char sipNm_BALL_CannotWrite[] = "CannotWrite";
char sipNm_BALL_GenericMolFile[] = "GenericMolFile";
char sipNm_BALL_HINFile[] = "HINFile";
char sipNm_BALL_close[] = "close";
char sipNm_BALL_disableVelocityStorage[] = "disableVelocityStorage";
char sipNm_BALL_enableVelocityStorage[] = "enableVelocityStorage";
char sipNm_BALL_read[] = "read";
char sipNm_BALL_append[] = "append";
char sipNm_BALL_writeHeader[] = "writeHeader";
char sipNm_BALL_readHeader[] = "readHeader";
char sipNm_BALL_init[] = "init";
char sipNm_BALL_hasVelocities[] = "hasVelocities";
char sipNm_BALL_isSwappingBytes[] = "isSwappingBytes";
char sipNm_BALL_TrajectoryFile[] = "TrajectoryFile";
char sipNm_BALL_DCDFile[] = "DCDFile";
char sipNm_BALL_calculateDistanceCoulomb[] = "calculateDistanceCoulomb";
char sipNm_BALL_calculateCoulomb[] = "calculateCoulomb";
char sipNm_BALL_calculateACE[] = "calculateACE";
char sipNm_BALL_c_str[] = "c_str";
char sipNm_BALL_isWhitespace[] = "isWhitespace";
char sipNm_BALL_isSpace[] = "isSpace";
char sipNm_BALL_isDigit[] = "isDigit";
char sipNm_BALL_isAlnum[] = "isAlnum";
char sipNm_BALL_isAlpha[] = "isAlpha";
char sipNm_BALL_hasSuffix[] = "hasSuffix";
char sipNm_BALL_hasPrefix[] = "hasPrefix";
char sipNm_BALL_hasSubstring[] = "hasSubstring";
char sipNm_BALL_has[] = "has";
char sipNm_BALL_substitute[] = "substitute";
char sipNm_BALL_reverse[] = "reverse";
char sipNm_BALL___add__[] = "__add__";
char sipNm_BALL_instr[] = "instr";
char sipNm_BALL_right[] = "right";
char sipNm_BALL_left[] = "left";
char sipNm_BALL_truncate[] = "truncate";
char sipNm_BALL_trim[] = "trim";
char sipNm_BALL_trimRight[] = "trimRight";
char sipNm_BALL_trimLeft[] = "trimLeft";
char sipNm_BALL_getField[] = "getField";
char sipNm_BALL_countFields[] = "countFields";
char sipNm_BALL_after[] = "after";
char sipNm_BALL_from[] = "from";
char sipNm_BALL_through[] = "through";
char sipNm_BALL_before[] = "before";
char sipNm_BALL_getSubstring[] = "getSubstring";
char sipNm_BALL_toDouble[] = "toDouble";
char sipNm_BALL_toFloat[] = "toFloat";
char sipNm_BALL_toLong[] = "toLong";
char sipNm_BALL_toInt[] = "toInt";
char sipNm_BALL_toShort[] = "toShort";
char sipNm_BALL_toChar[] = "toChar";
char sipNm_BALL_toBool[] = "toBool";
char sipNm_BALL_getCompareMode[] = "getCompareMode";
char sipNm_BALL_setCompareMode[] = "setCompareMode";
char sipNm_BALL_CHARACTER_CLASS__WHITESPACE[] = "CHARACTER_CLASS__WHITESPACE";
char sipNm_BALL_CHARACTER_CLASS__ASCII_NUMERIC[] = "CHARACTER_CLASS__ASCII_NUMERIC";
char sipNm_BALL_CHARACTER_CLASS__ASCII_UPPER[] = "CHARACTER_CLASS__ASCII_UPPER";
char sipNm_BALL_CHARACTER_CLASS__ASCII_LOWER[] = "CHARACTER_CLASS__ASCII_LOWER";
char sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHANUMERIC[] = "CHARACTER_CLASS__ASCII_ALPHANUMERIC";
char sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHA[] = "CHARACTER_CLASS__ASCII_ALPHA";
char sipNm_BALL_CASE_INSENSITIVE[] = "CASE_INSENSITIVE";
char sipNm_BALL_CASE_SENSITIVE[] = "CASE_SENSITIVE";
char sipNm_BALL_String[] = "String";
char sipNm_BALL_isBound[] = "isBound";
char sipNm_BALL_toUpper[] = "toUpper";
char sipNm_BALL_toLower[] = "toLower";
char sipNm_BALL_size[] = "size";
char sipNm_BALL_getLastIndex[] = "getLastIndex";
char sipNm_BALL_getFirstIndex[] = "getFirstIndex";
char sipNm_BALL_getBoundString[] = "getBoundString";
char sipNm_BALL_unbind[] = "unbind";
char sipNm_BALL_bind[] = "bind";
char sipNm_BALL_toString[] = "toString";
char sipNm_BALL_Substring[] = "Substring";
char sipNm_BALL_find[] = "find";
char sipNm_BALL_match[] = "match";
char sipNm_BALL_countSubexpressions[] = "countSubexpressions";
char sipNm_BALL_getPattern[] = "getPattern";
char sipNm_BALL_WHITESPACE[] = "WHITESPACE";
char sipNm_BALL_UPPERCASE[] = "UPPERCASE";
char sipNm_BALL_NON_WHITESPACE[] = "NON_WHITESPACE";
char sipNm_BALL_NON_NUMERIC[] = "NON_NUMERIC";
char sipNm_BALL_NON_ALPHANUMERIC[] = "NON_ALPHANUMERIC";
char sipNm_BALL_NON_ALPHA[] = "NON_ALPHA";
char sipNm_BALL_LOWERCASE[] = "LOWERCASE";
char sipNm_BALL_HEXADECIMAL_INTEGER[] = "HEXADECIMAL_INTEGER";
char sipNm_BALL_INTEGER[] = "INTEGER";
char sipNm_BALL_IDENTIFIER[] = "IDENTIFIER";
char sipNm_BALL_REAL[] = "REAL";
char sipNm_BALL_ALPHANUMERIC[] = "ALPHANUMERIC";
char sipNm_BALL_RegularExpression[] = "RegularExpression";
char sipNm_BALL_z[] = "z";
char sipNm_BALL_RegularData3D[] = "RegularData3D";
char sipNm_BALL_binaryRead[] = "binaryRead";
char sipNm_BALL_binaryWrite[] = "binaryWrite";
char sipNm_BALL_getEnclosingValues[] = "getEnclosingValues";
char sipNm_BALL_getEnclosingIndices[] = "getEnclosingIndices";
char sipNm_BALL_getCoordinates[] = "getCoordinates";
char sipNm_BALL_rescale[] = "rescale";
char sipNm_BALL_getSpacing[] = "getSpacing";
char sipNm_BALL_getClosestIndex[] = "getClosestIndex";
char sipNm_BALL_getLowerIndex[] = "getLowerIndex";
char sipNm_BALL_getClosestValue[] = "getClosestValue";
char sipNm_BALL_getInterpolatedValue[] = "getInterpolatedValue";
char sipNm_BALL_getData[] = "getData";
char sipNm_BALL_isInside[] = "isInside";
char sipNm_BALL_empty[] = "empty";
char sipNm_BALL_y[] = "y";
char sipNm_BALL_x[] = "x";
char sipNm_BALL_IndexType[] = "IndexType";
char sipNm_BALL_RegularData2D[] = "RegularData2D";
char sipNm_BALL_resize[] = "resize";
char sipNm_BALL_setDimension[] = "setDimension";
char sipNm_BALL_setOrigin[] = "setOrigin";
char sipNm_BALL_getDimension[] = "getDimension";
char sipNm_BALL_getOrigin[] = "getOrigin";
char sipNm_BALL_RegularData1D[] = "RegularData1D";
char sipNm_BALL_readOptionFile[] = "readOptionFile";
char sipNm_BALL_setDefaultBool[] = "setDefaultBool";
char sipNm_BALL_setDefaultReal[] = "setDefaultReal";
char sipNm_BALL_setDefaultInteger[] = "setDefaultInteger";
char sipNm_BALL_setDefault[] = "setDefault";
char sipNm_BALL_setBool[] = "setBool";
char sipNm_BALL_setInteger[] = "setInteger";
char sipNm_BALL_setVector[] = "setVector";
char sipNm_BALL_setReal[] = "setReal";
char sipNm_BALL_getInteger[] = "getInteger";
char sipNm_BALL_getVector[] = "getVector";
char sipNm_BALL_getReal[] = "getReal";
char sipNm_BALL_isSet[] = "isSet";
char sipNm_BALL_isVector[] = "isVector";
char sipNm_BALL_isReal[] = "isReal";
char sipNm_BALL_isBool[] = "isBool";
char sipNm_BALL_isInteger[] = "isInteger";
char sipNm_BALL_MAX_ENTRY_LENGTH[] = "MAX_ENTRY_LENGTH";
char sipNm_BALL_Options[] = "Options";
char sipNm_BALL_IllegalKey[] = "IllegalKey";
char sipNm_BALL_isEveryBit[] = "isEveryBit";
char sipNm_BALL_isAnyBit[] = "isAnyBit";
char sipNm_BALL___ixor__[] = "__ixor__";
char sipNm_BALL___xor__[] = "__xor__";
char sipNm_BALL___iand__[] = "__iand__";
char sipNm_BALL___and__[] = "__and__";
char sipNm_BALL___ior__[] = "__ior__";
char sipNm_BALL___or__[] = "__or__";
char sipNm_BALL_bitwiseAnd[] = "bitwiseAnd";
char sipNm_BALL_bitwiseXor[] = "bitwiseXor";
char sipNm_BALL_bitwiseOr[] = "bitwiseOr";
char sipNm_BALL_getUnsignedLong[] = "getUnsignedLong";
char sipNm_BALL_setUnsignedLong[] = "setUnsignedLong";
char sipNm_BALL_getUnsignedShort[] = "getUnsignedShort";
char sipNm_BALL_setUnsignedShort[] = "setUnsignedShort";
char sipNm_BALL_getUnsignedChar[] = "getUnsignedChar";
char sipNm_BALL_setUnsignedChar[] = "setUnsignedChar";
char sipNm_BALL_toggle[] = "toggle";
char sipNm_BALL_fill[] = "fill";
char sipNm_BALL_toggleBit[] = "toggleBit";
char sipNm_BALL_getBit[] = "getBit";
char sipNm_BALL_setBit[] = "setBit";
char sipNm_BALL___getitem__[] = "__getitem__";
char sipNm_BALL_countValue[] = "countValue";
char sipNm_BALL_getSize[] = "getSize";
char sipNm_BALL_setSize[] = "setSize";
char sipNm_BALL_BitVector[] = "BitVector";
char sipNm_BALL_Bit[] = "Bit";
char sipNm_BALL_getTime[] = "getTime";
char sipNm_BALL_stamp[] = "stamp";
char sipNm_BALL_isOlderThan[] = "isOlderThan";
char sipNm_BALL_isNewerThan[] = "isNewerThan";
char sipNm_BALL_TimeStamp[] = "TimeStamp";
char sipNm_BALL_now[] = "now";
char sipNm_BALL_getMicroSeconds[] = "getMicroSeconds";
char sipNm_BALL_getSeconds[] = "getSeconds";
char sipNm_BALL_ZERO[] = "ZERO";
char sipNm_BALL_PreciseTime[] = "PreciseTime";
char sipNm_BALL_isSelected[] = "isSelected";
char sipNm_BALL_hasProperty[] = "hasProperty";
char sipNm_BALL_getNamedProperty[] = "getNamedProperty";
char sipNm_BALL_countNamedProperties[] = "countNamedProperties";
char sipNm_BALL_getProperty[] = "getProperty";
char sipNm_BALL_countProperties[] = "countProperties";
char sipNm_BALL_toggleProperty[] = "toggleProperty";
char sipNm_BALL_clearProperty[] = "clearProperty";
char sipNm_BALL_setProperty[] = "setProperty";
char sipNm_BALL_PropertyManager[] = "PropertyManager";
char sipNm_BALL_getString[] = "getString";
char sipNm_BALL_getObject[] = "getObject";
char sipNm_BALL_getUnsignedInt[] = "getUnsignedInt";
char sipNm_BALL_getFloat[] = "getFloat";
char sipNm_BALL_getInt[] = "getInt";
char sipNm_BALL_getBool[] = "getBool";
char sipNm_BALL_NamedProperty[] = "NamedProperty";
char sipNm_BALL_CONTINUE[] = "CONTINUE";
char sipNm_BALL_BREAK[] = "BREAK";
char sipNm_BALL_ABORT[] = "ABORT";
char sipNm_BALL_Processor[] = "Processor";
char sipNm_BALL_UnaryAtomPredicate[] = "UnaryAtomPredicate";
char sipNm_BALL___call__[] = "__call__";
char sipNm_BALL_UnaryCompositePredicate[] = "UnaryCompositePredicate";
char sipNm_BALL_visit[] = "visit";
char sipNm_BALL_getTypeName[] = "getTypeName";
char sipNm_BALL_TYPE__BOND[] = "TYPE__BOND";
char sipNm_BALL_TYPE__ATOM[] = "TYPE__ATOM";
char sipNm_BALL_TYPE__SECONDARY_STRUCTURE[] = "TYPE__SECONDARY_STRUCTURE";
char sipNm_BALL_TYPE__RESIDUE[] = "TYPE__RESIDUE";
char sipNm_BALL_TYPE__FRAGMENT[] = "TYPE__FRAGMENT";
char sipNm_BALL_TYPE__CHAIN[] = "TYPE__CHAIN";
char sipNm_BALL_TYPE__MOLECULE[] = "TYPE__MOLECULE";
char sipNm_BALL_TYPE__PROTEIN[] = "TYPE__PROTEIN";
char sipNm_BALL_TYPE__SYSTEM[] = "TYPE__SYSTEM";
char sipNm_BALL_TYPE__UNKNOWN[] = "TYPE__UNKNOWN";
char sipNm_BALL_MolecularInformation[] = "MolecularInformation";
char sipNm_BALL_insert[] = "insert";
char sipNm_BALL_connect[] = "connect";
char sipNm_BALL_NUMBER_OF_COMMANDS[] = "NUMBER_OF_COMMANDS";
char sipNm_BALL_COMMAND__SEND_OBJECT[] = "COMMAND__SEND_OBJECT";
char sipNm_BALL_COMMAND__UNKOWN[] = "COMMAND__UNKOWN";
char sipNm_BALL_NoPersistentObject[] = "NoPersistentObject";
char sipNm_BALL_InvalidClient[] = "InvalidClient";
char sipNm_BALL_Client[] = "Client";
char sipNm_BALL_compare[] = "compare";
char sipNm_BALL___gt__[] = "__gt__";
char sipNm_BALL___ge__[] = "__ge__";
char sipNm_BALL___le__[] = "__le__";
char sipNm_BALL___lt__[] = "__lt__";
char sipNm_BALL___ne__[] = "__ne__";
char sipNm_BALL___eq__[] = "__eq__";
char sipNm_BALL_getNewHandle[] = "getNewHandle";
char sipNm_BALL_getNextHandle[] = "getNextHandle";
char sipNm_BALL_getHandle[] = "getHandle";
char sipNm_BALL_registerThis[] = "registerThis";
char sipNm_BALL_unregisterThis[] = "unregisterThis";
char sipNm_BALL_Embeddable[] = "Embeddable";
char sipNm_BALL_isValid[] = "isValid";
char sipNm_BALL_containsSelection[] = "containsSelection";
char sipNm_BALL_isHomomorph[] = "isHomomorph";
char sipNm_BALL_isRelatedWith[] = "isRelatedWith";
char sipNm_BALL_isAncestorOf[] = "isAncestorOf";
char sipNm_BALL_isDescendantOf[] = "isDescendantOf";
char sipNm_BALL_isNextSiblingOf[] = "isNextSiblingOf";
char sipNm_BALL_hasNextSibling[] = "hasNextSibling";
char sipNm_BALL_isPreviousSiblingOf[] = "isPreviousSiblingOf";
char sipNm_BALL_hasPreviousSibling[] = "hasPreviousSibling";
char sipNm_BALL_isSiblingOf[] = "isSiblingOf";
char sipNm_BALL_hasSibling[] = "hasSibling";
char sipNm_BALL_isParentOf[] = "isParentOf";
char sipNm_BALL_hasParent[] = "hasParent";
char sipNm_BALL_isLastChildOf[] = "isLastChildOf";
char sipNm_BALL_isLastChild[] = "isLastChild";
char sipNm_BALL_isFirstChildOf[] = "isFirstChildOf";
char sipNm_BALL_isFirstChild[] = "isFirstChild";
char sipNm_BALL_isChildOf[] = "isChildOf";
char sipNm_BALL_hasChild[] = "hasChild";
char sipNm_BALL_isInterior[] = "isInterior";
char sipNm_BALL_isRootOf[] = "isRootOf";
char sipNm_BALL_isRoot[] = "isRoot";
char sipNm_BALL_isEmpty[] = "isEmpty";
char sipNm_BALL_deselect[] = "deselect";
char sipNm_BALL_select[] = "select";
char sipNm_BALL_swap[] = "swap";
char sipNm_BALL_replace[] = "replace";
char sipNm_BALL_removeSelected[] = "removeSelected";
char sipNm_BALL_removeChild[] = "removeChild";
char sipNm_BALL_splice[] = "splice";
char sipNm_BALL_spliceAfter[] = "spliceAfter";
char sipNm_BALL_spliceBefore[] = "spliceBefore";
char sipNm_BALL_insertAfter[] = "insertAfter";
char sipNm_BALL_insertBefore[] = "insertBefore";
char sipNm_BALL_insertParent[] = "insertParent";
char sipNm_BALL_appendChild[] = "appendChild";
char sipNm_BALL_prependChild[] = "prependChild";
char sipNm_BALL_getSelectionTime[] = "getSelectionTime";
char sipNm_BALL_getModificationTime[] = "getModificationTime";
char sipNm_BALL_getLastChild[] = "getLastChild";
char sipNm_BALL_getFirstChild[] = "getFirstChild";
char sipNm_BALL_getSibling[] = "getSibling";
char sipNm_BALL_getChild[] = "getChild";
char sipNm_BALL_getParent[] = "getParent";
char sipNm_BALL_getLowestCommonAncestor[] = "getLowestCommonAncestor";
char sipNm_BALL_getRoot[] = "getRoot";
char sipNm_BALL_getHeight[] = "getHeight";
char sipNm_BALL_getDepth[] = "getDepth";
char sipNm_BALL_getPathLength[] = "getPathLength";
char sipNm_BALL_countDescendants[] = "countDescendants";
char sipNm_BALL_getDegree[] = "getDegree";
char sipNm_BALL_get[] = "get";
char sipNm_BALL_destroy[] = "destroy";
char sipNm_BALL_clear[] = "clear";
char sipNm_BALL_Selectable[] = "Selectable";
char sipNm_BALL_Object[] = "Object";
char sipNm_BALL_PersistentObject[] = "PersistentObject";
char sipNm_BALL_Composite[] = "Composite";
char sipNm_BALL___str__[] = "__str__";
char sipNm_BALL_getType[] = "getType";
char sipNm_BALL_getMinorRevision[] = "getMinorRevision";
char sipNm_BALL_getMajorRevision[] = "getMajorRevision";
char sipNm_BALL_getVersion[] = "getVersion";
char sipNm_BALL_UNKNOWN[] = "UNKNOWN";
char sipNm_BALL_NONPUBLIC[] = "NONPUBLIC";
char sipNm_BALL_BETA[] = "BETA";
char sipNm_BALL_ALPHA[] = "ALPHA";
char sipNm_BALL_STABLE[] = "STABLE";
char sipNm_BALL_VersionInfo[] = "VersionInfo";
char sipNm_BALL_endLogRedirection[] = "endLogRedirection";
char sipNm_BALL_redirectLogToFile[] = "redirectLogToFile";
char sipNm_BALL_Time[] = "Time";
char sipNm_BALL_LongIndex[] = "LongIndex";
char sipNm_BALL_Position[] = "Position";
char sipNm_BALL_Index[] = "Index";
char sipNm_BALL_globalHandler[] = "globalHandler";
char sipNm_BALL_set[] = "set";
char sipNm_BALL_setFile[] = "setFile";
char sipNm_BALL_setLine[] = "setLine";
char sipNm_BALL_setMessage[] = "setMessage";
char sipNm_BALL_setName[] = "setName";
char sipNm_BALL_GlobalExceptionHandler[] = "GlobalExceptionHandler";
char sipNm_BALL_TooManyBonds[] = "TooManyBonds";
char sipNm_BALL_ParseError[] = "ParseError";
char sipNm_BALL_getFilename[] = "getFilename";
char sipNm_BALL_FileNotFound[] = "FileNotFound";
char sipNm_BALL_DivisionByZero[] = "DivisionByZero";
char sipNm_BALL_BufferOverflow[] = "BufferOverflow";
char sipNm_BALL_OutOfGrid[] = "OutOfGrid";
char sipNm_BALL_OutOfMemory[] = "OutOfMemory";
char sipNm_BALL_TooManyErrors[] = "TooManyErrors";
char sipNm_BALL_NotImplemented[] = "NotImplemented";
char sipNm_BALL_IncompatibleIterators[] = "IncompatibleIterators";
char sipNm_BALL_InvalidIterator[] = "InvalidIterator";
char sipNm_BALL_NullPointer[] = "NullPointer";
char sipNm_BALL_IllegalSelfOperation[] = "IllegalSelfOperation";
char sipNm_BALL_InvalidFormat[] = "InvalidFormat";
char sipNm_BALL_InvalidRange[] = "InvalidRange";
char sipNm_BALL_IndexOverflow[] = "IndexOverflow";
char sipNm_BALL_SizeUnderflow[] = "SizeUnderflow";
char sipNm_BALL_IndexUnderflow[] = "IndexUnderflow";
char sipNm_BALL___repr__[] = "__repr__";
char sipNm_BALL_getFile[] = "getFile";
char sipNm_BALL_getLine[] = "getLine";
char sipNm_BALL_getMessage[] = "getMessage";
char sipNm_BALL_getName[] = "getName";
char sipNm_BALL_GeneralException[] = "GeneralException";
char sipNm_BALL_CAL_PER_JOULE[] = "CAL_PER_JOULE";
char sipNm_BALL_JOULE_PER_CAL[] = "JOULE_PER_CAL";
char sipNm_BALL_M_PER_FOOT[] = "M_PER_FOOT";
char sipNm_BALL_MM_PER_INCH[] = "MM_PER_INCH";
char sipNm_BALL_RAD_PER_DEG[] = "RAD_PER_DEG";
char sipNm_BALL_DEG_PER_RAD[] = "DEG_PER_RAD";
char sipNm_BALL_FINE_STRUCTURE_CONSTANT[] = "FINE_STRUCTURE_CONSTANT";
char sipNm_BALL_GRAVITATIONAL_CONSTANT[] = "GRAVITATIONAL_CONSTANT";
char sipNm_BALL_c[] = "c";
char sipNm_BALL_SPEED_OF_LIGHT[] = "SPEED_OF_LIGHT";
char sipNm_BALL_VACUUM_PERMEABILITY[] = "VACUUM_PERMEABILITY";
char sipNm_BALL_VACUUM_PERMITTIVITY[] = "VACUUM_PERMITTIVITY";
char sipNm_BALL_a0[] = "a0";
char sipNm_BALL_BOHR_RADIUS[] = "BOHR_RADIUS";
char sipNm_BALL_F[] = "F";
char sipNm_BALL_FARADAY[] = "FARADAY";
char sipNm_BALL_R[] = "R";
char sipNm_BALL_GAS_CONSTANT[] = "GAS_CONSTANT";
char sipNm_BALL_h[] = "h";
char sipNm_BALL_PLANCK[] = "PLANCK";
char sipNm_BALL_k[] = "k";
char sipNm_BALL_BOLTZMANN[] = "BOLTZMANN";
char sipNm_BALL_MOL[] = "MOL";
char sipNm_BALL_NA[] = "NA";
char sipNm_BALL_AVOGADRO[] = "AVOGADRO";
char sipNm_BALL_NEUTRON_MASS[] = "NEUTRON_MASS";
char sipNm_BALL_PROTON_MASS[] = "PROTON_MASS";
char sipNm_BALL_ELECTRON_MASS[] = "ELECTRON_MASS";
char sipNm_BALL_e0[] = "e0";
char sipNm_BALL_ELEMENTARY_CHARGE[] = "ELEMENTARY_CHARGE";
char sipNm_BALL_EPSILON[] = "EPSILON";
char sipNm_BALL_E[] = "E";
char sipNm_BALL_PI[] = "PI";
char sipNm_BALL_Constant[] = "Constant";

void sipVH_BALL_0(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_1(sip_gilstate_t sipGILState,PyObject *sipMethod,MainControl& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_MainControl,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_2(sip_gilstate_t sipGILState,PyObject *sipMethod,Composite& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Composite,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_3(sip_gilstate_t sipGILState,PyObject *sipMethod,bool a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"b",a0);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_4(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_5(sip_gilstate_t sipGILState,PyObject *sipMethod,INIFile& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_INIFile,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_6(sip_gilstate_t sipGILState,PyObject *sipMethod,Renderer& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Renderer,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_7(sip_gilstate_t sipGILState,PyObject *sipMethod,Message *a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",a0,sipClass_Message,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_8(sip_gilstate_t sipGILState,PyObject *sipMethod,const String& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<String *>(&a0),sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_9(sip_gilstate_t sipGILState,PyObject *sipMethod,const String& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<String *>(&a0),sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_10(sip_gilstate_t sipGILState,PyObject *sipMethod,String a0,bool a1)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"Cb",&a0,sipClass_String,NULL,a1);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_11(sip_gilstate_t sipGILState,PyObject *sipMethod,const Stage& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Stage *>(&a0),sipClass_Stage,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_12(sip_gilstate_t sipGILState,PyObject *sipMethod,const Stage& a0,float a1,float a2)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"Cff",const_cast<Stage *>(&a0),sipClass_Stage,NULL,a1,a2);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

System * sipVH_BALL_13(sip_gilstate_t sipGILState,PyObject *sipMethod,const String& a0,const String& a1,const String& a2)
{
    System * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CCC",const_cast<String *>(&a0),sipClass_String,NULL,const_cast<String *>(&a1),sipClass_String,NULL,const_cast<String *>(&a2),sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C4",sipClass_System,&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

System * sipVH_BALL_14(sip_gilstate_t sipGILState,PyObject *sipMethod,const String& a0)
{
    System * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<String *>(&a0),sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C4",sipClass_System,&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_15(sip_gilstate_t sipGILState,PyObject *sipMethod,const Composite& a0,ColorRGBA& a1)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CC",const_cast<Composite *>(&a0),sipClass_Composite,NULL,&a1,sipClass_ColorRGBA,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_16(sip_gilstate_t sipGILState,PyObject *sipMethod,const Atom& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Atom *>(&a0),sipClass_Atom,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_17(sip_gilstate_t sipGILState,PyObject *sipMethod,float a0,ColorRGBA& a1)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"fC",a0,&a1,sipClass_ColorRGBA,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

Dataset * sipVH_BALL_18(sip_gilstate_t sipGILState,PyObject *sipMethod,String a0,String a1)
{
    Dataset * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CC",&a0,sipClass_String,NULL,&a1,sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C4",sipClass_Dataset,&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_19(sip_gilstate_t sipGILState,PyObject *sipMethod,Dataset *a0,String a1,String a2)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CCC",a0,sipClass_Dataset,NULL,&a1,sipClass_String,NULL,&a2,sipClass_String,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_20(sip_gilstate_t sipGILState,PyObject *sipMethod,Dataset *a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",a0,sipClass_Dataset,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_21(sip_gilstate_t sipGILState,PyObject *sipMethod,Preferences& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Preferences,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_22(sip_gilstate_t sipGILState,PyObject *sipMethod,int a0,int a1)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"ii",a0,a1);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_23(sip_gilstate_t sipGILState,PyObject *sipMethod,int a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"i",a0);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

void sipVH_BALL_24(sip_gilstate_t sipGILState,PyObject *sipMethod,const ColorRGBA& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<ColorRGBA *>(&a0),sipClass_ColorRGBA,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

const ColorRGBA& sipVH_BALL_25(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    ColorRGBA *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_ColorRGBA,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new ColorRGBA();

    return *sipRes;
}

void sipVH_BALL_26(sip_gilstate_t sipGILState,PyObject *sipMethod,const Camera& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Camera *>(&a0),sipClass_Camera,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

Camera& sipVH_BALL_27(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    Camera *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_Camera,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new Camera();

    return *sipRes;
}

void sipVH_BALL_28(sip_gilstate_t sipGILState,PyObject *sipMethod,const LightSource& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<LightSource *>(&a0),sipClass_LightSource,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_29(sip_gilstate_t sipGILState,PyObject *sipMethod,int a0,bool a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"ib",a0,a1);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

double sipVH_BALL_30(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    double sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"d",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_31(sip_gilstate_t sipGILState,PyObject *sipMethod,double& a0,bool a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"b",a1);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"(bd)",&sipRes,&a0) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_32(sip_gilstate_t sipGILState,PyObject *sipMethod,double& a0,double& a1,double& a2,double& a3,double& a4,double& a5,double& a6,double a7,double a8,double a9,double a10)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"dddd",a7,a8,a9,a10);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"(ddddddd)",&a0,&a1,&a2,&a3,&a4,&a5,&a6) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_33(sip_gilstate_t sipGILState,PyObject *sipMethod,double a0,bool a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"db",a0,a1);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_34(sip_gilstate_t sipGILState,PyObject *sipMethod,bool a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"b",a0);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_35(sip_gilstate_t sipGILState,PyObject *sipMethod,double a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"d",a0);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}

bool sipVH_BALL_36(sip_gilstate_t sipGILState,PyObject *sipMethod,ForceField& a0,SnapShotManager *a1,const Options& a2)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CCC",&a0,sipClass_ForceField,NULL,a1,sipClass_SnapShotManager,NULL,const_cast<Options *>(&a2),sipClass_Options,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_37(sip_gilstate_t sipGILState,PyObject *sipMethod,ForceField& a0,SnapShotManager *a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"CC",&a0,sipClass_ForceField,NULL,a1,sipClass_SnapShotManager,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_38(sip_gilstate_t sipGILState,PyObject *sipMethod,int a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"i",a0);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

String sipVH_BALL_39(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    String sipRes;
    String *sipResOrig;
    int sipResState;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C1",sipClass_String,&sipResState,&sipResOrig) < 0)
        PyErr_Print();
    else
    {
        sipRes = *sipResOrig;
        sipReleaseInstance(sipResOrig,sipClass_String,sipResState);
    }

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_40(sip_gilstate_t sipGILState,PyObject *sipMethod,SnapShot& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_SnapShot,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_41(sip_gilstate_t sipGILState,PyObject *sipMethod,const SnapShot& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<SnapShot *>(&a0),sipClass_SnapShot,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

GenericMolFile& sipVH_BALL_42(sip_gilstate_t sipGILState,PyObject *sipMethod,const Molecule& a0)
{
    GenericMolFile *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Molecule *>(&a0),sipClass_Molecule,NULL);

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_GenericMolFile,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new GenericMolFile();

    return *sipRes;
}

GenericMolFile& sipVH_BALL_43(sip_gilstate_t sipGILState,PyObject *sipMethod,Molecule& a0)
{
    GenericMolFile *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Molecule,NULL);

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_GenericMolFile,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new GenericMolFile();

    return *sipRes;
}

GenericMolFile& sipVH_BALL_44(sip_gilstate_t sipGILState,PyObject *sipMethod,const System& a0)
{
    GenericMolFile *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<System *>(&a0),sipClass_System,NULL);

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_GenericMolFile,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new GenericMolFile();

    return *sipRes;
}

GenericMolFile& sipVH_BALL_45(sip_gilstate_t sipGILState,PyObject *sipMethod,System& a0)
{
    GenericMolFile *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_System,NULL);

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_GenericMolFile,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new GenericMolFile();

    return *sipRes;
}

Molecule * sipVH_BALL_46(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    Molecule * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"");

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C4",sipClass_Molecule,&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_47(sip_gilstate_t sipGILState,PyObject *sipMethod,System& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_System,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_48(sip_gilstate_t sipGILState,PyObject *sipMethod,const Molecule& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Molecule *>(&a0),sipClass_Molecule,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_49(sip_gilstate_t sipGILState,PyObject *sipMethod,const System& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<System *>(&a0),sipClass_System,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

TRRFile& sipVH_BALL_50(sip_gilstate_t sipGILState,PyObject *sipMethod,SnapShotManager& a0)
{
    TRRFile *sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_SnapShotManager,NULL);

    int sipIsErr = (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"C5",sipClass_TRRFile,&sipRes) < 0);

    if (sipIsErr)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    if (sipIsErr)
        return *new TRRFile();

    return *sipRes;
}

bool sipVH_BALL_51(sip_gilstate_t sipGILState,PyObject *sipMethod,TRRFile::TRRHeader& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_TRRFile_TRRHeader,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_52(sip_gilstate_t sipGILState,PyObject *sipMethod,const TRRFile::TRRHeader& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<TRRFile::TRRHeader *>(&a0),sipClass_TRRFile_TRRHeader,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_53(sip_gilstate_t sipGILState,PyObject *sipMethod,const Protein& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<Protein *>(&a0),sipClass_Protein,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_54(sip_gilstate_t sipGILState,PyObject *sipMethod,Molecule& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Molecule,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

bool sipVH_BALL_55(sip_gilstate_t sipGILState,PyObject *sipMethod,Protein& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",&a0,sipClass_Protein,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_BALL_56(sip_gilstate_t sipGILState,PyObject *sipMethod,const PreciseTime& a0)
{
    PyObject *sipResObj = sipCallMethod(0,sipMethod,"C",const_cast<PreciseTime *>(&a0),sipClass_PreciseTime,NULL);

    if (!sipResObj || sipParseResult(0,sipMethod,sipResObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(sipResObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}


extern "C" {static PyObject *func_getDataPath(PyObject *,PyObject *);}
static PyObject *func_getDataPath(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            String *sipRes;

            try
            {
            sipRes = new String(getDataPath());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getDataPath);

    return NULL;
}


extern "C" {static PyObject *func_focusCamera(PyObject *,PyObject *);}
static PyObject *func_focusCamera(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J@",sipClass_Composite,&a0))
        {
            Camera *sipRes;

            try
            {
            sipRes = new Camera(focusCamera(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Camera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_focusCamera);

    return NULL;
}


extern "C" {static PyObject *func_logString(PyObject *,PyObject *);}
static PyObject *func_logString(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            logString(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_logString);

    return NULL;
}


extern "C" {static PyObject *func_getNormal(PyObject *,PyObject *);}
static PyObject *func_getNormal(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Vector3,&a0))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(getNormal(*a0));

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getNormal);

    return NULL;
}


extern "C" {static PyObject *func_createTemporaryFilename(PyObject *,PyObject *);}
static PyObject *func_createTemporaryFilename(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            String *sipRes;

            sipRes = new String(createTemporaryFilename());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_createTemporaryFilename);

    return NULL;
}


extern "C" {static PyObject *func_getMainControl(PyObject *,PyObject *);}
static PyObject *func_getMainControl(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            MainControl *sipRes;

            sipRes = getMainControl();

            return sipConvertFromInstance(sipRes,sipClass_MainControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getMainControl);

    return NULL;
}


extern "C" {static PyObject *func_createFloatString(PyObject *,PyObject *);}
static PyObject *func_createFloatString(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        int a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"fi",&a0,&a1))
        {
            String *sipRes;

            sipRes = new String(createFloatString(a0,a1));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_createFloatString);

    return NULL;
}


extern "C" {static PyObject *func_stringToVector3(PyObject *,PyObject *);}
static PyObject *func_stringToVector3(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1JA",sipClass_String,&a0,&a0State,sipClass_Vector3,&a1))
        {
            bool sipRes;

            sipRes = stringToVector3(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_stringToVector3);

    return NULL;
}


extern "C" {static PyObject *func_vector3ToString(PyObject *,PyObject *);}
static PyObject *func_vector3ToString(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Vector3,&a0))
        {
            String *sipRes;

            sipRes = new String(vector3ToString(*a0));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_vector3ToString);

    return NULL;
}


extern "C" {static PyObject *func_calculateSASPoints(PyObject *,PyObject *);}
static PyObject *func_calculateSASPoints(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        float a1 = 1.5;
        int a2 = 400;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|fi",sipClass_AtomContainer,&a0,&a1,&a2))
        {
            Surface *sipRes = 0;

#line 40 "numericalSAS.sip"
	const AtomContainer *a0;
	float a1 = 1.5;
	Size a2 = 400;

	if (sipParseArgs(&sipArgsParsed,sipArgs,"J1|fi",sipClass_AtomContainer, &a0, &a1, &a2))
	{
		Surface* res = new Surface;
		calculateSASPoints(*a0, *res, a1, a2);

		return sipConvertFromInstance(res,sipClass_Surface, 0);
	}
#line 3510 "sipBALLcmodule.C"

            return sipConvertFromInstance(sipRes,sipClass_Surface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateSASPoints);

    return NULL;
}


extern "C" {static PyObject *func_calculateSASAtomAreas(PyObject *,PyObject *);}
static PyObject *func_calculateSASAtomAreas(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        float a1 = 1.5;
        int a2 = 400;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|fi",sipClass_AtomContainer,&a0,&a1,&a2))
        {
            PyAtomDict *sipRes = 0;

#line 19 "numericalSAS.sip"
	const AtomContainer *a0;
	float a1 = 1.5;
	Size a2 = 400;

	if (sipParseArgs(&sipArgsParsed,sipArgs,"J1|fi",sipClass_AtomContainer,&a0,&a1,&a2))
	{
		PyAtomDict *res;
 
		res = new PyAtomDict;
		calculateSASAtomAreas(*a0, *res, a1, a2);
		PyObject *resobj = sipConvertFromMappedType(res,sipMappedType_PyAtomDict,NULL);

		delete res;

		return resobj;
	}
#line 3554 "sipBALLcmodule.C"

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyAtomDict,NULL);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateSASAtomAreas);

    return NULL;
}


extern "C" {static PyObject *func_calculateSASVolume(PyObject *,PyObject *);}
static PyObject *func_calculateSASVolume(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        float a1 = 1.5;
        int a2 = 400;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|fi",sipClass_AtomContainer,&a0,&a1,&a2))
        {
            float sipRes;

            try
            {
            sipRes = calculateSASVolume(*a0,a1,a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateSASVolume);

    return NULL;
}


extern "C" {static PyObject *func_calculateSASArea(PyObject *,PyObject *);}
static PyObject *func_calculateSASArea(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        float a1 = 1.5;
        int a2 = 400;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|fi",sipClass_AtomContainer,&a0,&a1,&a2))
        {
            float sipRes;

            try
            {
            sipRes = calculateSASArea(*a0,a1,a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateSASArea);

    return NULL;
}


extern "C" {static PyObject *func_calculateBondAngle(PyObject *,PyObject *);}
static PyObject *func_calculateBondAngle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        const Atom * a1;
        const Atom * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Atom,&a0,sipClass_Atom,&a1,sipClass_Atom,&a2))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(calculateBondAngle(*a0,*a1,*a2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateBondAngle);

    return NULL;
}


extern "C" {static PyObject *func_calculateTorsionAngle(PyObject *,PyObject *);}
static PyObject *func_calculateTorsionAngle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        const Atom * a1;
        const Atom * a2;
        const Atom * a3;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJAJA",sipClass_Atom,&a0,sipClass_Atom,&a1,sipClass_Atom,&a2,sipClass_Atom,&a3))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(calculateTorsionAngle(*a0,*a1,*a2,*a3));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateTorsionAngle);

    return NULL;
}


extern "C" {static PyObject *func_nucleicAcids(PyObject *,PyObject *);}
static PyObject *func_nucleicAcids(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            NucleicAcidList *sipRes;

            try
            {
            sipRes = new NucleicAcidList(nucleicAcids(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_NucleicAcidList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_nucleicAcids);

    return NULL;
}


extern "C" {static PyObject *func_nucleotides(PyObject *,PyObject *);}
static PyObject *func_nucleotides(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            NucleotideList *sipRes;

            try
            {
            sipRes = new NucleotideList(nucleotides(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_NucleotideList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_nucleotides);

    return NULL;
}


extern "C" {static PyObject *func_proteins(PyObject *,PyObject *);}
static PyObject *func_proteins(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            ProteinList *sipRes;

            try
            {
            sipRes = new ProteinList(proteins(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_ProteinList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_proteins);

    return NULL;
}


extern "C" {static PyObject *func_chains(PyObject *,PyObject *);}
static PyObject *func_chains(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            ChainList *sipRes;

            try
            {
            sipRes = new ChainList(chains(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_ChainList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_chains);

    return NULL;
}


extern "C" {static PyObject *func_secondaryStructures(PyObject *,PyObject *);}
static PyObject *func_secondaryStructures(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            SecondaryStructureList *sipRes;

            try
            {
            sipRes = new SecondaryStructureList(secondaryStructures(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_SecondaryStructureList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_secondaryStructures);

    return NULL;
}


extern "C" {static PyObject *func_residues(PyObject *,PyObject *);}
static PyObject *func_residues(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            ResidueList *sipRes;

            try
            {
            sipRes = new ResidueList(residues(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_ResidueList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_residues);

    return NULL;
}


extern "C" {static PyObject *func_molecules(PyObject *,PyObject *);}
static PyObject *func_molecules(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            MoleculeList *sipRes;

            try
            {
            sipRes = new MoleculeList(molecules(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_MoleculeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_molecules);

    return NULL;
}


extern "C" {static PyObject *func_fragments(PyObject *,PyObject *);}
static PyObject *func_fragments(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            FragmentList *sipRes;

            try
            {
            sipRes = new FragmentList(fragments(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_FragmentList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_fragments);

    return NULL;
}


extern "C" {static PyObject *func_atomContainers(PyObject *,PyObject *);}
static PyObject *func_atomContainers(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            AtomContainerList *sipRes;

            try
            {
            sipRes = new AtomContainerList(atomContainers(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_AtomContainerList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_atomContainers);

    return NULL;
}


extern "C" {static PyObject *func_bonds(PyObject *,PyObject *);}
static PyObject *func_bonds(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            BondList *sipRes;

            try
            {
            sipRes = new BondList(bonds(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_BondList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            BondList *sipRes;

            try
            {
            sipRes = new BondList(bonds(*a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_BondList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_bonds);

    return NULL;
}


extern "C" {static PyObject *func_PDBAtoms(PyObject *,PyObject *);}
static PyObject *func_PDBAtoms(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        const String& a1def = String();
        const String * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|J1",sipClass_AtomContainer,&a0,sipClass_String,&a1,&a1State))
        {
            PDBAtomList *sipRes;

            try
            {
            sipRes = new PDBAtomList(PDBAtoms(*a0,*a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PDBAtomList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_PDBAtoms);

    return NULL;
}


extern "C" {static PyObject *func_atoms(PyObject *,PyObject *);}
static PyObject *func_atoms(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        const String& a1def = String();
        const String * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA|J1",sipClass_AtomContainer,&a0,sipClass_String,&a1,&a1State))
        {
            AtomList *sipRes;

            try
            {
            sipRes = new AtomList(atoms(*a0,*a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_AtomList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_atoms);

    return NULL;
}


extern "C" {static PyObject *func_getTorsionAngle(PyObject *,PyObject *);}
static PyObject *func_getTorsionAngle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        float a6;
        float a7;
        float a8;
        float a9;
        float a10;
        float a11;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"ffffffffffff",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(getTorsionAngle(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getTorsionAngle);

    return NULL;
}


extern "C" {static PyObject *func_isParallel(PyObject *,PyObject *);}
static PyObject *func_isParallel(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Line3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isParallel(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isParallel(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isParallel(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_isParallel);

    return NULL;
}


extern "C" {static PyObject *func_isIntersecting(PyObject *,PyObject *);}
static PyObject *func_isIntersecting(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isIntersecting(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_isIntersecting);

    return NULL;
}


extern "C" {static PyObject *func_isOrthogonal(PyObject *,PyObject *);}
static PyObject *func_isOrthogonal(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Line3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isOrthogonal(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_isOrthogonal);

    return NULL;
}


extern "C" {static PyObject *func_isComplanar(PyObject *,PyObject *);}
static PyObject *func_isComplanar(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = isComplanar(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;
        const Vector3 * a3;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2,sipClass_Vector3,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = isComplanar(*a0,*a1,*a2,*a3);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_isComplanar);

    return NULL;
}


extern "C" {static PyObject *func_isCollinear(PyObject *,PyObject *);}
static PyObject *func_isCollinear(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = isCollinear(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_isCollinear);

    return NULL;
}


extern "C" {static PyObject *func_GetIntersection(PyObject *,PyObject *);}
static PyObject *func_GetIntersection(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Line3 * a0;
        const Line3 * a1;
        Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Line3,&a0,sipClass_Line3,&a1,sipClass_Vector3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Line3 * a1;
        Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Line3,&a1,sipClass_Vector3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Plane3 * a1;
        Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Line3,&a0,sipClass_Plane3,&a1,sipClass_Vector3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;
        Line3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1,sipClass_Line3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Sphere3 * a0;
        const Line3 * a1;
        Vector3 * a2;
        Vector3 * a3;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJAJA",sipClass_Sphere3,&a0,sipClass_Line3,&a1,sipClass_Vector3,&a2,sipClass_Vector3,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2,*a3);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Sphere3 * a1;
        Vector3 * a2;
        Vector3 * a3;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJAJA",sipClass_Line3,&a0,sipClass_Sphere3,&a1,sipClass_Vector3,&a2,sipClass_Vector3,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2,*a3);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Sphere3 * a0;
        const Plane3 * a1;
        Circle3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Sphere3,&a0,sipClass_Plane3,&a1,sipClass_Circle3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Sphere3 * a1;
        Circle3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Sphere3,&a1,sipClass_Circle3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Sphere3 * a0;
        const Sphere3 * a1;
        Circle3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Sphere3,&a0,sipClass_Sphere3,&a1,sipClass_Circle3,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetIntersection(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_GetIntersection);

    return NULL;
}


extern "C" {static PyObject *func_GetAngle(PyObject *,PyObject *);}
static PyObject *func_GetAngle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Line3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Line3,&a0,sipClass_Line3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Vector3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Vector3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Plane3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Plane3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Line3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Line3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        const Plane3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Line3,&a0,sipClass_Plane3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;
        Angle * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1,sipClass_Angle,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = GetAngle(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_GetAngle);

    return NULL;
}


extern "C" {static PyObject *func_GetDistance(PyObject *,PyObject *);}
static PyObject *func_GetDistance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Line3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Vector3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Line3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Line3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Line3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Vector3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Plane3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Vector3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Vector3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Line3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Line3,&a0,sipClass_Plane3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Line3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Line3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const Plane3 * a0;
        const Plane3 * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJA",sipClass_Plane3,&a0,sipClass_Plane3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = GetDistance(*a0,*a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_GetDistance);

    return NULL;
}


extern "C" {static PyObject *func_calculateDistanceCoulomb(PyObject *,PyObject *);}
static PyObject *func_calculateDistanceCoulomb(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_AtomContainer,&a0))
        {
            double sipRes;

            try
            {
            sipRes = calculateDistanceCoulomb(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateDistanceCoulomb);

    return NULL;
}


extern "C" {static PyObject *func_calculateCoulomb(PyObject *,PyObject *);}
static PyObject *func_calculateCoulomb(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_AtomContainer,&a0))
        {
            double sipRes;

            try
            {
            sipRes = calculateCoulomb(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateCoulomb);

    return NULL;
}


extern "C" {static PyObject *func_calculateACE(PyObject *,PyObject *);}
static PyObject *func_calculateACE(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_AtomContainer,&a0))
        {
            double sipRes;

            try
            {
            sipRes = calculateACE(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_calculateACE);

    return NULL;
}


extern "C" {static PyObject *func_endLogRedirection(PyObject *,PyObject *);}
static PyObject *func_endLogRedirection(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
#line 29 "logStream.sip"
	Log.remove(py_oflogstream_);
	py_oflogstream_.close();
#line 5473 "sipBALLcmodule.C"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_endLogRedirection);

    return NULL;
}


extern "C" {static PyObject *func_redirectLogToFile(PyObject *,PyObject *);}
static PyObject *func_redirectLogToFile(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
#line 19 "logStream.sip"
	if (py_oflogstream_.is_open())
	{
		py_oflogstream_.close();
	}
	py_oflogstream_.open(a0->c_str());
	Log.insert(py_oflogstream_);
#line 5505 "sipBALLcmodule.C"

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_redirectLogToFile);

    return NULL;
}


/* Convert to a sub-class if possible. */
extern "C" {static sipWrapperType *sipSubClass_GeometricObject(void **);}
static sipWrapperType *sipSubClass_GeometricObject(void **sipCppRet)
{
    GeometricObject *sipCpp = reinterpret_cast<GeometricObject *>(*sipCppRet);
    sipWrapperType *sipClass;

#line 31 "geometricObject.sip"
/////////////////////////////////////////////////
#define BALL_TO_SIP_MAP(type)\
	if (RTTI::isKindOf<type>(*sipCpp))\
	{\
		sipClass = sipClass_##type;\
	}\
	else\
/////////////////////////////////////////////////

	//BALL_TO_SIP_MAP(Point)
	//BALL_TO_SIP_MAP(MultiLine)
	//BALL_TO_SIP_MAP(QuadMesh)
	
	BALL_TO_SIP_MAP(Sphere)
	BALL_TO_SIP_MAP(TwoColoredTube)
	BALL_TO_SIP_MAP(Tube)
	BALL_TO_SIP_MAP(TwoColoredLine)
	BALL_TO_SIP_MAP(Line)
	BALL_TO_SIP_MAP(Mesh)
	BALL_TO_SIP_MAP(GridVisualisation)
	BALL_TO_SIP_MAP(Box)
	BALL_TO_SIP_MAP(Disc)
	BALL_TO_SIP_MAP(SimpleBox)
	{
	}
#line 5554 "sipBALLcmodule.C"

    return sipClass;
}


/*
 * This defines each class in this module.  The values are replaced by the
 * proper Python types during the export process.
 */
static sipWrapperType *typesTable[] = {
    (sipWrapperType *)(void *)&sipType_BALL_Renderer,
    (sipWrapperType *)(void *)&sipType_BALL_VRMLRenderer,
    (sipWrapperType *)(void *)&sipType_BALL_POVRenderer,
    (sipWrapperType *)(void *)&sipType_BALL_Preferences,
    (sipWrapperType *)(void *)&sipType_BALL_ModelProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_LabelModel,
    (sipWrapperType *)(void *)&sipType_BALL_ForceModel,
    (sipWrapperType *)(void *)&sipType_BALL_AddSurfaceModel,
    (sipWrapperType *)(void *)&sipType_BALL_AddBackboneModel,
    (sipWrapperType *)(void *)&sipType_BALL_AddCartoonModel,
    (sipWrapperType *)(void *)&sipType_BALL_AtomBondModelBaseProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_HBondModelProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AddBallAndStickModel,
    (sipWrapperType *)(void *)&sipType_BALL_AddVanDerWaalsModel,
    (sipWrapperType *)(void *)&sipType_BALL_AddLineModel,
    (sipWrapperType *)(void *)&sipType_BALL_ColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ResidueTypeColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_SecondaryStructureColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_OccupancyColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_CustomColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AtomDistanceColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ResidueNameColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_PositionColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_MoleculeColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ChainColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ResidueNumberColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ElementColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_InterpolateColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ForceColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_TemperatureFactorColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AtomChargeColorProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_Dataset,
    (sipWrapperType *)(void *)&sipType_BALL_ColorMap,
    (sipWrapperType *)(void *)&sipType_BALL_MultiColorExtension,
    (sipWrapperType *)(void *)&sipType_BALL_ColorExtension2,
    (sipWrapperType *)(void *)&sipType_BALL_Vertex2,
    (sipWrapperType *)(void *)&sipType_BALL_Vertex,
    (sipWrapperType *)(void *)&sipType_BALL_ColorRGBA,
    (sipWrapperType *)(void *)&sipType_BALL_ColorUnit,
    (sipWrapperType *)(void *)&sipType_BALL_NotInHexFormat,
    (sipWrapperType *)(void *)&sipType_BALL_ClippingPlane,
    (sipWrapperType *)(void *)&sipType_BALL_GeometricObject,
    (sipWrapperType *)(void *)&sipType_BALL_Tube,
    (sipWrapperType *)(void *)&sipType_BALL_TwoColoredTube,
    (sipWrapperType *)(void *)&sipType_BALL_TwoColoredLine,
    (sipWrapperType *)(void *)&sipType_BALL_Sphere,
    (sipWrapperType *)(void *)&sipType_BALL_Line,
    (sipWrapperType *)(void *)&sipType_BALL_Label,
    (sipWrapperType *)(void *)&sipType_BALL_GridVisualisation,
    (sipWrapperType *)(void *)&sipType_BALL_Disc,
    (sipWrapperType *)(void *)&sipType_BALL_Box,
    (sipWrapperType *)(void *)&sipType_BALL_RepresentationManager,
    (sipWrapperType *)(void *)&sipType_BALL_CompositeManager,
    (sipWrapperType *)(void *)&sipType_BALL_Stage,
    (sipWrapperType *)(void *)&sipType_BALL_Camera,
    (sipWrapperType *)(void *)&sipType_BALL_LightSource,
    (sipWrapperType *)(void *)&sipType_BALL_Message,
    (sipWrapperType *)(void *)&sipType_BALL_DeselectControlsMessage,
    (sipWrapperType *)(void *)&sipType_BALL_CreateRepresentationMessage,
    (sipWrapperType *)(void *)&sipType_BALL_ShowDisplayPropertiesMessage,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularTaskMessage,
    (sipWrapperType *)(void *)&sipType_BALL_RepresentationMessage,
    (sipWrapperType *)(void *)&sipType_BALL_GeometricObjectSelectionMessage,
    (sipWrapperType *)(void *)&sipType_BALL_NewSelectionMessage,
    (sipWrapperType *)(void *)&sipType_BALL_GenericSelectionMessage,
    (sipWrapperType *)(void *)&sipType_BALL_ControlSelectionMessage,
    (sipWrapperType *)(void *)&sipType_BALL_SceneMessage,
    (sipWrapperType *)(void *)&sipType_BALL_CompositeMessage,
    (sipWrapperType *)(void *)&sipType_BALL_Timer,
    (sipWrapperType *)(void *)&sipType_BALL_SysInfo,
    (sipWrapperType *)(void *)&sipType_BALL_Path,
    (sipWrapperType *)(void *)&sipType_BALL_OpenMode,
    (sipWrapperType *)(void *)&sipType_BALL_std__openmode,
    (sipWrapperType *)(void *)&sipType_BALL_SurfaceProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_PeptideBuilder,
    (sipWrapperType *)(void *)&sipType_BALL_AminoAcidDescriptor,
    (sipWrapperType *)(void *)&sipType_BALL_FragmentDB,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_FastAtomStruct,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_Default,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_DielectricSmoothing,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_ChargeDistribution,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_Boundary,
    (sipWrapperType *)(void *)&sipType_BALL_FDPB_Option,
    (sipWrapperType *)(void *)&sipType_BALL_ResidueProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ResidueChecker,
    (sipWrapperType *)(void *)&sipType_BALL_FragmentProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ReconstructFragmentProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_BuildBondsProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_NormalizeNamesProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_BondProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_LineSearch,
    (sipWrapperType *)(void *)&sipType_BALL_EnergyMinimizer,
    (sipWrapperType *)(void *)&sipType_BALL_ShiftedLVMMMinimizer,
    (sipWrapperType *)(void *)&sipType_BALL_StrangLBFGSMinimizer,
    (sipWrapperType *)(void *)&sipType_BALL_SteepestDescentMinimizer,
    (sipWrapperType *)(void *)&sipType_BALL_ConjugateGradientMinimizer,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularDynamics,
    (sipWrapperType *)(void *)&sipType_BALL_MicroCanonicalMD,
    (sipWrapperType *)(void *)&sipType_BALL_CanonicalMD,
    (sipWrapperType *)(void *)&sipType_BALL_SnapShotManager,
    (sipWrapperType *)(void *)&sipType_BALL_SnapShotManager_Default,
    (sipWrapperType *)(void *)&sipType_BALL_SnapShotManager_Option,
    (sipWrapperType *)(void *)&sipType_BALL_SnapShot,
    (sipWrapperType *)(void *)&sipType_BALL_RuleEvaluator,
    (sipWrapperType *)(void *)&sipType_BALL_PeriodicBoundary,
    (sipWrapperType *)(void *)&sipType_BALL_Gradient,
    (sipWrapperType *)(void *)&sipType_BALL_AtomProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_TransformationProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_TranslationProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_GeometricCenterProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_BoundingBoxProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AssignRadiusProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AssignChargeProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ClearRadiusProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ClearChargeProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_RuleProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_TypeRuleProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_RadiusRuleProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_ChargeRuleProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_AtomVector,
    (sipWrapperType *)(void *)&sipType_BALL_ForceFieldComponent,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmTorsion,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmStretch,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmNonBonded,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmImproperTorsion,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmBend,
    (sipWrapperType *)(void *)&sipType_BALL_AmberTorsion,
    (sipWrapperType *)(void *)&sipType_BALL_AmberStretch,
    (sipWrapperType *)(void *)&sipType_BALL_AmberNonBonded,
    (sipWrapperType *)(void *)&sipType_BALL_AmberBend,
    (sipWrapperType *)(void *)&sipType_BALL_ForceField,
    (sipWrapperType *)(void *)&sipType_BALL_CharmmFF,
    (sipWrapperType *)(void *)&sipType_BALL_AmberFF,
    (sipWrapperType *)(void *)&sipType_BALL_MMFF94,
    (sipWrapperType *)(void *)&sipType_BALL_Vector4,
    (sipWrapperType *)(void *)&sipType_BALL_Surface,
    (sipWrapperType *)(void *)&sipType_BALL_Surface_Triangle,
    (sipWrapperType *)(void *)&sipType_BALL_Mesh,
    (sipWrapperType *)(void *)&sipType_BALL_Sphere3,
    (sipWrapperType *)(void *)&sipType_BALL_Quaternion,
    (sipWrapperType *)(void *)&sipType_BALL_Plane3,
    (sipWrapperType *)(void *)&sipType_BALL_Matrix4x4,
    (sipWrapperType *)(void *)&sipType_BALL_Line3,
    (sipWrapperType *)(void *)&sipType_BALL_Circle3,
    (sipWrapperType *)(void *)&sipType_BALL_SimpleBox3,
    (sipWrapperType *)(void *)&sipType_BALL_SimpleBox,
    (sipWrapperType *)(void *)&sipType_BALL_Box3,
    (sipWrapperType *)(void *)&sipType_BALL_Angle,
    (sipWrapperType *)(void *)&sipType_BALL_CompositeProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_SecondaryStructureProcessor,
    (sipWrapperType *)(void *)&sipType_BALL_FragmentDistanceCollector,
    (sipWrapperType *)(void *)&sipType_BALL_Selector,
    (sipWrapperType *)(void *)&sipType_BALL_Expression,
    (sipWrapperType *)(void *)&sipType_BALL_AtomType,
    (sipWrapperType *)(void *)&sipType_BALL_ResourceEntry,
    (sipWrapperType *)(void *)&sipType_BALL_Parameters,
    (sipWrapperType *)(void *)&sipType_BALL_ParameterSection,
    (sipWrapperType *)(void *)&sipType_BALL_PDB,
    (sipWrapperType *)(void *)&sipType_BALL_PDBRecords,
    (sipWrapperType *)(void *)&sipType_BALL_PDBInfo,
    (sipWrapperType *)(void *)&sipType_BALL_PDBFile,
    (sipWrapperType *)(void *)&sipType_BALL_INIFile,
    (sipWrapperType *)(void *)&sipType_BALL_File,
    (sipWrapperType *)(void *)&sipType_BALL_File_CannotWrite,
    (sipWrapperType *)(void *)&sipType_BALL_ResourceFile,
    (sipWrapperType *)(void *)&sipType_BALL_XYZFile,
    (sipWrapperType *)(void *)&sipType_BALL_MOL2File,
    (sipWrapperType *)(void *)&sipType_BALL_LineBasedFile,
    (sipWrapperType *)(void *)&sipType_BALL_GenericMolFile,
    (sipWrapperType *)(void *)&sipType_BALL_SDFile,
    (sipWrapperType *)(void *)&sipType_BALL_MOLFile,
    (sipWrapperType *)(void *)&sipType_BALL_KCFFile,
    (sipWrapperType *)(void *)&sipType_BALL_HINFile,
    (sipWrapperType *)(void *)&sipType_BALL_TrajectoryFile,
    (sipWrapperType *)(void *)&sipType_BALL_TRRFile,
    (sipWrapperType *)(void *)&sipType_BALL_TRRFile_TRRHeader,
    (sipWrapperType *)(void *)&sipType_BALL_DCDFile,
    (sipWrapperType *)(void *)&sipType_BALL_String,
    (sipWrapperType *)(void *)&sipType_BALL_Substring,
    (sipWrapperType *)(void *)&sipType_BALL_RegularExpression,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData3D,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData3D_IndexType,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData2D,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData2D_IndexType,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData1D,
    (sipWrapperType *)(void *)&sipType_BALL_Options,
    (sipWrapperType *)(void *)&sipType_BALL_BitVector,
    (sipWrapperType *)(void *)&sipType_BALL_Bit,
    (sipWrapperType *)(void *)&sipType_BALL_TimeStamp,
    (sipWrapperType *)(void *)&sipType_BALL_PreciseTime,
    (sipWrapperType *)(void *)&sipType_BALL_PropertyManager,
    (sipWrapperType *)(void *)&sipType_BALL_Representation,
    (sipWrapperType *)(void *)&sipType_BALL_PTE_,
    (sipWrapperType *)(void *)&sipType_BALL_Element,
    (sipWrapperType *)(void *)&sipType_BALL_Processor,
    (sipWrapperType *)(void *)&sipType_BALL_UnaryAtomPredicate,
    (sipWrapperType *)(void *)&sipType_BALL_ExpressionPredicate,
    (sipWrapperType *)(void *)&sipType_BALL_UnaryCompositePredicate,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularInformation,
    (sipWrapperType *)(void *)&sipType_BALL_Embeddable,
    (sipWrapperType *)(void *)&sipType_BALL_Scene,
    (sipWrapperType *)(void *)&sipType_BALL_EditableScene,
    (sipWrapperType *)(void *)&sipType_BALL_DatasetController,
    (sipWrapperType *)(void *)&sipType_BALL_TrajectoryController,
    (sipWrapperType *)(void *)&sipType_BALL_RegularData3DController,
    (sipWrapperType *)(void *)&sipType_BALL_ModularWidget,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularStructure,
    (sipWrapperType *)(void *)&sipType_BALL_DockWidget,
    (sipWrapperType *)(void *)&sipType_BALL_DatasetControl,
    (sipWrapperType *)(void *)&sipType_BALL_LogView,
    (sipWrapperType *)(void *)&sipType_BALL_GeometricControl,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularControl,
    (sipWrapperType *)(void *)&sipType_BALL_PyWidget,
    (sipWrapperType *)(void *)&sipType_BALL_ModifyRepresentationDialog,
    (sipWrapperType *)(void *)&sipType_BALL_MolecularFileDialog,
    (sipWrapperType *)(void *)&sipType_BALL_DisplayProperties,
    (sipWrapperType *)(void *)&sipType_BALL_MainControl,
    (sipWrapperType *)(void *)&sipType_BALL_Selectable,
    (sipWrapperType *)(void *)&sipType_BALL_Object,
    (sipWrapperType *)(void *)&sipType_BALL_PersistentObject,
    (sipWrapperType *)(void *)&sipType_BALL_Vector3,
    (sipWrapperType *)(void *)&sipType_BALL_Vector2,
    (sipWrapperType *)(void *)&sipType_BALL_NamedProperty,
    (sipWrapperType *)(void *)&sipType_BALL_Composite,
    (sipWrapperType *)(void *)&sipType_BALL_Bond,
    (sipWrapperType *)(void *)&sipType_BALL_AtomContainer,
    (sipWrapperType *)(void *)&sipType_BALL_System,
    (sipWrapperType *)(void *)&sipType_BALL_SecondaryStructure,
    (sipWrapperType *)(void *)&sipType_BALL_Molecule,
    (sipWrapperType *)(void *)&sipType_BALL_Protein,
    (sipWrapperType *)(void *)&sipType_BALL_NucleicAcid,
    (sipWrapperType *)(void *)&sipType_BALL_Fragment,
    (sipWrapperType *)(void *)&sipType_BALL_Residue,
    (sipWrapperType *)(void *)&sipType_BALL_Nucleotide,
    (sipWrapperType *)(void *)&sipType_BALL_Chain,
    (sipWrapperType *)(void *)&sipType_BALL_Atom,
    (sipWrapperType *)(void *)&sipType_BALL_PDBAtom,
    (sipWrapperType *)(void *)&sipType_BALL_VersionInfo,
    (sipWrapperType *)(void *)&sipType_BALL_GlobalExceptionHandler,
    (sipWrapperType *)(void *)&sipType_BALL_GeneralException,
    (sipWrapperType *)(void *)&sipType_BALL_Server,
    (sipWrapperType *)(void *)&sipType_BALL_Server_NotCompositeObject,
    (sipWrapperType *)(void *)&sipType_BALL_IllegalKey,
    (sipWrapperType *)(void *)&sipType_BALL_Client,
    (sipWrapperType *)(void *)&sipType_BALL_Client_NoPersistentObject,
    (sipWrapperType *)(void *)&sipType_BALL_Client_InvalidClient,
    (sipWrapperType *)(void *)&sipType_BALL_TooManyBonds,
    (sipWrapperType *)(void *)&sipType_BALL_ParseError,
    (sipWrapperType *)(void *)&sipType_BALL_FileNotFound,
    (sipWrapperType *)(void *)&sipType_BALL_DivisionByZero,
    (sipWrapperType *)(void *)&sipType_BALL_BufferOverflow,
    (sipWrapperType *)(void *)&sipType_BALL_OutOfGrid,
    (sipWrapperType *)(void *)&sipType_BALL_OutOfMemory,
    (sipWrapperType *)(void *)&sipType_BALL_TooManyErrors,
    (sipWrapperType *)(void *)&sipType_BALL_NotImplemented,
    (sipWrapperType *)(void *)&sipType_BALL_IncompatibleIterators,
    (sipWrapperType *)(void *)&sipType_BALL_InvalidIterator,
    (sipWrapperType *)(void *)&sipType_BALL_NullPointer,
    (sipWrapperType *)(void *)&sipType_BALL_IllegalSelfOperation,
    (sipWrapperType *)(void *)&sipType_BALL_InvalidFormat,
    (sipWrapperType *)(void *)&sipType_BALL_InvalidRange,
    (sipWrapperType *)(void *)&sipType_BALL_IndexOverflow,
    (sipWrapperType *)(void *)&sipType_BALL_SizeUnderflow,
    (sipWrapperType *)(void *)&sipType_BALL_IndexUnderflow,
    (sipWrapperType *)(void *)&sipType_BALL_Constant,
};


/* This defines each mapped type in this module. */
static sipMappedType *mappedTypesTable[] = {
    &sipMappedTypeDef_PyColorRGBAVector,
    &sipMappedTypeDef_RegularData3DList,
    &sipMappedTypeDef_RepresentationList,
    &sipMappedTypeDef_GeometricObjectList,
    &sipMappedTypeDef_NucleicAcidList,
    &sipMappedTypeDef_NucleotideList,
    &sipMappedTypeDef_ProteinList,
    &sipMappedTypeDef_ChainList,
    &sipMappedTypeDef_SecondaryStructureList,
    &sipMappedTypeDef_ResidueList,
    &sipMappedTypeDef_MoleculeList,
    &sipMappedTypeDef_FragmentList,
    &sipMappedTypeDef_AtomContainerList,
    &sipMappedTypeDef_BondList,
    &sipMappedTypeDef_PDBAtomList,
    &sipMappedTypeDef_AtomList,
    &sipMappedTypeDef_PyDatasetVector,
    &sipMappedTypeDef_PyCompositeList,
    &sipMappedTypeDef_PyAtomDict,
    &sipMappedTypeDef_PyIndexList,
    &sipMappedTypeDef_Time,
    &sipMappedTypeDef_LongIndex,
    &sipMappedTypeDef_Position,
    &sipMappedTypeDef_Index,
    0
};


/* Define each named enum in this module. */
static sipEnumDef enumTypesTable[] = {
    {"BALL.LabelModel.Mode", NULL, 5, NULL},
    {"BALL.InterpolateColorProcessor.Mode", NULL, 27, NULL},
    {"BALL.ColoringMethod", NULL, -1, NULL},
    {"BALL.ModelType", NULL, -1, NULL},
    {"BALL.DrawingPrecision", NULL, -1, NULL},
    {"BALL.DrawingMode", NULL, -1, NULL},
    {"BALL.EventsIDs", NULL, -1, NULL},
    {"BALL.Representation.Properties", NULL, 192, NULL},
    {"BALL.LightSource.Types", NULL, 55, NULL},
    {"BALL.MolecularTaskMessage.MolecularTaskMessageType", NULL, 60, NULL},
    {"BALL.RepresentationMessage.RepresentationMessageType", NULL, 61, NULL},
    {"BALL.SceneMessage.SceneMessageType", NULL, 66, NULL},
    {"BALL.CompositeMessage.CompositeMessageType", NULL, 67, NULL},
    {"BALL.SurfaceProcessor.SurfaceType", NULL, 73, NULL},
    {"BALL.ResidueChecker.TestType", NULL, 85, NULL},
    {"BALL.FragmentDB.FragmentTypes", NULL, 76, NULL},
    {"BALL.FDPB.ErrorCode", NULL, 77, NULL},
    {"BALL.ShiftedLVMMMinimizer.CorrectionParameter", NULL, 93, NULL},
    {"BALL.ShiftedLVMMMinimizer.UpdateMethod", NULL, 93, NULL},
    {"BALL.ConjugateGradientMinimizer.UpdateMethod", NULL, 96, NULL},
    {"BALL.Line3.Form", NULL, 143, NULL},
    {"BALL.Angle.Range", NULL, 148, NULL},
    {"BALL.SecondaryStructure.Type", NULL, 228, NULL},
    {"BALL.Residue.FullNameType", NULL, 233, NULL},
    {"BALL.Residue.Property", NULL, 233, NULL},
    {"BALL.Fragment.Property", NULL, 232, NULL},
    {"BALL.Bond.Property", NULL, 225, NULL},
    {"BALL.Bond.BondType", NULL, 225, NULL},
    {"BALL.Bond.BondOrder", NULL, 225, NULL},
    {"BALL.AtomContainer.Property", NULL, 226, NULL},
    {"BALL.Atom.FullNameType", NULL, 236, NULL},
    {"BALL.Atom.Property", NULL, 236, NULL},
    {"BALL.PDB.RecordType", NULL, 158, NULL},
    {"BALL.String.CompareMode", NULL, 178, NULL},
    {"BALL.Processor.Result", NULL, 195, NULL},
    {"BALL.MolecularInformation.Type", NULL, 199, NULL},
    {"BALL.Client.Command", NULL, 244, NULL},
    {"BALL.VersionInfo.Type", NULL, 238, NULL},
};

/* These are the enum members of all global enums. */
static sipEnumMemberDef enummembers[] = {
    {sipNm_BALL_COLORING_ATOM_CHARGE, COLORING_ATOM_CHARGE, 2},
    {sipNm_BALL_COLORING_CHAIN, COLORING_CHAIN, 2},
    {sipNm_BALL_COLORING_CUSTOM, COLORING_CUSTOM, 2},
    {sipNm_BALL_COLORING_DISTANCE, COLORING_DISTANCE, 2},
    {sipNm_BALL_COLORING_ELEMENT, COLORING_ELEMENT, 2},
    {sipNm_BALL_COLORING_FORCES, COLORING_FORCES, 2},
    {sipNm_BALL_COLORING_MOLECULE, COLORING_MOLECULE, 2},
    {sipNm_BALL_COLORING_OCCUPANCY, COLORING_OCCUPANCY, 2},
    {sipNm_BALL_COLORING_RESIDUE_INDEX, COLORING_RESIDUE_INDEX, 2},
    {sipNm_BALL_COLORING_RESIDUE_NAME, COLORING_RESIDUE_NAME, 2},
    {sipNm_BALL_COLORING_RESIDUE_TYPE, COLORING_RESIDUE_TYPE, 2},
    {sipNm_BALL_COLORING_SECONDARY_STRUCTURE, COLORING_SECONDARY_STRUCTURE, 2},
    {sipNm_BALL_COLORING_TEMPERATURE_FACTOR, COLORING_TEMPERATURE_FACTOR, 2},
    {sipNm_BALL_COLORING_UNKNOWN, COLORING_UNKNOWN, 2},
    {sipNm_BALL_DRAWING_MODE_DOTS, DRAWING_MODE_DOTS, 5},
    {sipNm_BALL_DRAWING_MODE_SOLID, DRAWING_MODE_SOLID, 5},
    {sipNm_BALL_DRAWING_MODE_TOON, DRAWING_MODE_TOON, 5},
    {sipNm_BALL_DRAWING_MODE_WIREFRAME, DRAWING_MODE_WIREFRAME, 5},
    {sipNm_BALL_DRAWING_PRECISION_HIGH, DRAWING_PRECISION_HIGH, 4},
    {sipNm_BALL_DRAWING_PRECISION_LOW, DRAWING_PRECISION_LOW, 4},
    {sipNm_BALL_DRAWING_PRECISION_MEDIUM, DRAWING_PRECISION_MEDIUM, 4},
    {sipNm_BALL_DRAWING_PRECISION_ULTRA, DRAWING_PRECISION_ULTRA, 4},
    {sipNm_BALL_LOG_EVENT, LOG_EVENT, 6},
    {sipNm_BALL_MESSAGE_EVENT, MESSAGE_EVENT, 6},
    {sipNm_BALL_MODEL_BACKBONE, MODEL_BACKBONE, 3},
    {sipNm_BALL_MODEL_BALL_AND_STICK, MODEL_BALL_AND_STICK, 3},
    {sipNm_BALL_MODEL_CARTOON, MODEL_CARTOON, 3},
    {sipNm_BALL_MODEL_CONTOUR_SURFACE, MODEL_CONTOUR_SURFACE, 3},
    {sipNm_BALL_MODEL_FIELD_LINES, MODEL_FIELD_LINES, 3},
    {sipNm_BALL_MODEL_FORCES, MODEL_FORCES, 3},
    {sipNm_BALL_MODEL_GRID_SLICE, MODEL_GRID_SLICE, 3},
    {sipNm_BALL_MODEL_GRID_VOLUME, MODEL_GRID_VOLUME, 3},
    {sipNm_BALL_MODEL_HBONDS, MODEL_HBONDS, 3},
    {sipNm_BALL_MODEL_LABEL, MODEL_LABEL, 3},
    {sipNm_BALL_MODEL_LINES, MODEL_LINES, 3},
    {sipNm_BALL_MODEL_SA_SURFACE, MODEL_SA_SURFACE, 3},
    {sipNm_BALL_MODEL_SE_SURFACE, MODEL_SE_SURFACE, 3},
    {sipNm_BALL_MODEL_STICK, MODEL_STICK, 3},
    {sipNm_BALL_MODEL_UNKNOWN, MODEL_UNKNOWN, 3},
    {sipNm_BALL_MODEL_VDW, MODEL_VDW, 3},
};


/*
 * These define each typedef in this module.  They are only needed in case
 * they are used as arguments to Qt signals.
 */

static sipTypedefDef typedefsTable[] = {
    {"FragmentDB::Type", short_sat, NULL, NULL},
    {"FDPB::FastAtom", unknown_sat, NULL, NULL},
    {"Bond::Type", short_sat, NULL, NULL},
    {"Bond::Order", short_sat, NULL, NULL},
    {"ResourceFile::Entry", class_sat, "ResourceEntry", NULL},
    {"GridDataType", float_sat, NULL, NULL},
    {"DoubleReal", double_sat, NULL, NULL},
    {"Size", int_sat, NULL, NULL},
    {NULL, unknown_sat, NULL, NULL}
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_BALL_0,
    (sipVirtHandlerFunc)sipVH_BALL_1,
    (sipVirtHandlerFunc)sipVH_BALL_2,
    (sipVirtHandlerFunc)sipVH_BALL_3,
    (sipVirtHandlerFunc)sipVH_BALL_4,
    (sipVirtHandlerFunc)sipVH_BALL_5,
    (sipVirtHandlerFunc)sipVH_BALL_6,
    (sipVirtHandlerFunc)sipVH_BALL_7,
    (sipVirtHandlerFunc)sipVH_BALL_8,
    (sipVirtHandlerFunc)sipVH_BALL_9,
    (sipVirtHandlerFunc)sipVH_BALL_10,
    (sipVirtHandlerFunc)sipVH_BALL_11,
    (sipVirtHandlerFunc)sipVH_BALL_12,
    (sipVirtHandlerFunc)sipVH_BALL_13,
    (sipVirtHandlerFunc)sipVH_BALL_14,
    (sipVirtHandlerFunc)sipVH_BALL_15,
    (sipVirtHandlerFunc)sipVH_BALL_16,
    (sipVirtHandlerFunc)sipVH_BALL_17,
    (sipVirtHandlerFunc)sipVH_BALL_18,
    (sipVirtHandlerFunc)sipVH_BALL_19,
    (sipVirtHandlerFunc)sipVH_BALL_20,
    (sipVirtHandlerFunc)sipVH_BALL_21,
    (sipVirtHandlerFunc)sipVH_BALL_22,
    (sipVirtHandlerFunc)sipVH_BALL_23,
    (sipVirtHandlerFunc)sipVH_BALL_24,
    (sipVirtHandlerFunc)sipVH_BALL_25,
    (sipVirtHandlerFunc)sipVH_BALL_26,
    (sipVirtHandlerFunc)sipVH_BALL_27,
    (sipVirtHandlerFunc)sipVH_BALL_28,
    (sipVirtHandlerFunc)sipVH_BALL_29,
    (sipVirtHandlerFunc)sipVH_BALL_30,
    (sipVirtHandlerFunc)sipVH_BALL_31,
    (sipVirtHandlerFunc)sipVH_BALL_32,
    (sipVirtHandlerFunc)sipVH_BALL_33,
    (sipVirtHandlerFunc)sipVH_BALL_34,
    (sipVirtHandlerFunc)sipVH_BALL_35,
    (sipVirtHandlerFunc)sipVH_BALL_36,
    (sipVirtHandlerFunc)sipVH_BALL_37,
    (sipVirtHandlerFunc)sipVH_BALL_38,
    (sipVirtHandlerFunc)sipVH_BALL_39,
    (sipVirtHandlerFunc)sipVH_BALL_40,
    (sipVirtHandlerFunc)sipVH_BALL_41,
    (sipVirtHandlerFunc)sipVH_BALL_42,
    (sipVirtHandlerFunc)sipVH_BALL_43,
    (sipVirtHandlerFunc)sipVH_BALL_44,
    (sipVirtHandlerFunc)sipVH_BALL_45,
    (sipVirtHandlerFunc)sipVH_BALL_46,
    (sipVirtHandlerFunc)sipVH_BALL_47,
    (sipVirtHandlerFunc)sipVH_BALL_48,
    (sipVirtHandlerFunc)sipVH_BALL_49,
    (sipVirtHandlerFunc)sipVH_BALL_50,
    (sipVirtHandlerFunc)sipVH_BALL_51,
    (sipVirtHandlerFunc)sipVH_BALL_52,
    (sipVirtHandlerFunc)sipVH_BALL_53,
    (sipVirtHandlerFunc)sipVH_BALL_54,
    (sipVirtHandlerFunc)sipVH_BALL_55,
    (sipVirtHandlerFunc)sipVH_BALL_56,
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_GeometricObject, {41, 255, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_BALL = {
    NULL,
    SIP_API_MINOR_NR,
    "BALL",
    NULL,
    -1,
    NULL,
    NULL,
    266,
    typesTable,
    NULL,
    mappedTypesTable,
    38,
    NULL,
    enumTypesTable,
    40,
    enummembers,
    typedefsTable,
    virtHandlersTable,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_BALL;


/* The Python module initialisation function. */
#if defined(SIP_STATIC_MODULE)
extern "C" void initBALL()
#else
PyMODINIT_FUNC initBALL()
#endif
{
   static PyMethodDef sip_methods[] = {
        {sipNm_BALL_getDataPath, func_getDataPath, METH_VARARGS, NULL},
        {sipNm_BALL_focusCamera, func_focusCamera, METH_VARARGS, NULL},
        {sipNm_BALL_logString, func_logString, METH_VARARGS, NULL},
        {sipNm_BALL_getNormal, func_getNormal, METH_VARARGS, NULL},
        {sipNm_BALL_createTemporaryFilename, func_createTemporaryFilename, METH_VARARGS, NULL},
        {sipNm_BALL_getMainControl, func_getMainControl, METH_VARARGS, NULL},
        {sipNm_BALL_createFloatString, func_createFloatString, METH_VARARGS, NULL},
        {sipNm_BALL_stringToVector3, func_stringToVector3, METH_VARARGS, NULL},
        {sipNm_BALL_vector3ToString, func_vector3ToString, METH_VARARGS, NULL},
        {sipNm_BALL_calculateSASPoints, func_calculateSASPoints, METH_VARARGS, NULL},
        {sipNm_BALL_calculateSASAtomAreas, func_calculateSASAtomAreas, METH_VARARGS, NULL},
        {sipNm_BALL_calculateSASVolume, func_calculateSASVolume, METH_VARARGS, NULL},
        {sipNm_BALL_calculateSASArea, func_calculateSASArea, METH_VARARGS, NULL},
        {sipNm_BALL_calculateBondAngle, func_calculateBondAngle, METH_VARARGS, NULL},
        {sipNm_BALL_calculateTorsionAngle, func_calculateTorsionAngle, METH_VARARGS, NULL},
        {sipNm_BALL_nucleicAcids, func_nucleicAcids, METH_VARARGS, NULL},
        {sipNm_BALL_nucleotides, func_nucleotides, METH_VARARGS, NULL},
        {sipNm_BALL_proteins, func_proteins, METH_VARARGS, NULL},
        {sipNm_BALL_chains, func_chains, METH_VARARGS, NULL},
        {sipNm_BALL_secondaryStructures, func_secondaryStructures, METH_VARARGS, NULL},
        {sipNm_BALL_residues, func_residues, METH_VARARGS, NULL},
        {sipNm_BALL_molecules, func_molecules, METH_VARARGS, NULL},
        {sipNm_BALL_fragments, func_fragments, METH_VARARGS, NULL},
        {sipNm_BALL_atomContainers, func_atomContainers, METH_VARARGS, NULL},
        {sipNm_BALL_bonds, func_bonds, METH_VARARGS, NULL},
        {sipNm_BALL_PDBAtoms, func_PDBAtoms, METH_VARARGS, NULL},
        {sipNm_BALL_atoms, func_atoms, METH_VARARGS, NULL},
        {sipNm_BALL_getTorsionAngle, func_getTorsionAngle, METH_VARARGS, NULL},
        {sipNm_BALL_isParallel, func_isParallel, METH_VARARGS, NULL},
        {sipNm_BALL_isIntersecting, func_isIntersecting, METH_VARARGS, NULL},
        {sipNm_BALL_isOrthogonal, func_isOrthogonal, METH_VARARGS, NULL},
        {sipNm_BALL_isComplanar, func_isComplanar, METH_VARARGS, NULL},
        {sipNm_BALL_isCollinear, func_isCollinear, METH_VARARGS, NULL},
        {sipNm_BALL_GetIntersection, func_GetIntersection, METH_VARARGS, NULL},
        {sipNm_BALL_GetAngle, func_GetAngle, METH_VARARGS, NULL},
        {sipNm_BALL_GetDistance, func_GetDistance, METH_VARARGS, NULL},
        {sipNm_BALL_calculateDistanceCoulomb, func_calculateDistanceCoulomb, METH_VARARGS, NULL},
        {sipNm_BALL_calculateCoulomb, func_calculateCoulomb, METH_VARARGS, NULL},
        {sipNm_BALL_calculateACE, func_calculateACE, METH_VARARGS, NULL},
        {sipNm_BALL_endLogRedirection, func_endLogRedirection, METH_VARARGS, NULL},
        {sipNm_BALL_redirectLogToFile, func_redirectLogToFile, METH_VARARGS, NULL},
        {0, 0, 0, 0}
    };

   PyObject *sipModule, *sipModuleDict, *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
    sipModule = Py_InitModule((char *)sipModuleAPI_BALL.em_name,sip_methods);
    sipModuleDict = PyModule_GetDict(sipModule);

    /* Import the SIP module and get it's API. */
    sip_sipmod = PyImport_ImportModule((char *)"sip");

    if (sip_sipmod == NULL)
        return;

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod),"_C_API");

    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
        return;

    sipAPI_BALL = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));

    /* Export the module and publish it's API. */
    if (sipAPI_BALL->api_export_module(&sipModuleAPI_BALL,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,sipModuleDict) < 0)
       return;

    /*
     * Define the class and mapped type instances that have to be added
     * inline.
     */
    sipAddMappedTypeInstance((PyObject *)sipClass_FDPB_Default,sipNm_BALL_CHECK_AFTER_ITERATIONS,const_cast<Index *>(&FDPB::Default::CHECK_AFTER_ITERATIONS),sipMappedType_Index);
    sipAddMappedTypeInstance((PyObject *)sipClass_FDPB_Default,sipNm_BALL_MAX_ITERATIONS,const_cast<Index *>(&FDPB::Default::MAX_ITERATIONS),sipMappedType_Index);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Default,sipNm_BALL_DIELECTRIC_SMOOTHING,const_cast<String *>(&FDPB::Default::DIELECTRIC_SMOOTHING),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Default,sipNm_BALL_CHARGE_DISTRIBUTION,const_cast<String *>(&FDPB::Default::CHARGE_DISTRIBUTION),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Default,sipNm_BALL_BOUNDARY,const_cast<String *>(&FDPB::Default::BOUNDARY),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_DielectricSmoothing,sipNm_BALL_HARMONIC,const_cast<String *>(&FDPB::DielectricSmoothing::HARMONIC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_DielectricSmoothing,sipNm_BALL_UNIFORM,const_cast<String *>(&FDPB::DielectricSmoothing::UNIFORM),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_DielectricSmoothing,sipNm_BALL_NONE,const_cast<String *>(&FDPB::DielectricSmoothing::NONE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_ChargeDistribution,sipNm_BALL_UNIFORM,const_cast<String *>(&FDPB::ChargeDistribution::UNIFORM),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_ChargeDistribution,sipNm_BALL_TRILINEAR,const_cast<String *>(&FDPB::ChargeDistribution::TRILINEAR),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Boundary,sipNm_BALL_FOCUSING,const_cast<String *>(&FDPB::Boundary::FOCUSING),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Boundary,sipNm_BALL_DIPOLE,const_cast<String *>(&FDPB::Boundary::DIPOLE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Boundary,sipNm_BALL_COULOMB,const_cast<String *>(&FDPB::Boundary::COULOMB),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Boundary,sipNm_BALL_DEBYE,const_cast<String *>(&FDPB::Boundary::DEBYE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Boundary,sipNm_BALL_ZERO,const_cast<String *>(&FDPB::Boundary::ZERO),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_BOUNDING_BOX_UPPER,const_cast<String *>(&FDPB::Option::BOUNDING_BOX_UPPER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_BOUNDING_BOX_LOWER,const_cast<String *>(&FDPB::Option::BOUNDING_BOX_LOWER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_UPPER,const_cast<String *>(&FDPB::Option::UPPER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_LOWER,const_cast<String *>(&FDPB::Option::LOWER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_MAX_ITERATIONS,const_cast<String *>(&FDPB::Option::MAX_ITERATIONS),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_CHECK_AFTER_ITERATIONS,const_cast<String *>(&FDPB::Option::CHECK_AFTER_ITERATIONS),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_MAX_CRITERION,const_cast<String *>(&FDPB::Option::MAX_CRITERION),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_RMS_CRITERION,const_cast<String *>(&FDPB::Option::RMS_CRITERION),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_OFFSET,const_cast<String *>(&FDPB::Option::OFFSET),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_DIELECTRIC_SMOOTHING,const_cast<String *>(&FDPB::Option::DIELECTRIC_SMOOTHING),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_CHARGE_DISTRIBUTION,const_cast<String *>(&FDPB::Option::CHARGE_DISTRIBUTION),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_BOUNDARY,const_cast<String *>(&FDPB::Option::BOUNDARY),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_TEMPERATURE,const_cast<String *>(&FDPB::Option::TEMPERATURE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_ION_RADIUS,const_cast<String *>(&FDPB::Option::ION_RADIUS),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_PROBE_RADIUS,const_cast<String *>(&FDPB::Option::PROBE_RADIUS),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_SOLVENT_DC,const_cast<String *>(&FDPB::Option::SOLVENT_DC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_SOLUTE_DC,const_cast<String *>(&FDPB::Option::SOLUTE_DC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_IONIC_STRENGTH,const_cast<String *>(&FDPB::Option::IONIC_STRENGTH),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_BORDER,const_cast<String *>(&FDPB::Option::BORDER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_SPACING,const_cast<String *>(&FDPB::Option::SPACING),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_PRINT_TIMING,const_cast<String *>(&FDPB::Option::PRINT_TIMING),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_FDPB_Option,sipNm_BALL_VERBOSITY,const_cast<String *>(&FDPB::Option::VERBOSITY),sipClass_String);
    sipAddClassInstance(sipModuleDict,sipNm_BALL_PTE,&PTE,sipClass_PTE_);
    sipAddClassInstance((PyObject *)sipClass_ParameterSection,sipNm_BALL_UNDEFINED,const_cast<String *>(&ParameterSection::UNDEFINED),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_INIFile,sipNm_BALL_HEADER,const_cast<String *>(&INIFile::HEADER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_INIFile,sipNm_BALL_UNDEFINED,const_cast<String *>(&INIFile::UNDEFINED),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_WHITESPACE,const_cast<String *>(&RegularExpression::WHITESPACE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_UPPERCASE,const_cast<String *>(&RegularExpression::UPPERCASE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_NON_WHITESPACE,const_cast<String *>(&RegularExpression::NON_WHITESPACE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_NON_NUMERIC,const_cast<String *>(&RegularExpression::NON_NUMERIC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_NON_ALPHANUMERIC,const_cast<String *>(&RegularExpression::NON_ALPHANUMERIC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_NON_ALPHA,const_cast<String *>(&RegularExpression::NON_ALPHA),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_LOWERCASE,const_cast<String *>(&RegularExpression::LOWERCASE),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_HEXADECIMAL_INTEGER,const_cast<String *>(&RegularExpression::HEXADECIMAL_INTEGER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_INTEGER,const_cast<String *>(&RegularExpression::INTEGER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_IDENTIFIER,const_cast<String *>(&RegularExpression::IDENTIFIER),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_REAL,const_cast<String *>(&RegularExpression::REAL),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_ALPHANUMERIC,const_cast<String *>(&RegularExpression::ALPHANUMERIC),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_RegularExpression,sipNm_BALL_ALPHA,const_cast<String *>(&RegularExpression::ALPHA),sipClass_String);
    sipAddClassInstance((PyObject *)sipClass_PreciseTime,sipNm_BALL_ZERO,const_cast<PreciseTime *>(&PreciseTime::ZERO),sipClass_PreciseTime);
    sipAddClassInstance(sipModuleDict,sipNm_BALL_globalHandler,&globalHandler,sipClass_GlobalExceptionHandler);
}

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSOrderedSet, SCNAuthoringEnvironment, SCNBillboardConstraint, SCNNode;

@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSOrderedSet *_targets;
    SCNNode *_node;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _xAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _yAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _xyPlaneToYZPlaneTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _xyPlaneToXZPlaneTransform
    unsigned short _selectedAxis;
    // Error parsing type: (?="axisMove"{?="originalPosition""axisDirection""mouseDeltaVector"}"planeMove"{?="originalPosition""planeNormal""pointInPlane""mouseDeltaVector"}"axisRotate"{?="rotationSign"f"originalRotation"}), name: _actionData
    BOOL _isMouseDown;
    BOOL _readonly;
    unsigned long long _lastModifierFlags;
    unsigned short _action;
    struct CGPoint _originalMouseLocation;
    struct {
        void *positions;
        void *orientations;
        struct CATransform3D *originalLocalMatrix;
        void *scales;
    } _originalData;
    unsigned int _originalDataCount;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _worldInitialMatrix
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _worldMatrix
    long long _snapToAlignCount;
    CDStruct_962da47d *_snapToAlignOnX;
    CDStruct_962da47d *_snapToAlignOnY;
    CDStruct_962da47d *_snapToAlignOnZ;
    NSMutableIndexSet *_snapXIndexes;
    NSMutableIndexSet *_snapYIndexes;
    NSMutableIndexSet *_snapZIndexes;
    long long _xAlignment;
    long long _yAlignment;
    long long _zAlignment;
    SCNNode *_planarTranslationHandleXY;
    SCNNode *_planarTranslationHandleYZ;
    SCNNode *_planarTranslationHandleXZ;
    SCNNode *_planarTranslationHandles;
    SCNNode *_axis;
    SCNNode *_arcHandleXY;
    SCNNode *_arcHandleYZ;
    SCNNode *_arcHandleXZ;
    SCNNode *_arcHandles;
    SCNNode *_scaleNode;
    SCNNode *_screenSpaceRotation;
    SCNNode *_highlightNode;
    // Error parsing type: , name: _planarTranslationLayout
    BOOL _layoutLocked;
    SCNNode *_zArrow;
    SCNNode *_rotationHandles;
    SCNNode *_occluder;
    SCNNode *_translateHandles;
    SCNBillboardConstraint *_billboard;
    NSOrderedSet *_cloneSet;
    BOOL _cloning;
    unsigned long long _features;
}

@property(nonatomic) long long zAlignment; // @synthesize zAlignment=_zAlignment;
@property(nonatomic) long long yAlignment; // @synthesize yAlignment=_yAlignment;
@property(nonatomic) long long xAlignment; // @synthesize xAlignment=_xAlignment;
@property(nonatomic) BOOL readonly; // @synthesize readonly=_readonly;
-     // Error parsing type: 116@0:816{SCNVector3=ddd}32d56B646884^B100^q108, name: _snapPositionToAlign:original:unit:axisMove:rayStart:rayDir:didSnap:snapIndexes:
- (void)prepareSnapToAlignDataIfNeeded;
- (void)prepareSnapToAlignData;
- (void)_prepareSnapToAlignData:(unsigned short)arg1 minOffset:maxOffset: /* Error: Ran out of types for this method. */;
- (const CDStruct_962da47d *)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2;
- (id)snapGuideIndexesOnAxis:(unsigned long long)arg1;
- (void)_updateCloneStateWithEvent:(CDStruct_8e4f4b1c)arg1;
- (id)setupClones;
- (void)validateClones;
- (void)addClonesToScene;
- (void)removeClonesFromScene;
- (id)scene;
- (BOOL)mouseUp:(CDStruct_8e4f4b1c)arg1;
- (BOOL)mouseDown:(CDStruct_8e4f4b1c)arg1;
- (BOOL)mouseDragged:(CDStruct_8e4f4b1c)arg1;
- (void)clearSnapIndexes;
- (BOOL)_applyWithEvent:(CDStruct_8e4f4b1c)arg1;
- (void)_deleteOriginalData;
- (void)_saveOriginalData;
- (void)updateItemsScale:(float)arg1;
- (void)updateItemsRotation: /* Error: Ran out of types for this method. */;
- (void)updateItemsPosition;
- (BOOL)mouseMoved:(CDStruct_8e4f4b1c)arg1;
- (void)_updateActionWithEvent:(CDStruct_8e4f4b1c)arg1;
- (id)hitTest:(CDStruct_8e4f4b1c)arg1;
- (void)unhighlightSelectedNode;
- (void)unlockLayout;
- (void)lockLayout;
@property(nonatomic) unsigned long long features;
- (void)updateManipulatorComponents;
- (void)editingSpaceChanged;
- (void)updateManipulatorNode;
- (void)updateManipulatorPosition:(struct __C3DEngineContext *)arg1;
- (void)setupNode;
@property(readonly) SCNNode *manipulatorNode;
- (BOOL)isDragging;
- (long long)effectiveEditingSpace;
- (id)copy;
- (void)dealloc;
- (id)init;
@property(readonly) struct CATransform3D transform;
- (void)_setAuthoringEnvironment:(id)arg1;
@property(readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property(retain, nonatomic) SCNNode *target;
@property(retain, nonatomic) NSOrderedSet *targets;

@end


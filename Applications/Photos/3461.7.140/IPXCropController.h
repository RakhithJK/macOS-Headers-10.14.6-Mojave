//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PAImaging/PACropController.h>

#import "IPXCoordinateConversionDelegate-Protocol.h"
#import "IPXCropStraightenOverlayDelegate-Protocol.h"
#import "IPXEditToolbarAnimation-Protocol.h"

@class CropInteractionContext, IPXCropStraightenOverlayController, IPXDelayedTimer, IPXViewerImageController, NSString, NSUndoManager;
@protocol IPXCropControllerDelegate, IPXEditUndoRedoDelegate;

@interface IPXCropController : PACropController <IPXCropStraightenOverlayDelegate, IPXCoordinateConversionDelegate, IPXEditToolbarAnimation>
{
    unsigned long long _animationIndex;
    unsigned long long _animationStep;
    struct CGRect _beginViewRect;
    unsigned long long _beginVertexID;
    BOOL _beginAspectIsFreeForm;
    BOOL _compoundGestureActive;
    id <IPXEditUndoRedoDelegate> _undoRedoDelegate;
    IPXDelayedTimer *_animationTimer;
    struct CGPoint _stashedCropRectPoint;
    CropInteractionContext *_magnifyInteraction;
    BOOL _cropAnimationInProgress;
    IPXViewerImageController *_viewerImageController;
    IPXCropStraightenOverlayController *_cropOverlayController;
    NSUndoManager *_contextualUndoManager;
    id <IPXCropControllerDelegate> _cropDelegate;
    struct CGRect _targetCropFrame;
}

+ (struct CGRect)computeInputExtentWithImageController:(id)arg1;
+ (BOOL)_showTimingInformation;
+ (void)setupNewItemController:(id)arg1;
+ (void)initialize;
@property struct CGRect targetCropFrame; // @synthesize targetCropFrame=_targetCropFrame;
@property BOOL cropAnimationInProgress; // @synthesize cropAnimationInProgress=_cropAnimationInProgress;
@property __weak id <IPXCropControllerDelegate> cropDelegate; // @synthesize cropDelegate=_cropDelegate;
@property(retain, nonatomic) NSUndoManager *contextualUndoManager; // @synthesize contextualUndoManager=_contextualUndoManager;
@property(readonly) IPXCropStraightenOverlayController *cropOverlayController; // @synthesize cropOverlayController=_cropOverlayController;
@property(readonly) IPXViewerImageController *viewerImageController; // @synthesize viewerImageController=_viewerImageController;
- (void).cxx_destruct;
- (struct CGPoint)viewPointFromContentPoint:(struct CGPoint)arg1;
- (struct CGPoint)contentPointFromViewPoint:(struct CGPoint)arg1;
- (double)contentScale;
- (id)_itemViewConfigurationForConversion;
- (void)_registerUndo;
- (void)didExit;
- (void)_removeAutoCalcSettings;
- (void)_willExit;
- (void)willExit:(CDUnknownBlockType)arg1;
- (void)willExit;
- (void)didEnter;
- (void)_willEnter;
- (void)willEnter:(CDUnknownBlockType)arg1;
- (void)willEnter;
- (BOOL)_shouldAutoApplyStraightenCrop;
- (id)_viewConfigurationToAnimateInFrom;
- (id)viewConfigurationToAnimateOutTo;
- (CDUnknownBlockType)animationOutCompletion;
- (CDUnknownBlockType)animationOut;
- (CDUnknownBlockType)preAnimationOut;
- (CDUnknownBlockType)animationInCompletion;
- (CDUnknownBlockType)animationIn;
- (CDUnknownBlockType)preAnimationIn;
- (void)setAutoValues;
- (void)_didFinishComputingAutoValues;
- (void)_applyAutoValues;
- (void)applyAutoValuesIfNeeded;
- (void)applyAutoValues;
- (void)_logAutoStraightenCropTimingInfo:(id)arg1;
- (double)currentViewZoom;
- (void)commitCrop;
- (void)reset;
- (void)endCompoundInteractive;
- (void)beginCompoundInteractive;
- (void)endInteractive;
- (void)beginInteractiveWithContext:(id)arg1;
- (void)updateAspectRatio:(CDStruct_4bcfbbae)arg1;
- (void)cropDidChange;
- (void)imageViewFrameDidChange;
- (void)_animateMoveCropRectPoint:(struct CGPoint)arg1 direction:(struct CGVector)arg2 anchor:(struct CGPoint)arg3;
- (void)moveCropRectPoint:(struct CGPoint)arg1 by:(struct CGVector)arg2 anchor:(struct CGPoint)arg3;
- (unsigned long long)_viewRectConstraintFromAnchor:(struct CGPoint)arg1;
- (id)viewsToFadeWhenStartingCropWithOverlay:(id)arg1;
- (void)overlayDidEndGestures:(id)arg1;
- (void)overlayWillBeginGestures:(id)arg1;
- (void)overlayDidEndMagnification:(id)arg1;
- (void)overlay:(id)arg1 didUpdateMagnification:(double)arg2;
- (void)overlayDidBeginMagnification:(id)arg1;
- (void)overlayDidEndPan:(id)arg1;
- (void)overlay:(id)arg1 didPan:(struct CGVector)arg2;
- (void)overlayDidBeginPan:(id)arg1;
- (void)overlayDidEndCrop:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)overlayDidStartCrop:(id)arg1 modKeyState:(unsigned long long)arg2;
- (void)overlayDidEndStraighten:(id)arg1;
- (void)overlay:(id)arg1 didSetStraightenAngle:(double)arg2;
- (void)overlayDidBeginStraighten:(id)arg1;
- (void)overlay:(id)arg1 didUpdateCropRect:(struct CGRect)arg2 delta:(struct CGVector)arg3 handle:(long long)arg4;
- (id)normalConfigurationToLoad;
- (id)cropConfigurationToLoad;
- (void)_animateUpdateViewDelayed:(BOOL)arg1 multiplier:(double)arg2;
- (void)animateUpdateViewDelayed:(BOOL)arg1;
- (void)animateUpdateView;
- (void)updateCropOverlayAnimated:(BOOL)arg1;
- (struct CGPoint)_centeredContentAnchorWithConfiguration:(id)arg1;
- (void)_updateViewForViewCropRect:(struct CGRect)arg1;
- (void)updateView;
- (void)_updateViewRecenter:(BOOL)arg1;
- (BOOL)_safeToUpdate;
- (void)dealloc;
- (id)initWithImageViewController:(id)arg1 undoRedoDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


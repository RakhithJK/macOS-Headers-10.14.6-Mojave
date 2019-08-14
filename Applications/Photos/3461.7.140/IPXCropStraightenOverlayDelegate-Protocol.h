//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXCropStraightenOverlayController, NSArray;

@protocol IPXCropStraightenOverlayDelegate <NSObject>
- (void)overlay:(IPXCropStraightenOverlayController *)arg1 didPan:(struct CGVector)arg2;
- (void)overlay:(IPXCropStraightenOverlayController *)arg1 didUpdateCropRect:(struct CGRect)arg2 delta:(struct CGVector)arg3 handle:(long long)arg4;
- (void)overlayDidEndCrop:(IPXCropStraightenOverlayController *)arg1 cropRect:(struct CGRect)arg2;
- (void)overlayDidStartCrop:(IPXCropStraightenOverlayController *)arg1 modKeyState:(unsigned long long)arg2;

@optional
- (NSArray *)viewsToFadeWhenStartingCropWithOverlay:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayDidEndGestures:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayWillBeginGestures:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayDidEndStraighten:(IPXCropStraightenOverlayController *)arg1;
- (void)overlay:(IPXCropStraightenOverlayController *)arg1 didSetStraightenAngle:(double)arg2;
- (void)overlayDidBeginStraighten:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayDidEndMagnification:(IPXCropStraightenOverlayController *)arg1;
- (void)overlay:(IPXCropStraightenOverlayController *)arg1 didUpdateMagnification:(double)arg2;
- (void)overlayDidBeginMagnification:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayDidEndPan:(IPXCropStraightenOverlayController *)arg1;
- (void)overlayDidBeginPan:(IPXCropStraightenOverlayController *)arg1;
@end

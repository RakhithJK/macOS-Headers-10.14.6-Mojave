//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Tile, WVHotCorners;

@interface _TtC4Dock8WVExpose : NSObject
{
    // Error parsing type: , name: disabled
    // Error parsing type: , name: hotCorners
    // Error parsing type: , name: exposeSpaceHeight
    // Error parsing type: , name: mode
    // Error parsing type: , name: _exitClosures
    // Error parsing type: , name: _preventExposeUntilExit
    // Error parsing type: , name: _cachedExposeDisplays
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL animating;
@property(nonatomic) long long mode; // @synthesize mode;
@property(nonatomic, readonly) BOOL isWindowsMode;
@property(nonatomic, readonly) BOOL exposeDragging;
@property(nonatomic, readonly) Tile *currentTile;
@property(nonatomic, readonly) struct CPSProcessSerNum currentPSN;
@property(nonatomic, readonly) WVHotCorners *hotCorners; // @synthesize hotCorners;
@property(nonatomic, readonly) BOOL disabled; // @synthesize disabled;
- (void)MissionControlSwitchToPreviousSpace:(unsigned int)arg1;
- (void)MissionControlSwitchToNextSpace:(unsigned int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSStatusItemPoofAnimator : NSPanel
{
    CALayer *_rootLayer;
    CALayer *_snapshotLayer;
}

- (void)startAnimatingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initForAnimatingWindow:(id)arg1;
- (id)initWithStatusItem:(id)arg1;
- (void)dealloc;
- (id)_generateSnapshotForWindow:(id)arg1;

@end


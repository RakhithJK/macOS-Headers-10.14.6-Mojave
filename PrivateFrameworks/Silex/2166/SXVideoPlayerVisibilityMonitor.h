//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SVVisibilityMonitoring-Protocol.h>

@class NSMutableArray, NSString, SVVisibilityMonitor;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SVVisibilityMonitoring>
{
    SVVisibilityMonitor *_visibilityMonitor;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
}

@property(readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property(readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property(readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property(retain, nonatomic) SVVisibilityMonitor *visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
- (void).cxx_destruct;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) __weak id object;
@property(readonly, nonatomic) BOOL appeared;
@property(readonly, nonatomic) unsigned long long state;
- (void)configureVisibilityMonitor:(id)arg1;
- (id)initWithVisibilityMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


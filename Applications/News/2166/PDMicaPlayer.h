//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CALayer, NSDictionary, NSString, NSTimer;
@protocol MicaPlayerDelegate;

@interface PDMicaPlayer : NSObject <NSCopying>
{
    BOOL _loopDuringPlayback;
    float _preferredPlaybackSpeed;
    id <MicaPlayerDelegate> _delegate;
    NSString *_path;
    CALayer *_rootLayer;
    double _retinaScale;
    double _documentDuration;
    NSDictionary *_publishedObjects;
    NSTimer *_playTimer;
}

+ (id)updatePublishedObjects:(id)arg1 toReferenceLayersInTree:(id)arg2 ratherThanLayersInTree:(id)arg3;
+ (BOOL)boolFromDictionary:(id)arg1 key:(id)arg2 defaultValue:(BOOL)arg3;
+ (id)rootDictForPath:(id)arg1;
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(retain, nonatomic) NSDictionary *publishedObjects; // @synthesize publishedObjects=_publishedObjects;
@property(nonatomic) BOOL loopDuringPlayback; // @synthesize loopDuringPlayback=_loopDuringPlayback;
@property(nonatomic) float preferredPlaybackSpeed; // @synthesize preferredPlaybackSpeed=_preferredPlaybackSpeed;
@property(nonatomic) double documentDuration; // @synthesize documentDuration=_documentDuration;
@property(nonatomic) double retinaScale; // @synthesize retinaScale=_retinaScale;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak id <MicaPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runPlayTimer:(id)arg1;
- (void)stopPlayTimer;
- (void)startPlayTimer;
- (void)notifyDelegateDidChangePlaybackTime;
- (void)notifyDelegateDidStopPlaying;
- (void)notifyDelegateDidStartPlaying;
@property(readonly, nonatomic) BOOL isPlaybackAtEnd;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) BOOL isPlaying;
- (void)pause;
- (void)play;
- (id)publishedObjectWithKey:(id)arg1 required:(BOOL)arg2;
- (id)publishedLayerWithKey:(id)arg1 required:(BOOL)arg2;
- (void)moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 animate:(BOOL)arg3;
- (void)removeFromSuperlayer;
- (void)addToLayer:(id)arg1 onTop:(BOOL)arg2 gravity:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2 rootLayer:(id)arg3 publishedObjects:(id)arg4;
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2;
- (id)initWithFileName:(id)arg1 retinaScale:(double)arg2;

@end


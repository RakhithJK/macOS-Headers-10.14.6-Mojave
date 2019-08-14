//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol IPXViewControllerToolbarDefining;

@interface IPXViewControllerToolbarMultiplexer : NSObject
{
    BOOL _willUpdate;
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    struct {
        char output;
    } _needsUpdateFlags;
    id <IPXViewControllerToolbarDefining> _output;
    NSString *_activeInputIdentifier;
    NSMutableDictionary *_inputs;
}

@property(readonly, nonatomic) NSMutableDictionary *inputs; // @synthesize inputs=_inputs;
@property(copy, nonatomic) NSString *activeInputIdentifier; // @synthesize activeInputIdentifier=_activeInputIdentifier;
@property(nonatomic) __weak id <IPXViewControllerToolbarDefining> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)_updateOutputIfNeeded;
- (void)_invalidateOutput;
- (void)_updateIfNeeded;
- (void)_handleDelayedUpdate;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (id)_inputForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)removeInputForIdentifier:(id)arg1;
- (id)inputForIdentifier:(id)arg1;
- (void)updateOutput;
- (id)init;

@end


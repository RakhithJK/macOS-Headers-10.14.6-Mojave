//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface AVProxyKVOObserver : NSObject
{
    id _retainedObservedObject;
    id _unsafeUnretainedObservedObject;
    BOOL _canHandleChanges;
    BOOL _includeInitialValue;
    BOOL _includeChanges;
    NSString *_token;
    NSSet *_keyPaths;
    CDUnknownBlockType _changesBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType changesBlock; // @synthesize changesBlock=_changesBlock;
@property(readonly, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(readonly, nonatomic) BOOL includeChanges; // @synthesize includeChanges=_includeChanges;
@property(readonly, nonatomic) BOOL includeInitialValue; // @synthesize includeInitialValue=_includeInitialValue;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 context:(void *)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(BOOL)arg4 includeInitialValue:(BOOL)arg5 includeChanges:(BOOL)arg6 changesBlock:(CDUnknownBlockType)arg7;

@end


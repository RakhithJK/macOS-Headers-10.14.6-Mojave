//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject
{
    BOOL _isListening;
    id <AXHALiveListenDelegate> _delegate;
    struct ComponentInstanceRecord *_rioUnit;
    struct ComponentInstanceRecord *_mixerUnit;
}

@property(nonatomic) BOOL isListening; // @synthesize isListening=_isListening;
@property(readonly, nonatomic) struct ComponentInstanceRecord *mixerUnit; // @synthesize mixerUnit=_mixerUnit;
@property(readonly, nonatomic) struct ComponentInstanceRecord *rioUnit; // @synthesize rioUnit=_rioUnit;
@property(nonatomic) __weak id <AXHALiveListenDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)stopListeningWithError:(id *)arg1;
- (BOOL)startListeningWithError:(id *)arg1;
- (float)audioLevel;

@end

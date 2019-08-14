//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIFocusTestDelegate;

@interface _UIFocusTest : NSObject
{
    BOOL _isApplicationTest;
    NSString *_identifier;
    long long _state;
    id <_UIFocusTestDelegate> _delegate;
    CDUnknownBlockType _runCompletionHandler;
}

+ (void)_setCurrentTest:(id)arg1;
+ (id)currentTest;
@property(nonatomic, getter=_isApplicationTest) BOOL isApplicationTest; // @synthesize isApplicationTest=_isApplicationTest;
@property(copy, nonatomic) CDUnknownBlockType runCompletionHandler; // @synthesize runCompletionHandler=_runCompletionHandler;
@property(nonatomic) __weak id <_UIFocusTestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_finish:(BOOL)arg1;
- (void)reset;
- (void)cancel;
- (void)stop;
- (void)main;
- (void)_start;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

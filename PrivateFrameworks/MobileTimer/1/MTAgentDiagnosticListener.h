//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class NSString;
@protocol MTAgentDiagnosticDelegate;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener>
{
    id <MTAgentDiagnosticDelegate> _delegate;
}

@property(nonatomic) __weak id <MTAgentDiagnosticDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addStateHandler;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


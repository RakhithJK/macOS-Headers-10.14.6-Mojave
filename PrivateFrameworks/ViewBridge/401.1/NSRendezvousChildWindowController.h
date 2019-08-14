//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSSemiAutonomousRendezvousWindowController.h>

__attribute__((visibility("hidden")))
@interface NSRendezvousChildWindowController : NSSemiAutonomousRendezvousWindowController
{
    unsigned int _childControllerInvalid:1;
    int _privateEventLoopKind;
}

+ (Class)comboBoxWindowClass;
+ (Class)correctionPanelClass;
@property(readonly) int privateEventLoopKind; // @synthesize privateEventLoopKind=_privateEventLoopKind;
- (id)initWithWindow:(id)arg1;
- (void)_endPrivateEventLoop;
- (void)invalidateWithError:(id)arg1;
- (void)invalidate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNKFaceTimeConstraintsController : NSObject
{
    // Error parsing type: , name: participantListState
    // Error parsing type: , name: localParticipantState
    // Error parsing type: , name: inCallControlsState
    // Error parsing type: , name: floatingControlsState
    // Error parsing type: , name: viewStateEffects
    // Error parsing type: , name: viewControllerLayout
}

- (void).cxx_destruct;
- (id)init;
- (void)updateConstraintsWith:(id)arg1 controlsViewController:(id)arg2 effectsView:(id)arg3 effectsBrowserViewController:(id)arg4;
- (void)removeEffectsConstraints;
- (void)updateFor:(struct CGRect)arg1 deviceOrientation:(long long)arg2;
@property(nonatomic) long long inCallControlsState; // @synthesize inCallControlsState;
@property(nonatomic) long long localParticipantState; // @synthesize localParticipantState;

@end


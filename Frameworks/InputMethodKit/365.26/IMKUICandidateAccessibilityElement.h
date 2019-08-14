//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <InputMethodKit/NSAccessibilityButton-Protocol.h>

@class IMKCandidate, NSString;
@protocol IMKUICandidateAccessibilityTarget;

@interface IMKUICandidateAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton>
{
    IMKCandidate *_candidate;
    struct CGRect _frame;
    id <IMKUICandidateAccessibilityTarget> _target;
}

@property(nonatomic) __weak id <IMKUICandidateAccessibilityTarget> target; // @synthesize target=_target;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) IMKCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGRect)accessibilityFrameInParentSpace;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (struct CGRect)accessibilityFrame;
- (id)initWithCandidate:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


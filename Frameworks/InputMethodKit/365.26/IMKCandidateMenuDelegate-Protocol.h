//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/NSObject-Protocol.h>

@class IMKCandidate;
@protocol IMKCandidateMenu;

@protocol IMKCandidateMenuDelegate <NSObject>
- (void)candidateMenu:(id <IMKCandidateMenu>)arg1 didSelectCandidate:(IMKCandidate *)arg2;
- (void)candidateMenu:(id <IMKCandidateMenu>)arg1 didChangeFocusTo:(IMKCandidate *)arg2;
@end


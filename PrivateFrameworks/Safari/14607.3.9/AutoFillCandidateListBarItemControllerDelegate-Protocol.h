//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class AutoFillCandidateListBarItemController, NSAttributedString, NSImage;

@protocol AutoFillCandidateListBarItemControllerDelegate <NSObject>

@optional
- (void)candidateListBarItemController:(AutoFillCandidateListBarItemController *)arg1 didSelectCandidateAtIndex:(unsigned long long)arg2;
- (NSAttributedString *)candidateListBarItemController:(AutoFillCandidateListBarItemController *)arg1 labelForCandidateAtIndex:(unsigned long long)arg2;
- (NSImage *)candidateListBarItemController:(AutoFillCandidateListBarItemController *)arg1 imageForCandidateAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfCandidatesForCandidateListBarItemController:(AutoFillCandidateListBarItemController *)arg1;
@end

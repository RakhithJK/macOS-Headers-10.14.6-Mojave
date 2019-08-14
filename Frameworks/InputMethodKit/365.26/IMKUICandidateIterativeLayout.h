//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIAbstractCandidateLayout.h>

@class NSMutableDictionary;

@interface IMKUICandidateIterativeLayout : IMKUIAbstractCandidateLayout
{
    unsigned long long _candidateIndex;
    unsigned long long _candidateGroupIndex;
    BOOL _complete;
    NSMutableDictionary *_indexPathToCandidateItemMapping;
}

@property(retain, nonatomic) NSMutableDictionary *indexPathToCandidateItemMapping; // @synthesize indexPathToCandidateItemMapping=_indexPathToCandidateItemMapping;
@property(nonatomic) unsigned long long candidateGroupIndex; // @synthesize candidateGroupIndex=_candidateGroupIndex;
@property(nonatomic) unsigned long long candidateIndex; // @synthesize candidateIndex=_candidateIndex;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (id)itemForIndexPath:(id)arg1;
- (void)prepareLayout;
- (struct CGSize)contentSize;
- (void)processCandidateItem:(id)arg1 stop:(char *)arg2;
- (void)didFinishIterating;
- (void)didFinishIteratingOverCandidateList:(id)arg1 title:(id)arg2;
- (void)didStartIteratingOverCandidateList:(id)arg1 title:(id)arg2;
- (BOOL)iterate;
- (void)setCandidateGroups:(id)arg1;

@end


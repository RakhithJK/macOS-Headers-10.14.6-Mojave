//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class LiFilter, RDModel, RDPerson, RDTable;
@protocol NSFastEnumeration;

@protocol RDPersonMergeCandidatesTraits
@property(readonly, nonatomic) RDTable *candidateTable;
- (void)removeCandidatePersons:(id <NSFastEnumeration>)arg1 fromPerson:(RDPerson *)arg2;
- (void)addCandidatePersons:(id <NSFastEnumeration>)arg1 toPerson:(RDPerson *)arg2;
- (long long)candidatePersonIdForPersonCandidateModel:(RDModel *)arg1;
- (long long)personIdForPersonCandidateModel:(RDModel *)arg1;
- (LiFilter *)candidateFilterForPersonId:(long long)arg1;
@end


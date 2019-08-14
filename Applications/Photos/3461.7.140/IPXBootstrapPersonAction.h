//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class NSArray, PXPeopleBootstrapContext, RDDatabase, RDPerson;

@interface IPXBootstrapPersonAction : RDDatabaseAccessAction
{
    RDPerson *_targetPerson;
    PXPeopleBootstrapContext *_bootstrapContext;
    NSArray *_confirmedPersons;
    NSArray *_rejectedPersons;
    RDDatabase *_database;
}

@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(readonly, copy, nonatomic) NSArray *rejectedPersons; // @synthesize rejectedPersons=_rejectedPersons;
@property(readonly, copy, nonatomic) NSArray *confirmedPersons; // @synthesize confirmedPersons=_confirmedPersons;
@property(retain, nonatomic) PXPeopleBootstrapContext *bootstrapContext; // @synthesize bootstrapContext=_bootstrapContext;
@property(retain, nonatomic) RDPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
- (void).cxx_destruct;
- (BOOL)canUndo;
- (id)namingAction;
- (int)performUndo;
- (int)performAction;
- (id)resourceObject;
- (id)initWithBootstrapContext:(id)arg1 confirmedCandidates:(id)arg2 rejectedCandidates:(id)arg3;

@end


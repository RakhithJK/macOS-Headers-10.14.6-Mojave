//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedMediaContext-Protocol.h>

@class NSString, NSURL, OCPPackage;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext>
{
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dataRep;
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


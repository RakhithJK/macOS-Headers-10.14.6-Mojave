//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/NSObject-Protocol.h>

@class VNFaceObservation, VNPersonsModel;
@protocol NSObject><NSCopying><NSSecureCoding;

@protocol VNPersonsModelDataSource <NSObject>
- (VNFaceObservation *)personsModel:(VNPersonsModel *)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 indexOfPersonWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (id <NSObject><NSCopying><NSSecureCoding>)personsModel:(VNPersonsModel *)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(VNPersonsModel *)arg1;

@optional
- (unsigned long long)lastDataChangeSequenceNumberForPersonsModel:(VNPersonsModel *)arg1;
@end

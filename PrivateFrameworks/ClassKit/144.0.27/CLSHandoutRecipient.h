//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSHandoutRecipient : CLSObject <CLSRelationable>
{
    NSString *_classID;
    NSString *_personID;
}

+ (BOOL)supportsSecureCoding;
+ (id)relations;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validateObject:(id *)arg1;
- (id)initWithClassID:(id)arg1 personID:(id)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *parentObjectID; // @dynamic parentObjectID;
@property(readonly) Class superclass;

@end


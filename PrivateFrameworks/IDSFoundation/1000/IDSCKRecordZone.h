//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    IDSCKRecordZoneID *_zoneID;
}

+ (id)alloc;
+ (Class)__class;
@property(readonly, nonatomic) IDSCKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;

@end


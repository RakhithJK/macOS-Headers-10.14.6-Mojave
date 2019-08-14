//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSSortDescriptor.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>
{
    CLLocation *_relativeLocation;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CLLocation *relativeLocation; // @synthesize relativeLocation=_relativeLocation;
- (void).cxx_destruct;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;

@end


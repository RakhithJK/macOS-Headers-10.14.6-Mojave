//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString, TUHandle;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>
{
    TUHandle *_handle;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToMember:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)representsSameMemberAs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *idsDestinations;
@property(readonly, copy, nonatomic) NSString *idsDestination;
@property(readonly, copy, nonatomic) NSSet *handles;
- (id)description;
- (id)initWithDestinations:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;
- (id)initWithHandles:(id)arg1;
- (id)initWithHandle:(id)arg1;

@end


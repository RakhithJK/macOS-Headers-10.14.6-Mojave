//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSError;

@interface AFSiriActivationResult : NSObject <NSCopying, NSSecureCoding>
{
    long long _actionType;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithActionType:(long long)arg1 error:(id)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end


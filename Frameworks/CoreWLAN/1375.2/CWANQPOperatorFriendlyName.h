//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreWLAN/CWANQPElement.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CWANQPOperatorFriendlyName : CWANQPElement <NSSecureCoding, NSCopying>
{
    NSArray *_operatorFriendlyNameList;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *operatorFriendlyNameList; // @synthesize operatorFriendlyNameList=_operatorFriendlyNameList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3;

@end


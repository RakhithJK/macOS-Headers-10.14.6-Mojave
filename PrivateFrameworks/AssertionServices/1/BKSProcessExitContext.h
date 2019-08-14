//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/BSXPCCoding-Protocol.h>
#import <AssertionServices/NSCopying-Protocol.h>
#import <AssertionServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSProcessExitContext : NSObject <BSXPCCoding, NSSecureCoding, NSCopying>
{
    unsigned long long _launchdExitReason;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long launchdExitReason; // @synthesize launchdExitReason=_launchdExitReason;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long exitReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


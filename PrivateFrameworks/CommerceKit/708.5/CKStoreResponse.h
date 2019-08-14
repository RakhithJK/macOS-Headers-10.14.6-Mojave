//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSSecureCoding-Protocol.h>

@class CKDialog, CKStoreAction, NSData, NSDictionary, NSError, NSString;

@interface CKStoreResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_MIMEType;
    NSDictionary *_bodyPlist;
    long long _httpStatusCode;
    NSDictionary *_headers;
    NSData *_body;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) CKStoreAction *action;
@property(readonly, copy, nonatomic) CKDialog *dialog;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSDictionary *bodyPlist;
- (id)_initWithURLResponse:(id)arg1 body:(id)arg2;

@end


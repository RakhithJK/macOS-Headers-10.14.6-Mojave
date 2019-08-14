//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SharedStreamInvitationToken : NSObject
{
    BOOL _isValid;
    NSURL *_invitationURL;
    NSString *_rawTokenString;
    NSString *_streamIdentifier;
    NSString *_ownerName;
    NSString *_streamName;
}

+ (id)tokenWithInvitationURL:(id)arg1;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property(copy) NSString *streamName; // @synthesize streamName=_streamName;
@property(copy) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy) NSString *streamIdentifier; // @synthesize streamIdentifier=_streamIdentifier;
@property(copy) NSString *rawTokenString; // @synthesize rawTokenString=_rawTokenString;
@property(copy) NSURL *invitationURL; // @synthesize invitationURL=_invitationURL;
- (void).cxx_destruct;
- (id)urlSafeBase64DecodeString:(id)arg1;
- (BOOL)hasOwnerAndStreamNames;
- (void)parseInvitationURL;
- (id)initWithInvitationURL:(id)arg1;

@end


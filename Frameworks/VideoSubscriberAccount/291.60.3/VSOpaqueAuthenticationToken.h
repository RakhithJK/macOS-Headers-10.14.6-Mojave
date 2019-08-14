//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAuthenticationToken-Protocol.h>

@class NSData, NSDate, NSString;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken>
{
    NSString *_body;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSData *serializedData;
- (BOOL)isFromUnsupportedProvider;
- (BOOL)isOpaque;
- (BOOL)isValid;
- (id)initWithSerializedData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


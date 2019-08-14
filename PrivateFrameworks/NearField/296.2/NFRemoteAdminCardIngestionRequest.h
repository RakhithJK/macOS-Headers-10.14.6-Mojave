//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding>
{
    NSString *_serverIdentifier;
    NSString *_uri;
    NSString *_sessionToken;
    NSDictionary *_cardServiceInfo;
    unsigned long long _maxDetectionTimeout;
}

+ (id)cardIngestionRequestWithServerIdentifier:(id)arg1 sessionToken:(id)arg2 readerModeMetadata:(id)arg3 maxDetectionTimeout:(unsigned long long)arg4;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long maxDetectionTimeout; // @synthesize maxDetectionTimeout=_maxDetectionTimeout;
@property(retain, nonatomic) NSDictionary *cardServiceInfo; // @synthesize cardServiceInfo=_cardServiceInfo;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


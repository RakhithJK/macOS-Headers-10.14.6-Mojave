//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXClassFactoryProtocol-Protocol.h>
#import <Silex/SXResource-Protocol.h>

@class NSString, NSURL;

@interface SXResource : SXJSONObject <SXResource, SXClassFactoryProtocol>
{
}

+ (id)typeString;
+ (void)initializeObject;
- (id)URLWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end


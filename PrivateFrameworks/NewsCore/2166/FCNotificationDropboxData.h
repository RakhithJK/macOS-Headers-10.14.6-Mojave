//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNotificationDropboxData-Protocol.h>

@class NSDictionary, NSString;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData>
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *storefrontID;
@property(readonly, copy, nonatomic) NSString *deviceToken;
@property(readonly, copy, nonatomic) NSString *notificationUserID;
@property(readonly, copy, nonatomic) NSString *baseURLString;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


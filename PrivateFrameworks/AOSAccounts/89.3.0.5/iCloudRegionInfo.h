//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSAccounts/NSCopying-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface iCloudRegionInfo : NSObject <NSCopying>
{
    NSDictionary *_regionInfoDictionary;
}

@property(readonly, nonatomic) NSString *displayedHostname;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDisplayNameInfo, NSString;

@interface _MCDisplayNameInfoCacheItem : NSObject
{
    MCDisplayNameInfo *_info;
    NSString *_rawAddress;
}

@property(readonly, copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
@property(readonly, nonatomic) MCDisplayNameInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInfo:(id)arg1 address:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSSharedImageCacheType-Protocol.h"

@class NSString;

@interface FRSharedImageCache : NSObject <TSSharedImageCacheType>
{
    BOOL _persistenceEnabled;
    NSString *_rootPath;
}

@property(nonatomic) BOOL persistenceEnabled; // @synthesize persistenceEnabled=_persistenceEnabled;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void).cxx_destruct;
- (void)cache:(id)arg1 forKey:(id)arg2;
- (id)fetchImageForKey:(id)arg1;
- (void)pruneImagesOlderThan:(double)arg1;
- (id)_imageAtPath:(id)arg1;
- (id)init;
- (id)initWithPersistenceEnabled:(BOOL)arg1;

@end


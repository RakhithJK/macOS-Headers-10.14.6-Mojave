//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, RDDatabase;

@interface RDVersionSearchIndexUpdaterDataCache : NSObject
{
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_faceNamesCache;
    NSMutableDictionary *_keywordCache;
    NSMutableDictionary *_sceneNodesCache;
    NSMutableDictionary *_sceneEdgesCache;
    RDDatabase *_cacheDatabase;
}

+ (id)cacheForDatabase:(id)arg1 create:(BOOL)arg2;
+ (void)delayedClearCaches;
@property(readonly) RDDatabase *cacheDatabase; // @synthesize cacheDatabase=_cacheDatabase;
@property(readonly) NSMutableDictionary *sceneEdgesCache; // @synthesize sceneEdgesCache=_sceneEdgesCache;
@property(readonly) NSMutableDictionary *sceneNodesCache; // @synthesize sceneNodesCache=_sceneNodesCache;
@property(readonly) NSMutableDictionary *keywordCache; // @synthesize keywordCache=_keywordCache;
@property(readonly) NSMutableDictionary *faceNamesCache; // @synthesize faceNamesCache=_faceNamesCache;
- (void).cxx_destruct;
@property(readonly) NSDateFormatter *dateFormatter;
- (id)initWithDatabase:(id)arg1;

@end

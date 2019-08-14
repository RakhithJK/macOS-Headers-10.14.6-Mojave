//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCContentContext;

@interface FCArticleController : NSObject
{
    id <FCContentContext> _context;
}

@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1;
- (id)articleWithHeadline:(id)arg1;
- (id)articleWithID:(id)arg1 forceArticleUpdate:(BOOL)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4;
- (id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3;
- (id)articleWithID:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end


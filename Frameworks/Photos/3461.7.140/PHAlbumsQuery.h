//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHQuery.h>

@class RDAlbumsQuery;

@interface PHAlbumsQuery : PHQuery
{
    RDAlbumsQuery *_query;
}

+ (id)propertyPathsFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
+ (Class)objectClassForFetchResults;
- (void).cxx_destruct;
- (BOOL)changedByModelChangeGroups:(id)arg1;
- (id)resolveModels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForTopLevelCollectionsInPhotoLibrary:(id)arg1 fetchOptions:(id)arg2;
- (id)initWithFilter:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3;

@end

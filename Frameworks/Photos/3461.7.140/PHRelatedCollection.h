//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSArray, NSString, PHObject;

@interface PHRelatedCollection : PHAssetCollection
{
    long long _titleCategory;
    unsigned long long _relationType;
    NSArray *_debugInfo;
    PHObject *_relatedObject;
    NSArray *_momentLocalIdentifiers;
    NSString *_subtitle;
}

+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSArray *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
@property(readonly, nonatomic) PHObject *relatedObject; // @synthesize relatedObject=_relatedObject;
@property(readonly, nonatomic) NSArray *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, nonatomic) unsigned long long relationType; // @synthesize relationType=_relationType;
- (void).cxx_destruct;
- (long long)assetCollectionType;
- (long long)titleCategory;
- (id)localizedSubtitle;
- (id)initTransientWithAssets:(id)arg1 relatedObject:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleCategory:(long long)arg5 momentLocalIdentifiers:(id)arg6 photoLibrary:(id)arg7;
- (id)initTransientWithFetchResult:(id)arg1 relatedObject:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleCategory:(long long)arg5 momentLocalIdentifiers:(id)arg6;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSDictionary, NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager
{
    NSMutableDictionary *_fileURLsBySection;
}

@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void).cxx_destruct;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;
- (void)_createDataSource;
- (id)initWithFileURLsBySection:(id)arg1;

@end


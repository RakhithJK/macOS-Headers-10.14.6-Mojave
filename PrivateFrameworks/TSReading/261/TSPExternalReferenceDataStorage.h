//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSPFileDataStorage.h>

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReadable) BOOL readable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)storageForDataCopyFromOtherContext;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end


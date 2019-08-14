//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItemManager, NSArray, NSString;

@interface FPFetchThumbnailsOperation : FPOperation <NSSecureCoding>
{
    NSArray *_itemIdentifiers;
    struct CGSize _size;
    double _scale;
    FPItemManager *_itemManager;
    NSString *_providerIdentifier;
    CDUnknownBlockType _perThumbnailCompletionBlock;
    CDUnknownBlockType _thumbnailsFetchCompletionBlock;
    CDUnknownBlockType _perThumbnailCompletionBlock_v2;
    CDUnknownBlockType _thumbnailsFetchCompletionBlock_v2;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType thumbnailsFetchCompletionBlock_v2; // @synthesize thumbnailsFetchCompletionBlock_v2=_thumbnailsFetchCompletionBlock_v2;
@property(copy, nonatomic) CDUnknownBlockType perThumbnailCompletionBlock_v2; // @synthesize perThumbnailCompletionBlock_v2=_perThumbnailCompletionBlock_v2;
@property(copy, nonatomic) CDUnknownBlockType thumbnailsFetchCompletionBlock; // @synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perThumbnailCompletionBlock; // @synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)transformData:(id)arg1 forLegacyCompletionBlockWithType:(id)arg2;
- (void)main;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithItemManager:(id)arg1 providerIdentifier:(id)arg2 itemThumbnailIdentifiers:(id)arg3 size:(struct CGSize)arg4 scale:(double)arg5;
- (id)_initWithItemIdentifiers:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end


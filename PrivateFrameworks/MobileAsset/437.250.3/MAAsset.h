//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MAAsset : NSObject
{
    NSDictionary *_attributes;
    NSString *_assetType;
    NSString *_assetId;
    long long _state;
}

+ (void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(CDUnknownBlockType)arg3;
+ (void)startCatalogDownload:(id)arg1 then:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (BOOL)isEqual:(id)arg1;
- (_Bool)refreshState;
- (_Bool)spaceCheck:(long long *)arg1;
- (long long)configDownloadSync:(id)arg1;
- (void)configDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)cancelDownloadSync;
- (void)cancelDownload:(CDUnknownBlockType)arg1;
- (long long)purgeSync;
- (void)purge:(CDUnknownBlockType)arg1;
- (void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(CDUnknownBlockType)arg3;
- (long long)calculateTimeout;
- (void)startDownload:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)startDownload:(CDUnknownBlockType)arg1;
- (id)createExtractor;
- (id)hashToString:(id)arg1;
- (void)startDownloadWithExtractor:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startDownloadWithExtractor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logAsset;
- (id)assetProperty:(id)arg1;
- (id)getLocalUrl;
- (id)getLocalFileUrl;
- (void)attachProgressCallBack:(CDUnknownBlockType)arg1;
- (id)assetServerUrl;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end


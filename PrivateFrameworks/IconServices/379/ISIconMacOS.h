//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISIconMacOS : ISIcon
{
    struct _LSBinding *_binding;
    CDStruct_cbacfc36 _validationToken;
    NSMapTable *_bitmapIDByImageDescriptor;
    NSObject<OS_dispatch_queue> *_validationQueue;
    struct os_unfair_lock_s _bitmapIDByImageDescriptorLock;
}

+ (id)sharedValidationQueue;
+ (id)genericAppIcon;
+ (id)genericFolderIcon;
+ (id)genericDocumentIcon;
+ (id)placeholderIcon;
+ (id)notLoadedIcon;
@property(readonly) struct os_unfair_lock_s bitmapIDByImageDescriptorLock; // @synthesize bitmapIDByImageDescriptorLock=_bitmapIDByImageDescriptorLock;
@property(readonly) NSMapTable *bitmapIDByImageDescriptor; // @synthesize bitmapIDByImageDescriptor=_bitmapIDByImageDescriptor;
@property CDStruct_cbacfc36 validationToken; // @synthesize validationToken=_validationToken;
@property struct _LSBinding *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (double)_aspectRatio;
- (BOOL)_shouldInvalidate;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForImageDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (id)requestForDescriptor:(id)arg1;
- (id)noIOImageWithGenerationRequest:(id)arg1;
- (void)updateBitmapIDForGenerationRequest:(id)arg1 forceFetch:(BOOL)arg2;
- (void)setBitmapUUID:(id)arg1 forGenerationRequest:(id)arg2;
- (id)bitmapUUIDForImageDescriptor:(id)arg1;
- (id)placeholderImageWithImageDescriptor:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *validationQueue; // @synthesize validationQueue=_validationQueue;
- (id)description;
- (struct _LSBinding *)_variantBindingWithDescriptor:(id)arg1;
- (unsigned long long)_badgeOptions;
- (unsigned long long)_variantOptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIcon:(id)arg1;
- (void)dealloc;
- (id)initWithBinding:(struct _LSBinding *)arg1;
- (id)_init;
- (id)initWithResourceProxy:(id)arg1;
- (id)initWithContentOfURL:(id)arg1;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithIcns:(id)arg1;
- (id)initWithModelCode:(id)arg1;
- (id)initWithMIMEType:(id)arg1;
- (id)initWithTypeCode:(unsigned int)arg1;
- (id)initWithFileExtension:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithURL:(id)arg1;

@end


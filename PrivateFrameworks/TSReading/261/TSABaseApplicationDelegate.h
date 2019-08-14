//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSKApplicationDelegate.h>

@class NSArray, NSString, TSADocumentRoot;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate
{
    TSADocumentRoot *mDocumentRoot;
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (void)presentAlertController:(id)arg1 animated:(BOOL)arg2;
+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) TSADocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (id)validURLSchemes;
- (id)invalidURLSchemes;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
@property(readonly, nonatomic) NSArray *applicationTemplateVariants;
- (void)registerDefaults;
- (BOOL)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;
- (void)persistenceError:(id)arg1;
- (Class)documentRootClass;
- (void)dealloc;
- (id)init;

@end


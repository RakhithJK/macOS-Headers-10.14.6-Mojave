//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPDocument, SPInfoDisplayList, SPInfoMacVariant, SPInfoMemory, SPInfoSystem;

@interface SPInfoData : NSObject
{
    SPDocument *_spDoc;
    SPInfoSystem *_systemInfo;
    SPInfoMemory *_memoryInfo;
    SPInfoMacVariant *_variantInfo;
    SPInfoDisplayList *_displaysInfo;
    SPDocument *_spDocument;
}

+ (id)sharedData;
@property(readonly) SPDocument *spDocument; // @synthesize spDocument=_spDocument;
- (void)openTaggedPCIHelpURL;
- (void)openTaggedMemoryHelpURL;
- (void)openMonitorManualURL:(id)arg1;
- (void)openMemoryHelpURL;
- (id)opticalInfo;
- (id)disksInfo;
- (void)buyAppleCare;
- (void)openServiceURL;
- (void)openWarrantyURL;
- (void)openOSHelp;
- (void)openOSManualURL;
- (void)openOSSupportURL;
- (void)openSpecsURL;
- (void)openManualURL;
- (void)openSupportURL;
@property(readonly) NSString *macVariant;
- (void)setDisplaysInfoChanged;
@property(readonly) SPInfoDisplayList *displaysInfo;
@property(readonly) SPInfoMacVariant *variantInfo;
@property(readonly) SPInfoMemory *memoryInfo;
@property(readonly) SPInfoSystem *systemInfo;
- (void)dealloc;

@end


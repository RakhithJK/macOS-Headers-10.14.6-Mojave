//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class NSSet;

@interface FIFinderSyncController : NSExtensionContext
{
}

+ (void)showExtensionManagementInterface;
+ (BOOL)isExtensionEnabled;
+ (id)defaultController;
- (void)setTagData:(id)arg1 forItemWithURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tagDataForItemWithURL:(id)arg1;
- (void)setLastUsedDate:(id)arg1 forItemWithURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)lastUsedDateForItemWithURL:(id)arg1;
- (id)selectedItemURLs;
- (id)targetedURL;
@property(copy) NSSet *directoryURLs; // @dynamic directoryURLs;
- (void)setBadgeIdentifier:(id)arg1 forURL:(id)arg2;
- (void)setBadgeImage:(id)arg1 label:(id)arg2 forBadgeIdentifier:(id)arg3;

@end


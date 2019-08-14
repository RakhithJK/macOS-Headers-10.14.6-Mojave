//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FunctionBarFavoritesVending-Protocol.h>

@class CombinedFavoritesController, NSString, WebBookmarkList;
@protocol FunctionBarFavoritesClient;

__attribute__((visibility("hidden")))
@interface FunctionBarFavoritesVendor : NSObject <FunctionBarFavoritesVending>
{
    CombinedFavoritesController *_combinedFavoritesController;
    id <FunctionBarFavoritesClient> _client;
    WebBookmarkList *_vendedFolder;
}

@property(nonatomic) __weak id <FunctionBarFavoritesClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_favoritesDidChange:(id)arg1;
- (void)_notifyClientOfRefresh;
- (id)_defaultVendedFolder;
- (void)getFunctionBarFavoritesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canNavigateUp;
@property(retain, nonatomic) WebBookmarkList *vendedFolder; // @synthesize vendedFolder=_vendedFolder;
- (void)dealloc;
- (id)initWithCombinedFavoritesController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


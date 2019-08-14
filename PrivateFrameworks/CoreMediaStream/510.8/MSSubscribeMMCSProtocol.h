//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSMMCSProtocol.h>

#import <CoreMediaStream/MSSubscribeStorageProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol MSSubscribeStorageProtocolDelegate;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol>
{
    id <MSSubscribeStorageProtocolDelegate> _delegate;
    unsigned long long _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

@property(nonatomic) id <MSSubscribeStorageProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_requestCompleted;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)retrieveAssets:(id)arg1;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

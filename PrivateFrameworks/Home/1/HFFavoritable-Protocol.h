//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFFavoritable <NSObject>
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
- (NAFuture *)hf_updateIsFavorite:(BOOL)arg1;
@end


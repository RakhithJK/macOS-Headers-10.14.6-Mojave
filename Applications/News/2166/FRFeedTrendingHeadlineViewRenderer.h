//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedHeadlineViewRendererType-Protocol.h"

@class NFLFontCache, NSString;
@protocol FRFeedHeadlineViewRendererType;

@interface FRFeedTrendingHeadlineViewRenderer : NSObject <FRFeedHeadlineViewRendererType>
{
    NFLFontCache *_fontCache;
    id <FRFeedHeadlineViewRendererType> _parentRenderer;
}

@property(readonly, nonatomic) id <FRFeedHeadlineViewRendererType> parentRenderer; // @synthesize parentRenderer=_parentRenderer;
@property(readonly, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
- (void).cxx_destruct;
- (void)resetView:(id)arg1;
- (void)renderView:(id)arg1 withTileInfo:(id)arg2 layoutAttributes:(id)arg3 userInterfaceStyle:(long long)arg4;
- (id)initWithFontCache:(id)arg1 parentRenderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRArticlePageStyleDelegate-Protocol.h"

@class FRArticlePageStyle, FRPublisherLogoTitleImageLoader, NSMutableDictionary;

@interface FRArticlePageStyleManager : NSObject <FRArticlePageStyleDelegate>
{
    FRPublisherLogoTitleImageLoader *_publisherLogoTitleImageLoader;
    NSMutableDictionary *_articlePageStyles;
    NSMutableDictionary *_updateBlocks;
    FRArticlePageStyle *_currentArticlePageStyle;
}

@property(retain, nonatomic) FRArticlePageStyle *currentArticlePageStyle; // @synthesize currentArticlePageStyle=_currentArticlePageStyle;
@property(readonly, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(readonly, nonatomic) NSMutableDictionary *articlePageStyles; // @synthesize articlePageStyles=_articlePageStyles;
@property(readonly, nonatomic) FRPublisherLogoTitleImageLoader *publisherLogoTitleImageLoader; // @synthesize publisherLogoTitleImageLoader=_publisherLogoTitleImageLoader;
- (void).cxx_destruct;
- (id)articlePageStyleForArticlePageStyleProvider:(id)arg1;
- (void)articlePageStyle:(id)arg1 didChangeToNavigationStyle:(id)arg2;
- (void)articlePageStyleDidUpdatePageStyle:(id)arg1;
- (void)provideUpdateBlock:(CDUnknownBlockType)arg1 forPageStyleProvider:(id)arg2;
- (void)applyArticlePageStyleProvider:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (void)prepareStyleForArticlePageStyleProvider:(id)arg1;
- (void)resetArticlePageStyles;
- (id)initWithPublisherLogoTitleImageLoader:(id)arg1;

@end

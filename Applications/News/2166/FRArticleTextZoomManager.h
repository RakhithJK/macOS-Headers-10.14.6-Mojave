//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCTagSettings;

@interface FRArticleTextZoomManager : NSObject
{
    FCTagSettings *_tagSettings;
}

+ (id)sharedArticleTextZoomManager;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (void)decreaseTextSizeForTagID:(id)arg1;
- (BOOL)canDecreaseTextSizeForTagID:(id)arg1;
- (void)increaseTextSizeForTagID:(id)arg1;
- (BOOL)canIncreaseTextSizeForTagID:(id)arg1;
- (long long)currentTextSizeForTagID:(id)arg1;
- (long long)articleTextSizeForTagID:(id)arg1;
- (id)fontCategoryForTagID:(id)arg1;
- (id)init;

@end


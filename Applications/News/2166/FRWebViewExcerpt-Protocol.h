//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIScrollView;
@protocol WKNavigationDelegate><WKUIDelegate;

@protocol FRWebViewExcerpt <NSObject>
@property(readonly, nonatomic) UIScrollView *fre_scrollView;
- (void)setExcerptDelegate:(id <WKNavigationDelegate><WKUIDelegate>)arg1;
- (void)fre_loadExcerpt:(NSString *)arg1 articleURL:(NSURL *)arg2;
- (void)resetExcerpt;
@end


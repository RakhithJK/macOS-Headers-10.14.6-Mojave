//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray;

@protocol TSDMovieCompatibilityAlertPresenter <NSObject>
- (void)presentMovieCompatibilityAlertForUnplayableMoviePasteboardDrawableProviders:(NSArray *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)presentMovieCompatibilityAlertForUnplayableMovieURLs:(NSArray *)arg1 completionHandler:(void (^)(long long))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol FREditorialContentRefreshObserver <NSObject>
- (void)editorialContentRefreshedWithArticleID:(NSString *)arg1 showBadge:(BOOL)arg2;
- (void)editorialContentRefreshFailedWithError:(NSError *)arg1;
@end


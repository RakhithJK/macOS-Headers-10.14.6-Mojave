//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, NSURL;

@protocol HomepageServiceViewController
- (void)updateHomepageURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setFieldToolTip:(NSString *)arg1;
- (void)setFieldIsEnabled:(BOOL)arg1;
- (void)performHomepageUpdateOnlyIfFieldIsFirstResponder:(BOOL)arg1 handlerToUnblockUserInteraction:(void (^)(void))arg2;
- (void)makeFieldFirstResponder;
@end


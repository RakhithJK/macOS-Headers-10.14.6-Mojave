//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebDriver/NSObject-Protocol.h>

@class NSArray, NSBundle;
@protocol WDSessionHost;

@protocol WDServiceHost <NSObject>
- (void)fetchAttributesForLocalFiles:(NSArray *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)launchApplication:(NSBundle *)arg1 forHost:(id <WDSessionHost>)arg2 completionHandler:(void (^)(int, NSError *))arg3;
@end


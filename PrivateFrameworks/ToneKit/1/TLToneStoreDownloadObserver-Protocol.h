//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TLToneStoreDownloadObserver <NSObject>

@optional
- (void)toneStoreDownloadsDidFinish:(NSArray *)arg1;
- (void)toneStoreDownloadsDidProgress:(NSArray *)arg1;
- (void)toneStoreDownloadsDidStart:(NSArray *)arg1;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)arg1;
- (void)storeAccountNameDidChange:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SpotlightDaemon/NSObject-Protocol.h>

@class CSIndexJob;

@protocol CSSearchableIndexServiceInterface <NSObject>
- (void)performIndexJob:(CSIndexJob *)arg1 acknowledgementHandler:(void (^)(NSError *))arg2;
- (void)performIndexJob:(CSIndexJob *)arg1;
@end


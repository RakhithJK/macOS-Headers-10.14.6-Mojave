//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FCNewsAppConfiguration, FCOperationCanceling;

@protocol FRBackgroundFetchable <NSObject>
- (id <FCOperationCanceling>)backgroundFetchWithAppConfiguration:(id <FCNewsAppConfiguration>)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVPrefetcher, SVVideo;

@protocol SVPrefetcherFactory <NSObject>
- (id <SVPrefetcher>)createPrefetcherForVideo:(id <SVVideo>)arg1 afterVideo:(id <SVVideo>)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoAdProviding, SVVideoProviding;

@protocol SVVideoProviderProviding <NSObject>
- (id <SVVideoAdProviding>)videoAdProviderForVideo:(id <SVVideo>)arg1;
- (id <SVVideoProviding>)videoProviderForVideo:(id <SVVideo>)arg1;
@end


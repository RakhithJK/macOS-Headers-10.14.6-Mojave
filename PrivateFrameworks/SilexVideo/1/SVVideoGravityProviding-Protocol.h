//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSString;

@protocol SVVideoGravityProviding <NSObject>
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property(readonly, copy, nonatomic) NSString *landscapeVideoGravity;
@property(readonly, copy, nonatomic) NSString *portraitVideoGravity;
@property(readonly, copy, nonatomic) NSString *videoGravity;
@end


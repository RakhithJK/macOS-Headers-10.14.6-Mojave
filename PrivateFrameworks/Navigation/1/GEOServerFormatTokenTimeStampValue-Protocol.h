//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSCoding-Protocol.h>
#import <Navigation/NSObject-Protocol.h>

@class NSString, NSTimeZone;

@protocol GEOServerFormatTokenTimeStampValue <NSObject, NSCoding>
@property(readonly, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
@end


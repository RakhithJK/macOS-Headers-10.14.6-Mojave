//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLImageSize : NSObject
{
    long long _pixelsWide;
    long long _pixelsHigh;
}

@property(readonly) long long pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
@property(readonly) long long pixelsWide; // @synthesize pixelsWide=_pixelsWide;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImageSize:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;

@end


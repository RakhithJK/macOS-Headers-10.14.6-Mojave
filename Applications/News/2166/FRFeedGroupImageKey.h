//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface FRFeedGroupImageKey : NSObject <NSCopying>
{
    unsigned long long _style;
    UIColor *_color;
}

@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(unsigned long long)arg1 color:(id)arg2;

@end


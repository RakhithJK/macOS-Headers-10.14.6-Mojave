//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface APSPerAppTokenMapEntry : NSObject
{
    NSData *_perAppToken;
    BOOL _flag;
}

@property(nonatomic) BOOL flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSData *perAppToken; // @synthesize perAppToken=_perAppToken;
- (id)description;
- (void)dealloc;

@end


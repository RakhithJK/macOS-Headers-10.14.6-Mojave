//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying>
{
    struct CADisplayPreferencesPriv *_priv;
}

@property(copy, nonatomic) NSString *preferredHdrMode;
@property(readonly, nonatomic) int _preferredHdrType;
@property(nonatomic) BOOL matchContent;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPreferences:(id)arg1;
- (id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2;
- (id)init;

@end


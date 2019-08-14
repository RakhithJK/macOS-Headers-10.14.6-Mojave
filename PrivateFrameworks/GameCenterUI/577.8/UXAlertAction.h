//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class NSString;

@interface UXAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    long long _style;
    BOOL _enabled;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) long long style; // @synthesize style=_style;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface StocksPreferences : NSObject
{
    BOOL _changeColorSwapped;
    unsigned long long _textDirection;
    NSUserDefaults *_sharedDefaults;
    BOOL _textAttachmentDirectionIsRightToLeft;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft; // @synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft;
@property(readonly, nonatomic) unsigned long long textDirection; // @synthesize textDirection=_textDirection;
@property(readonly, nonatomic, getter=isChangeColorSwapped) BOOL changeColorSwapped; // @synthesize changeColorSwapped=_changeColorSwapped;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)resetLocale;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSKeyedSettings.h>

@interface BSMutableKeyedSettings : BSKeyedSettings
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllSettings;
- (void)applySettings:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setFlag:(long long)arg1 forKey:(id)arg2;

@end


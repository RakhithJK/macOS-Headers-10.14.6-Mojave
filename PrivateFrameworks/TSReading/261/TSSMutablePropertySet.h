//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSSPropertySet.h>

@interface TSSMutablePropertySet : TSSPropertySet
{
}

- (void)intersectPropertySet:(id)arg1;
- (void)removeProperties:(id)arg1;
- (void)removeProperty:(int)arg1;
- (void)addProperties:(id)arg1;
- (void)addProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertySet:(id)arg1;
- (id)initWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSGarbageCollector : NSObject
{
}

+ (id)defaultCollector;
- (struct _NSZone *)zone;
- (void)enableCollectorForPointer:(const void *)arg1;
- (void)disableCollectorForPointer:(const void *)arg1;
- (void)collectExhaustively;
- (void)collectIfNeeded;
- (BOOL)isCollecting;
- (BOOL)isEnabled;
- (void)enable;
- (void)disable;

@end


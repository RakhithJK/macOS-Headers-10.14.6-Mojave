//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ECSizedIconImageCache : NSObject
{
}

+ (void)removeAllCacheItems;
+ (void)removeEntryForIcon:(id)arg1 withSize:(int)arg2 andScaleFactor:(float)arg3;
+ (id)entryWithIcon:(id)arg1 forSize:(int)arg2 andScaleFactor:(float)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)entryWithIcon:(id)arg1 forSize:(int)arg2 andScaleFactor:(float)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIImageProvider : NSObject
{
}

+ (id)cacheKeyForImageResourceName:(id)arg1 template:(BOOL)arg2;
+ (id)uncachedImageForResource:(id)arg1 template:(BOOL)arg2;
+ (id)imageForResource:(id)arg1 template:(BOOL)arg2;
+ (id)imageForResource:(id)arg1 template:(BOOL)arg2 onCacheMiss:(CDUnknownBlockType)arg3;
+ (id)imageForResource:(id)arg1;

@end

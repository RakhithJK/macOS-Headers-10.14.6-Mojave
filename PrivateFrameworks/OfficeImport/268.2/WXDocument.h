//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXDocument : NSObject
{
}

+ (id)documentFrom:(id)arg1 reader:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4;
+ (id)notePositionEnumMap;
+ (id)noteRestartEnumMap;
+ (void)readDocumentSettings:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readDocument:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readSources:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readLists:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readStyles:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readFontTable:(id)arg1 to:(id)arg2 state:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTableProperties : NSObject
{
}

+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 reader:(id)arg2 toProperties:(id)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DOCKEvent.h"

@class NSArray;

@interface DOCKMinimizedWindowsEvent : DOCKEvent
{
    NSArray *_tileList;
    _Bool _animate;
}

- (void).cxx_destruct;
- (void)perform:(CDStruct_95d471ab *)arg1;
- (id)initWithTileList:(id)arg1 animate:(_Bool)arg2;

@end

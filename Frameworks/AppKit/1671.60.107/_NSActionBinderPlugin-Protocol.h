//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSEditorBinderPlugin-Protocol.h>

@class NSArray, NSString;

@protocol _NSActionBinderPlugin <_NSEditorBinderPlugin>
- (BOOL)invokeSelector:(SEL)arg1 withArguments:(NSArray *)arg2 forBinding:(NSString *)arg3 object:(id)arg4;
- (BOOL)targetAndArgumentsAcceptableForPerformAction;
@end


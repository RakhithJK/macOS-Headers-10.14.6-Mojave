//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSSelectionBinderPlugin.h>

__attribute__((visibility("hidden")))
@interface _NSSegmentedControlPlugin : _NSSelectionBinderPlugin
{
}

- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (void)addContentObject:(id)arg1 isPlaceholder:(BOOL)arg2 insertsNullPlaceholder:(BOOL)arg3 value:(id)arg4 index:(long long)arg5 cellOrControl:(id)arg6;
- (void)removeAllContentObjectsInCellOrControl:(id)arg1;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;
- (unsigned long long)allowedValueBindingMask;

@end

